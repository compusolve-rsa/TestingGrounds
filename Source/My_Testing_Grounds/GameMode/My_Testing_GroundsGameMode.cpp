// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "My_Testing_GroundsGameMode.h"
#include "HUD/My_Testing_GroundsHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMy_Testing_GroundsGameMode::AMy_Testing_GroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Player/Behavior/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMy_Testing_GroundsHUD::StaticClass();
}
