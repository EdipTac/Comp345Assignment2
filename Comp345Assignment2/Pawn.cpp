#include "Pawn.h"

/*
This is the cpp file for the pawn class. It only consists of 2 constructors since the Map
is not yet a part of the code. When the Map is combined, the code will be updated.
As of right now, the pawns only contain 2 strings, 1 for color and the other for the position
that the pawn is in within the map.

The defauly position is chosen as Atlanta since that is where all characters begin the game.
*/

Pawn::Pawn() {
	_color = "";
	_position = "Atlanta";
}

Pawn::Pawn(std::string col, std::string pos) {
	_color = col;
	_position = pos;
}

