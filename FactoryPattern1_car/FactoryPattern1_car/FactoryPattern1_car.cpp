// FactoryPattern1_car.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

using namespace std;

class CCar {
public:
	CCar() {
	}
	~CCar()
	{
	}
	virtual void run() = 0;
};

class CSedan : public CCar {
public:
	CSedan() {
	}
	~CSedan()
	{
	}
	void run() override {
		cout << "Sedan runs" << endl;
	}
};

class CSuv : public CCar {
public:
	CSuv() {
	}
	~CSuv()
	{
	}
	void run() override {
		cout << "Suv runs" << endl;
	}
};

class CTruck : public CCar {
public:
	CTruck() {
	}
	~CTruck()
	{
	}
	void run() override {
		cout << "Truck runs" << endl;
	}
};

class CCarFactory {
public:
	CCarFactory(void) {
	}
	~CCarFactory() {
	}
	virtual CCar* createCar() = 0;
};

class CSedanFactory : public CCarFactory {
public:
	CSedanFactory() {
	}
	~CSedanFactory() {
	}
	CCar* createCar() override {
		return new CSedan();
	}
};

class CSuvFactory : public CCarFactory {
public:
	CSuvFactory() {
	}
	~CSuvFactory() {
	}
	CCar* createCar() override {
		return new CSuv();
	}
};

class CTruckFactory : public CCarFactory {
public:
	CTruckFactory() {
	}
	~CTruckFactory() {
	}
	CCar* createCar() override {
		return new CTruck();
	}
};



int main()
{
	CCarFactory *SedanFactory = new CSedanFactory();
	CCar *Sedan = SedanFactory->createCar();
	Sedan->run();

	CCarFactory *SuvFactory = new CSuvFactory();
	CCar *Suv = SuvFactory->createCar();
	Suv->run();

	CCarFactory *TruckFactory = new CTruckFactory();
	CCar *Truck = TruckFactory->createCar();
	Truck->run();

	return 0;
}

