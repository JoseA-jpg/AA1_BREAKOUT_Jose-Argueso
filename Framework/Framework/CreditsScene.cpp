#include "CreditsScene.h"


void CreditsScene::Update() {

	if (GetAsyncKeyState('E') != 0) {
		finished = true;
	}
}
void CreditsScene::Render() {
	setlocale(LC_ALL, "spanish");
	std::cout << "Pulsa E para salir al menu" << std::endl;
	std::cout << Texto << std::endl;
}