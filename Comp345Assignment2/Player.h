#pragma once
#include <string>
#include <vector>
#include "ReferenceCard.h"
#include "RoleCard.h"
#include "DeckofRefs.h"
#include "Pawn.h"
#include "DeckofRoles.h"
#include <memory>

/*
The following is the header file for a player within the game. The class contains all the requirements for the player along with his belongings.
The assignment only required the selection of 1 single distinct part in the assignment therefore only the Role and Reference cards were created
for the player. The additional content will be added when the project combines all of the distinct parts of each group member.
The player's name, reference card, and role card are created in this class. The pawn that will be taken from the Map distinct part of the assignment
will make use of the "Color" function within the role card to determine the color of the pawn. The addition of a pawn member currently would be reduntant
as it could only contain a color and nothing else, since the color is already decided by the role card, the pawn was left to be intialized when the Map
was merged into this code.
The code also contains display functions in order to print out the content of the role card as well as the reference card within the player's
inventory.
Besides the display functions, the class only contains the default and specific constructors for the player
*/
class Player {
private:
	std::string _name;
	std::unique_ptr<ReferenceCard> _myReference;
	std::unique_ptr<RoleCard> _myRole;

public:
	Player();
	Player(std::string name, std::unique_ptr<RoleCard> role);
	void displayRole();
	void displayReference();



};