#pragma once
#include"ParkingLot.h"
#include"ParkingSpot.h"
#include"VehicleSize.h"
class Level {
public:
	vector<ParkingSpot*> spots;
	int avaliableSpots = 0;
	int floor;
	Level(int flr, int spot_num) {
		floor = flr;
		spots = vector<ParkingSpot*>(spot_num);
		int compactSpots = spot_num / 3;
		int regularSpots = spot_num / 3;
		int largeSpots = spot_num - compactSpots - regularSpots;
		for (int i = 0; i < spot_num; i++) {
			VehicleSize vs = VehicleSize::Large;
			if (i < compactSpots) {
				vs = VehicleSize::Compact;
			}
			else if (i < compactSpots + regularSpots) {
				vs = VehicleSize::Regular;
			}
			spots[i] = new ParkingSpot(i, vs);
		}
		avaliableSpots = spot_num;

	}
	bool parkVehicle(Vehicle vehicle) {
		if (avaliableSpots < 1) {
			return false;
		}
		int spotnumber = findSpot(vehicle);
		if (spotnumber == -1) {
			return false;
		}
		else {
			return parkatspot(vehicle, spotnumber);
		}
	}
	int findSpot(Vehicle vehicle) {
		for (int i = 0; i < spots.size();i++) {
			if (spots[i]->isFit(vehicle) && spots[i]->isAvailable()) {
				return i;
			}
		}
		return -1;
	}
	bool parkatspot(Vehicle vehicle, int spotnumber) {
		spots[spotnumber]->park(vehicle);
		cout << "parking succeed: " << vehicle.name << " " << "Spot Number: " << spotnumber << " ";
		avaliableSpots--;
		return true;
	}
	int getToTalSpotPerLevel() {
		return spots.size();
	}
	int getAvaliableSpots() {
		return avaliableSpots;
	}
	void print() {
		for (int i = 0; i < spots.size(); i++) {
			if (spots[i]->curVehicle.vehiclesize == VehicleSize::None) {
				cout << "Vacant" << " ";
			}
			else if (spots[i]->curVehicle.vehiclesize == VehicleSize::Compact) {
				cout << "Compact" << " ";
			}
			else if (spots[i]->curVehicle.vehiclesize == VehicleSize::Regular) {
				cout << "Regular" << " ";
			}
			else {
				cout << "Large" << " ";
			}
		}
	}
};