#include "City2.h"



City2::City2(std::string name, std::string colour, int cubes)
	: _name{ name }
	, _colour{ colour }
	, _currentCubes {cubes}


{} // Empty

City2::~City2() {}


int City2::getNbOfDiseases() {
	return _currentCubes;
}

bool City2::isThereStation() {
	return _hasResearchStation;
}


std::string City2::name() const
{
	return _name;
}

std::string& City2::name()
{
	return _name;
}


std::string City2::colour()const {
	return _colour;
}

std::string& City2::colour() {
	return _colour;
}

void City2::addCubes(int add) {
	_currentCubes = _currentCubes + add;
}

void City2::addStation() {
	_hasResearchStation = true;
}


