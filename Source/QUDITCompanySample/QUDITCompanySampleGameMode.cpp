// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "QUDITCompanySampleGameMode.h"
#include "QUDITCompanySampleCharacter.h"

AQUDITCompanySampleGameMode::AQUDITCompanySampleGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AQUDITCompanySampleCharacter::StaticClass();	
}
