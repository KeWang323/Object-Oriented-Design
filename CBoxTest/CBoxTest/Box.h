#pragma once
class CBox
{
private:
	double m_Length;
	double m_Width;
	double m_Height;
public:
	static int boxCnt;
	CBox();
	explicit CBox(double lv, double wv = 1.0, double hv = 1.0);
	CBox(const CBox& initB);
	~CBox();
	static void increCnt();
	double showVolume() const;
	virtual double getVolume() const;
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
	int operator/(const CBox& aBox) const;
};