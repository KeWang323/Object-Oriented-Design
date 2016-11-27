#pragma once
#include"Box.h"


class CCandyBox: public CBox
{
public:
	char* m_Contents;
	explicit CCandyBox(const char* str = "Candy");
	explicit CCandyBox(double lv, double wv, double hv, const char* str = "Candy");
	CCandyBox(const CCandyBox& initCB);
	CCandyBox(CCandyBox&& initCB);
	virtual ~CCandyBox() override;
	virtual double getVolume() const override;
};