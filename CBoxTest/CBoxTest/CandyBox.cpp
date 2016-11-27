#include "stdafx.h"
#include "CandyBox.h"


using namespace std;


CCandyBox::CCandyBox(const char* str)
{
	cout << "CCandyBox constructor 1 called" << endl;
	m_Contents = new char[strlen(str) + 1];
	strcpy_s(m_Contents, strlen(str) + 1, str);
}


CCandyBox::CCandyBox(double lv, double wv, double hv, const char* str) : CBox(lv, wv, hv)
{
	cout << "CCandyBox constructor 2 called" << endl;
	m_Contents = new char[strlen(str) + 1];
	strcpy_s(m_Contents, strlen(str) + 1, str);
}


CCandyBox::CCandyBox(const CCandyBox& initCB) : CBox(initCB)
{
	cout << "CCandyBox copy constructor called" << endl;
	m_Contents = new char[strlen(initCB.m_Contents) + 1];
	strcpy_s(m_Contents, strlen(initCB.m_Contents) + 1, initCB.m_Contents);
}


CCandyBox::CCandyBox(CCandyBox&& initCB) : CBox(move(initCB))
{
	cout << "CCandyBox move constructor called" << endl;
	m_Contents = initCB.m_Contents;
	initCB.m_Contents = 0;
}


CCandyBox::~CCandyBox()
{
	cout << "CCandyBox destructor called" << endl;
	delete[] m_Contents;
};


double CCandyBox::getVolume() const
{
	cout << "CCandyBox getVolume()" << endl;
	return 0.8 * m_Length * m_Width * m_Height;
}