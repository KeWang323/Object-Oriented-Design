#pragma once
#include"ParkingLot.h"
#include"VehicleSize.h"
#include <string>
class Vehicle {
public:
	string name;
	VehicleSize vehiclesize;
	explicit Vehicle(VehicleSize vs = VehicleSize::None, string s = "None"): vehiclesize(vs), name(s) {
		cout << "construct Vehicle: " << name << endl;
	}
};