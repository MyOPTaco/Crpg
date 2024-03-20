#include "Game.h"

Game::Game() 
{
	choice = 0;
	playing = true;
}

Game::~Game() 
{

}

//Functions
void Game::mainMenu() 
{
	std::cout << "MAIN MENU" << std::endl << std::endl;

	std::cout << "Random" << std::endl;
	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Travel" << std::endl;
	std::cout << "2: Shop" << std::endl;
	std::cout << "3: Level up" << std::endl;
	std::cout << "4: Rest" << std::endl;
	std::cout << "5: Character sheet" << std::endl;

	std::cout << std::endl << "choice: ";
	std::cin >> choice;

	switch (choice) 
	{
	case 0:
		playing = false;
		break;
	default:
		break;
	}



}