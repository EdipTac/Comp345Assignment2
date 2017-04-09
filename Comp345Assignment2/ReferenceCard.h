#pragma once
#include <vector>
#include <string>



/*
The following is the header file for the Reference card in the game.
The reference card is only used as the name indicated, for reference in the game.
It only contains the basic actions that the players can do each turn and therefore
consists of only text to describe the actions that can be done. Therefore, the code
for the ReferenceCard is a single string that contains all the actions that can be done
during the game.
Additionally, it also contains a printReference function to display the content of the
ReferenceCard.
*/
class ReferenceCard {
private:

	std::string _actions;
public:
	ReferenceCard();
	void printReference();
	virtual std::string toString();

};