#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include "Container.h"
class CCan : public CContainer
{
public:
	explicit CCan(double hv = 4.0, double dv = 2.0);
	virtual ~CCan() override;
	double showVolume() const override;
	virtual double getVolume() const override;
protected:
	double m_Height;
	double m_Diameter;
};

