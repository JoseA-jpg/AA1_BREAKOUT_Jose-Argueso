#pragma once
#include "Scene.h"

class CreditsScene : public Scene {
protected:
	std::string Texto = "Creditos para: yo mismo Jose Arg�eso";

public:
	CreditsScene() {
		nextScene = "Menu";
	}
	void Update() override;
	void Render() override;
}; 
