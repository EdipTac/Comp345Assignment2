#pragma once
#include <vector>
#include <iostream>
#include <memory>
#include <string>

#include "Observable.h"

class City2;

class ResearchStationsAndDiseases : public Observable
{
public:
	ResearchStationsAndDiseases();
	~ResearchStationsAndDiseases();
	int getRemainingStations();
	int getRemainingCubes();

	void addDiseaseCube(int citypos, int nbcubes);
	void addResearchStation(int citypos);


private:
	int _cubesRemaining;
	int _stationsRemaining;
	int _diseaseCubes;
	std::vector<City2*> cities;
};

