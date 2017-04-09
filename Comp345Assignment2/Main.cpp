#include <iostream>
#include "DeckofRefs.h"
#include "DeckofRoles.h"
#include "RoleCard.h"
#include "ReferenceCard.h"
#include "Pawn.h"
#include "Player.h"
#include <memory>
#include <string>
#include "ResearchStationsAndDiseases.h"
#include "ResearchStationsAndDiseasesView.h"

/* Student: Edip Tac, ID: 26783287 Comp 345: Assignment 1

this is the main area where the game is deployed. Since the code is written for only the common part and distinct part 1
of the assignment, only those 2 requirements are tested in the following code.
*/



int main() {

	std::cout << ("NEW GAME") << "\n\n";

	ResearchStationsAndDiseases *observable = new ResearchStationsAndDiseases;

	ResearchStationsAndDiseasesView *observer = new ResearchStationsAndDiseasesView(observable);


	DeckOfRefs referenceDeck{}; //creating a deck of reference cards

	DeckofRoles roleCardDeck{}; //creating a deck role cards




	Player p1("Player1", roleCardDeck.drawRoleCard()); //initializing the first player with his name and a randomly drawn role card
	p1.displayRole(); //displaying the role card and its content
	p1.displayReference(); //displaying the reference card and its content

	 //the following is identical to above but for the 2nd players
	Player p2("Player2", roleCardDeck.drawRoleCard());
	p2.displayRole();
	p2.displayReference();


	std::cout << "Player1's turn \n Please press 1 to get remaining cubes and press 2 to get remaining stations, and press 3 to add stations or cubes \n";
	int in = 1;
	while (in != 9) {

		std::cin >> in;
		if (in == 1) {
			observable->getRemainingCubes();

		}
		if (in == 2) {
			observable->getRemainingStations();
		}


		if (in == 3) {
			std::cout << "Please press 1 to add cubes and 2 to add stations \n";
			std::cin >> in;
			if (in == 1) {
				std::cout << "Please enter the city position (int) and the number of cubes you would like to add (int) \n";
				int citypos;
				int nbcubes;
				std::cin >> nbcubes;
				std::cin >> citypos;
				observable->addDiseaseCube(citypos, nbcubes);
			}
			if (in == 2) {
				std::cout << "Please enter the city position (int) you would like to add a station to \n";
				int citypos;
				std::cin >> citypos;
				observable->addResearchStation(citypos);
			}
		}
	}




	system("pause");

};