#include "stdafx.h"
#include "Can.h"


CCan::CCan(double hv, double dv)
{
	m_Height = hv;
	m_Diameter = dv;
}


CCan::~CCan()
{
	cout << "CCan destructor called" << endl;
}


double CCan::showVolume() const
{
	cout << "CCan showVolume()" << endl;
	cout << "The box volume is " << endl;
	return getVolume();
}


double CCan::getVolume() const
{
	cout << "CCan getVolume()" << endl;
	return 0.25 * M_PI * m_Diameter * m_Diameter * m_Height;
}