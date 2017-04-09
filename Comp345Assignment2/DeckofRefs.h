#pragma once
#include <string>
#include <vector>
#include "ReferenceCard.h"
#include "RoleCard.h"
#include <memory>
using cardptr = std::unique_ptr < ReferenceCard >;

/*
The following is the header file for the deck of reference cards that will be used within the game.
Since each character gets a reference card, the cards were stored in a deck from which the player
can draw a card and place it within their inventory. The code contains the actual deck as a vector
and contains the constructor for the deck, as well as a function to draw a reference card from the deck.
There was only a default constructor made for the reference cards since all of the reference cards have
the exact same text content with nothing else inside them.
*/

class DeckOfRefs {
public:
	DeckOfRefs();
	cardptr drawRefCard();

private:
	std::vector <std::unique_ptr <ReferenceCard>> deckOfRef;
};