// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "HoverControllerGameMode.h"
#include "HoverControllerPawn.h"
#include "HoverControllerHud.h"

AHoverControllerGameMode::AHoverControllerGameMode()
{
	DefaultPawnClass = AHoverControllerPawn::StaticClass();
	HUDClass = AHoverControllerHud::StaticClass();
}
