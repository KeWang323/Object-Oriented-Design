#pragma once
#include<iostream>
using namespace std;
class CBox {
protected:
	double m_Length;
	double m_Width;
	double m_Height;
public:
	explicit CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0) {
		m_Length = lv;
		m_Width = wv;
		m_Height = hv;
		cout << "CBox constructor called" << endl;
	}
	CBox(const CBox& initB) {
		m_Length = initB.m_Length;
		m_Width = initB.m_Width;
		m_Height = initB.m_Height;
		cout << "CBox copy constructor called" << endl;
	}
	double ShowVolume() const {
		cout << "The Box volume is ";
		return Volume();
	}
	virtual double Volume() const {
		cout << "CBox Volume" << endl;
		return m_Length * m_Width * m_Height;
	}
	friend double getBoxSurface(const CBox& box);
	~CBox() {
		cout << "Cbox destructor called" << endl;
	}
};
double getBoxSurface(const CBox& box) {
	return 2.0 * (box.m_Length * box.m_Width
		+ box.m_Length * box.m_Height
		+ box.m_Height * box.m_Width);
}