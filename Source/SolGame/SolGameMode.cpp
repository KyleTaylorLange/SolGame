// Copyright Epic Games, Inc. All Rights Reserved.

#include "SolGameMode.h"
#include "SolCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASolGameMode::ASolGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
