// Robert Chubb - Saxon Rah - Parabolic Labs

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

class FMachineLearnModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};