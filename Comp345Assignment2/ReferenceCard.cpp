#include "ReferenceCard.h"
#include <iostream>
#include <vector>

/*
This is the cpp file for the reference card. It consists of a single string that indicates all the actions
that a character can take during their turn.
Additionally it also contains the printReference function that displays the content of the reference card.
*/

ReferenceCard::ReferenceCard() {



	_actions = "Drive/Ferry: \nMove to a city connected by a white line to the one you are in."
		"Direct Flight: \nDiscard a city card to move to the city named on the card.\n"
		"Charter Flight: \nDiscard the city card that MATCHES the city you are in to move to ANY city.\n"
		"Shuttle Flight: \nMove from a city with a research station to any other city that has a research station.\n"
		"Build a Research Station: \nDiscard the city card that matches the city you are in to place a research station there. \n"
		"Take the research station from the pile next to the bard. If all the 6 research stations \n"
		"have been builtm take a research station from anywhere on the board.\n"
		"Treat Disease: \nRemove 1 disease cube from the city you are in, placing it in the cube suppled next to the board. \n"
		"If this disease color has been cured (see Discover a Cure below), remove all cubes of that color from \n"
		"the city you are in. \n If the LAST CUBE of a CURED DISEASE is removed from the board, this disease is \n"
		"ERADICATED. Flip its cure marker from its VIAL side to its ERADICATED side\n"
		"Share Knowledge: \nYou can do this action in two ways: \n GIVE the city card that matches the city you are in to another \n"
		"player, or \n TAKE a city card that matches the city you are in from another player. \n  The other player \n"
		"must also be in the city with you. Both of you need to agree to do this. if the player who gets the card \n"
		"now has more than 7 cards, that player must immediately discard a card or play an Event card.\n"
		"Discover a Cure: \nAt ANY research station, discard 5 city cards of the same color from your hand to cure the disease of THAT \n"
		"COLOR. Move the disease's cure marker to its Cure indicator. \n If no cubes of this color are on the board, this \n"
		"disease if now ERADICATED. Flip its cure marker from its VIAL side to its ERADICATED side.\n";



}

std::string ReferenceCard::toString() {
	return "Actions:" + _actions;
}


void ReferenceCard::printReference() {

	std::cout << "The reference card content is as follow: \n" << _actions << std::endl;

}