#pragma once
#include <string>

#include "EngineLib.h"

class LionelScene :
    public IScene
{
	std::string GetName() override;
    void GenerateContent() override;


};

