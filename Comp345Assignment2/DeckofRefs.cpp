#include <string>
#include <vector>
#include "ReferenceCard.h"
#include "RoleCard.h"
#include "DeckofRefs.h"
#include <memory>


/*
This is the cpp file for the Deck of reference cards that will be used within the game.
The defauly contsructor just pushes reference cards into a vector and stores them. Since the
content of all the reference cards are identical, the detaul constructor just calls the default
constructor of the ReferenceCard class and creates a vector containing all of the reference cards.
The deck was made only upto 4 cards since the maximumum number of players is 4 within the game.
Additionally, the drawRefCard function draws and returns a reference card to the player who
draws it from the deck.
*/

DeckOfRefs::DeckOfRefs() {
	for (int i = 0; i < 3; i++) {
		deckOfRef.push_back(std::make_unique<ReferenceCard>());
	}
}

cardptr DeckOfRefs::drawRefCard() {
	auto temp = move(*deckOfRef.begin());
	deckOfRef.erase(deckOfRef.begin());
	return (move(temp));

}