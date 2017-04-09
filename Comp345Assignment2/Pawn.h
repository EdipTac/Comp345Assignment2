#pragma once
#include <string>

/*
This is the header file for the pawns that will be used within the game. Currently since only the Distinct Part 1
was done in the assignment, the code only can contain a text for the color and a text for the position of the pawn.
This will be changed and merged with the Map part of the assignment and will therefore be redone. However, in the mean
time only the strings were given to the pawn.
*/

class Pawn {
public:
	Pawn();
	Pawn(std::string color, std::string position);

private:
	std::string _color;
	std::string _position;
};