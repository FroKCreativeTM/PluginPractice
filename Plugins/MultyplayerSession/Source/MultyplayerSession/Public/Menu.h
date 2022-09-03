// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Menu.generated.h"

/**
 * 
 */
UCLASS()
class MULTYPLAYERSESSION_API UMenu : public UUserWidget
{
	GENERATED_BODY()
	
public : 
	UFUNCTION(BlueprintCallable)
	void MenuSetup();

protected : 
	virtual bool Initialize() override;

private : 
	UPROPERTY(meta = (BindWidget))
	class UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* JoinButton;

	UFUNCTION()
	void HostButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	// 모든 온라인 세션 함수성을 다루기 위해 제작된 서브시스템
	class UMultiplayerSessionSubsystem* MultiplayerSessionSubsystem;
};
