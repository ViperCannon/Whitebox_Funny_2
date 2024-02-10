// Copyright Epic Games, Inc. All Rights Reserved.

#include "WhiteBoxGameMode.h"
#include "WhiteBoxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWhiteBoxGameMode::AWhiteBoxGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
