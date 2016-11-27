#pragma once
#include <utility>
#include"Container.h"
using namespace std::rel_ops;

class CBox : public CContainer
{

public:
	static int boxCnt;
	CBox();
	explicit CBox(double lv, double wv = 1.0, double hv = 1.0);
	CBox(const CBox& initB);
	virtual ~CBox() override;
	static void increCnt();
	double showVolume() const override;
	double getLength() const;
	double getWidth() const;
	double getHeight() const;
	virtual double getVolume() const override;
	friend double getBoxSurface(const CBox& box);
	void showBox() const;
	bool compare(const CBox& box) const;
	bool operator<(const CBox& abox) const;
	bool operator==(const CBox& abox) const;
	bool operator<(const double& value);
	bool operator<=(const double& value);
	bool operator>(const double& value);
	bool operator>=(const double& value);
	bool operator==(const double& value);
	bool operator!=(const double& value);
	CBox operator+(const CBox& abox) const;
	CBox operator*(const int& n) const;
	int operator/(const CBox& abox) const;
	double operator%(const CBox& abox) const;
protected:
	double m_Length;
	double m_Width;
	double m_Height;
};
