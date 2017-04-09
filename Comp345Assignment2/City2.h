#pragma once
#include <string>
#include <vector>
#include "Colour.h"
#include "CubePool.h"
#include "ResearchStationsAndDiseases.h"
class City2 {
public:
	City2(std::string name , std::string colour, int cubes);
	~City2();
	int getNbOfDiseases();
	bool isThereStation();

	void addCubes(int add);
	void addStation();

	// The city's name
	std::string name() const;
	std::string& name();
	void name(const std::string& name);

	// The city's colour
	std::string colour() const;
	std::string& colour();
	void colour(const std::string& colour);

private:
	std::string _name;
	std::string _colour;
	int _currentCubes;
	bool _hasResearchStation = false;
};