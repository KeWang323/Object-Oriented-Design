#include "stdafx.h"
#include "Box.h"
#include<algorithm>


using namespace std;


CBox::CBox()
{
	cout << "CBox default constructor 1 called" << endl;
	m_Length = m_Width = m_Height = 1.0;
	increCnt();
}


CBox::CBox(double lv, double wv, double hv) : m_Height(hv)
{
	if (lv <= 0.0 || wv <= 0.0 || hv <= 0.0) {
		throw "No positive dimension specified for CBox object.";
	}
	cout << "CBox constructor 2 called" << endl;
	m_Length = max(lv, wv);
	m_Width = min(lv, wv);
	if (m_Height > m_Length) {
		m_Height = m_Length;
		m_Length = hv;
		double temp = m_Width;
		m_Width = m_Height;
		m_Height = temp;
	}
	else if (m_Height > m_Width) {
		m_Height = m_Width;
		m_Width = hv;
	}
	increCnt();
}


CBox::CBox(const CBox& initB)
{
	cout << "CBox copy constructor called" << endl;
	m_Length = initB.m_Length;
	m_Width = initB.m_Width;
	m_Height = initB.m_Height;
	increCnt();
}


CBox::~CBox()
{
	cout << "CBox destructor called" << endl;
}


void CBox::increCnt()
{
	boxCnt++;
}


double CBox::showVolume() const
{
	cout << "CBox showVolume()" << endl;
	cout << "The box volume is " << endl;
	return getVolume();
}


double CBox::getLength() const
{
	return m_Length;
}


double CBox::getWidth() const
{
	return m_Width;
}


double CBox::getHeight() const
{
	return m_Height;
}


double CBox::getVolume() const
{
	cout << "CBox getVolume()" << endl;
	return m_Length * m_Width * m_Height;
}


double getBoxSurface(const CBox& box)
{
	cout << "The surface area is ";
	return 2.0 * (box.m_Length * box.m_Width
		+ box.m_Length * box.m_Height
		+ box.m_Height * box.m_Width);
}


void CBox::showBox() const
{
	cout << m_Length << " " << m_Width << " " << m_Height << endl;
}


bool CBox::compare(const CBox& box) const
{
	return this->getVolume() > box.getVolume();
}


bool CBox::operator<(const CBox& abox) const
{
	return this->getVolume() < abox.getVolume();
}


bool CBox::operator==(const CBox& abox) const
{
	return this->getVolume() == abox.getVolume();
}

bool CBox::operator<(const double& value)
{
	return this->getVolume() < value;
}


bool CBox::operator<=(const double& value)
{
	return this->getVolume() <= value;
}


bool CBox::operator>(const double& value)
{
	return this->getVolume() > value;
}


bool CBox::operator>=(const double& value)
{
	return this->getVolume() >= value;
}


bool CBox::operator==(const double& value)
{
	return this->getVolume() == value;
}


bool CBox::operator!=(const double& value)
{
	return this->getVolume() != value;
}


CBox CBox::operator+(const CBox& abox) const
{
	return CBox(m_Length > abox.m_Length ? m_Length : abox.m_Length,
		m_Width > abox.m_Width ? m_Width : abox.m_Width,
		m_Height + abox.m_Height);
}


CBox CBox::operator*(const int& n) const
{
	if (n % 2) {
		return CBox(m_Length, m_Width, m_Height * n);
	}
	else {
		return CBox(m_Length, m_Width * 2, m_Height * n / 2);
	}
}


int CBox::operator/(const CBox& aBox) const
{
	int tc1 = static_cast<int>((m_Length / aBox.m_Length)) * static_cast<int>((m_Width / aBox.m_Width));
	int tc2 = static_cast<int>((m_Length / aBox.m_Width)) * static_cast<int>((m_Width / aBox.m_Length));
	return static_cast<int>((m_Height / aBox.m_Height) * (tc1 > tc2 ? tc1 : tc2));
}


double CBox::operator%(const CBox& abox) const
{
	return this->getVolume() - *this / abox * abox.getVolume();
}