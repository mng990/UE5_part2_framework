// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTService_Detect.h"
#include "ABAI.h"
#include "AIController.h"
#include "Interface/ABCharacterAIInterface.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Physics/ABCollision.h"
#include "DrawDebugHelpers.h"

UBTService_Detect::UBTService_Detect()
{
	NodeName = TEXT("Detect");
	Interval = 1.0f;
} // Detect Node(Tick Node)�� �̸�, interval(����) ����

void UBTService_Detect::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (nullptr == ControllingPawn)
	{
		return;
	}

	FVector Center = ControllingPawn->GetActorLocation();
	UWorld* World = ControllingPawn->GetWorld();
	if (nullptr == World) {
		return;
	}

	IABCharacterAIInterface* AIPawn = Cast<IABCharacterAIInterface>(ControllingPawn);
	if (nullptr == AIPawn)
	{
		return;
	}

	float DetectRadius = AIPawn->GetAIDetectRange();

	TArray<FOverlapResult> OverlapResults;
	FCollisionQueryParams CollisionQueryParam(SCENE_QUERY_STAT(Detect), false, ControllingPawn);
	bool bResult = World->OverlapMultiByChannel(
		OverlapResults,
		Center,
		FQuat::Identity,
		CCHANNEL_ABACTION,
		FCollisionShape::MakeSphere(DetectRadius),
		CollisionQueryParam
	);

	if (bResult)
	{
		for (auto const& OverlapResult : OverlapResults)
		{
			APawn* Pawn = Cast<APawn>(OverlapResult.GetActor());
			if (Pawn && Pawn->GetController()->IsPlayerController()) // player character�� ����
			{
				OwnerComp.GetBlackboardComponent()->SetValueAsObject(BBKEY_TARGET, Pawn); // Target �� ����
				DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Green, false, 0.2f); // ����� ��������� ���� ǥ��
				DrawDebugPoint(World, Pawn->GetActorLocation(), 10.0f, FColor::Green, false, 0.2f); // �÷��̾���� ��ġ�� ���� ������ ǥ��
				DrawDebugLine(World, ControllingPawn->GetActorLocation(), Pawn->GetActorLocation(), FColor::Green, false, 0.27f); 
				return;
			}
		}
	} // ������ ��� Pawn�� ���ؼ� �˻縦 ����

	OwnerComp.GetBlackboardComponent()->SetValueAsObject(BBKEY_TARGET, nullptr);
	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, false, 0.2f); // ���� �� ���� ǥ��
}
