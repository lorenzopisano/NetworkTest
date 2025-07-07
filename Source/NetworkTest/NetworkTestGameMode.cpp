// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkTestGameMode.h"
#include "NetworkTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetworkTestGameMode::ANetworkTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
