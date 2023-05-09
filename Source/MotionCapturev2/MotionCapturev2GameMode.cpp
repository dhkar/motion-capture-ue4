// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MotionCapturev2GameMode.h"
#include "MotionCapturev2Character.h"
#include "UObject/ConstructorHelpers.h"

AMotionCapturev2GameMode::AMotionCapturev2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
