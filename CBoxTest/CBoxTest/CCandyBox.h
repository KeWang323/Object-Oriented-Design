#pragma once
#include "stdafx.h"
#include "CBox.h"
#include<cstring>
#include<iostream>
using namespace std;
class CCandyBox: public CBox {
public:
    char* m_Contents;
    explicit CCandyBox(double lv = 1.0, double wv = 1.0, double hv = 1.0, const char* str = "Candy") 
		:CBox(lv, wv, hv)
	{
		cout << "CCandyBox constructor2 called" << endl;
        m_Contents = new char[strlen(str) + 1];
        strcpy_s(m_Contents, strlen(str) + 1, str);
    }
	explicit CCandyBox(const char* str = "Candy")
	{
		cout << "CCandyBox constructor1 called" << endl;
		m_Contents = new char[strlen(str) + 1];
		strcpy_s(m_Contents, strlen(str) + 1, str);
	}
	CCandyBox(const CCandyBox& initCB): CBox(initCB) {
		cout << "CCandyBox copy constructor called" << endl;
		m_Contents = new char[strlen(initCB.m_Contents) + 1];
		strcpy_s(m_Contents, strlen(initCB.m_Contents) + 1, initCB.m_Contents);
	}
	CCandyBox() {

	}
	virtual double Volume() const override {
		cout << "CCandyBox Volume" << endl;
		return 0.85 * m_Length * m_Width * m_Height;
	}
    ~CCandyBox()
    {
		cout << "CandyBox destructor called" << endl;
        delete[] m_Contents;
    }
};