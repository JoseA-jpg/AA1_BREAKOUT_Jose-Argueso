#include "MenuScene.h"

void MenuScene::Update()
{
	if (GetAsyncKeyState('2') != 0) {
		nextScene = "Ranking"; //Selects the next scene 
		finished = true; //Indicates that this scene is finished
	}
	else if (GetAsyncKeyState('1') != 0) {
		nextScene = "Gameplay";
		finished = true;

	}
	else if (GetAsyncKeyState('3') != 0) {
		nextScene = "Credits";
		finished = true;
	}
	else if (GetAsyncKeyState('0') != 0) {
		nextScene = "Exit";
		finished = true;
	}
}

void MenuScene::Render()
{	

	std::cout << "	/*////** /**////** /**/////     ****     **////**/**  **   **/////** /**    /**/////**/// " << std::endl;
	std::cout << "	/*   /** /**   /** /**         **//**   **    // /** **   **     //**/**    /**    /**" << std::endl;
	std::cout << "	/******  /*******  /*******   **  //** /**       /****   /**      /**/**    /**    /**" << std::endl;
	std::cout << "	/*//// **/**///**  /**////   **********/**       /**/**  /**      /**/**    /**    /**    " << std::endl;
	std::cout << "	/*    /**/**  //** /**      /**//////**//**    **/**//** //**     ** /**    /**    /**    " << std::endl;
	std::cout << "	/******* /**   //**/********/**     /** //****** /** //** //*******  //*******     /**" << std::endl;
	std::cout << "	///////  //     // //////// //      //   //////  //   //   ///////    ///////      //" << std::endl;

	std::cout << "1. GAMEPLAY" << std::endl;
	std::cout << "2. RANKING" << std::endl;
	std::cout << "3. CREDITS" << std::endl << std::endl;
	std::cout << "0. EXIT" << std::endl;
}
