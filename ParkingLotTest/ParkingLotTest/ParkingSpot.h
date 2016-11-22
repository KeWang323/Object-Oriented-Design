#pragma once
#include"ParkingLot.h"
#include"Vehicle.h"
#include"VehicleSize.h"
class ParkingSpot {
public:
	VehicleSize spotSize;
	Vehicle curVehicle;
	int spotLocation = -1;
	explicit ParkingSpot(int NO = -1, VehicleSize vs = VehicleSize::None):spotLocation(NO),spotSize(vs) 
	{
		cout << "construct ParkingSpot" << endl;
	}
	bool isFit(Vehicle vehicle) {
		return spotSize == vehicle.vehiclesize;
	}
	bool isAvailable() {
		return curVehicle.vehiclesize == VehicleSize::None;
	}
	void park(Vehicle vehicle) {
		curVehicle.vehiclesize = vehicle.vehiclesize;
	}
	void leave() {
		curVehicle.vehiclesize = VehicleSize::None;
	}
};