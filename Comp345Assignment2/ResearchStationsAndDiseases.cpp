#include "ResearchStationsAndDiseases.h"
#include "City2.h"


ResearchStationsAndDiseases::ResearchStationsAndDiseases()
	:_diseaseCubes{96} 
	, _stationsRemaining{ 6 }
{
	cities.push_back(new City2 ("Atlanta", "Blue", 0));
	cities.push_back(new City2("Miami", "Yellow", 0));
	cities.push_back(new City2("Karachi", "Black", 0));
	cities.push_back(new City2("Montreal", "Blue", 0));
	cities.push_back(new City2("Seoul", "Red", 0));

};

ResearchStationsAndDiseases::~ResearchStationsAndDiseases() {};


int ResearchStationsAndDiseases::getRemainingCubes() {

	for (unsigned i = 0; i < cities.size(); i++) {
		_diseaseCubes = (_diseaseCubes) - (cities[i]->getNbOfDiseases());
	}
	std::cout << "There are currently " << _diseaseCubes << " remaining disease cubes. \n";
	return _diseaseCubes;
}

int ResearchStationsAndDiseases::getRemainingStations() {
	int j = 6;
	for (unsigned i = 0; i < cities.size(); i++) {
		if (cities[i]->isThereStation()) {
			j = j - 1;
		}

	}
	std::cout << "There are currently " << j << " remaining research stations. \n";

	return j;

}




void ResearchStationsAndDiseases::addDiseaseCube(int citypos, int nbcubes) {
	cities[citypos]->addCubes(nbcubes);
	notify();
}

void ResearchStationsAndDiseases::addResearchStation(int citypos) {
	cities[citypos]->addStation();
	notify();
}



//void ResearchStationsAndDiseases::display() {
//	std::cout << "There are currently " << _cubesRemaining << " disease cubes and " << _stationsRemaining << " research stations that can be used. \n";
//	
//}
//		
//void ResearchStationsAndDiseases::update() {
//	display();
//}