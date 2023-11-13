// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_BallisticsGameMode.h"
#include "UE5_BallisticsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_BallisticsGameMode::AUE5_BallisticsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
