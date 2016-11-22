#pragma once
#include<iostream>
#include<vector>
#include"Level.h"
using namespace std;

class ParkingLot {
public:
	vector<Level*> levels;
	int level_num;
	int spot_num;
	explicit ParkingLot(int ln = 6, int sn = 6) : level_num(ln), spot_num(sn) {
		levels = vector<Level*>(level_num);
		for (int i = 0; i < level_num;i++) {
			cout << "construct level" << " " << i << endl;
			levels[i] = new Level(i, spot_num);
		}
	}
	int getTotalLevels() {
		return levels.size();
	}
	int getTotalSpots() {
		return levels.size() * levels[0]->getToTalSpotPerLevel();
	}
	bool parkVehicle(Vehicle vehicle) {
		for (int i = 0; i < levels.size(); i++) {
			if (levels[i]->parkVehicle(vehicle)) {
				cout << "Level Number: " << i << endl;
				return true;
			}
		}
		return false;
	}
	void print() {
		for (int i = 0; i < levels.size(); i++) {
			cout << "Level" << " " << i <<  ":";
			levels[i]->print();
			cout << endl;
		}
		cout << endl;
	}
};