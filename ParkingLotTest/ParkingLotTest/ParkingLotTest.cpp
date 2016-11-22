// ParkingLotTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;
#include"ParkingLot.h"
#include"Level.h"
#include"ParkingSpot.h"
#include"Vehicle.h"
#include"VehicleSize.h"

int main()
{
	ParkingLot P1(2, 3);
	cout << P1.getTotalSpots() << endl;
	Vehicle V1(VehicleSize::Compact, "Corolla");
	Vehicle V2(VehicleSize::Regular, "Passat");
	Vehicle V3(VehicleSize::Large, "BMW760");
	Vehicle V4(VehicleSize::Compact, "Polo");
	P1.parkVehicle(V1);
	cout << P1.levels[0]->getAvaliableSpots() << endl;

	P1.parkVehicle(V2);
	cout << P1.levels[0]->getAvaliableSpots() << endl;

	P1.parkVehicle(V3);
	cout << P1.levels[0]->getAvaliableSpots() << endl;

	P1.parkVehicle(V4);
	cout << P1.levels[0]->getAvaliableSpots() << endl;
	cout << P1.levels[1]->getAvaliableSpots() << endl;
	P1.print();

	P1.levels[0]->spots[1]->leave();
	cout << P1.levels[0]->getAvaliableSpots() << endl;

	P1.print();
	//if (P1.levels[0]->spots[0]->isFit(V2)) {
	//	cout << 1 << endl;
	//}
	//else {
	//	cout << 0 << endl;
	//}
	//cout << A.levels[0]->spots[0]->curVehicle << endl;
	//ParkingLot B(10);
	//cout << B.getLevels() << endl;
	return 0;
}

