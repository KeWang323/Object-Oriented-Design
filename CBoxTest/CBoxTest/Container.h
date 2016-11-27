#pragma once
#include<iostream>
using namespace std;
class CContainer
{
public:
	virtual double getVolume() const = 0;
	virtual double showVolume() const;
	virtual ~CContainer();
};

