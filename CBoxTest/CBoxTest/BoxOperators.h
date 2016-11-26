#pragma once
#include"Box.h"

inline bool operator<(const double& value, const CBox& box)
{
	return value < box.getVolume();
}


inline bool operator<=(const double& value, const CBox& box)
{
	return value <= box.getVolume();
}


inline bool operator>(const double& value, const CBox& box)
{
	return value > box.getVolume();
}


inline bool operator>=(const double& value, const CBox& box)
{
	return value >= box.getVolume();
}


inline bool operator==(const double& value, const CBox& box)
{
	return value == box.getVolume();
}


inline bool operator!=(const double& value, const CBox& box)
{
	return value != box.getVolume();
}


inline CBox operator*(const int& n, const CBox& box) {
	return box * n;
}


inline double operator%(const CBox& abox, const CBox& bbox)
{
	return abox.getVolume() - abox / bbox * bbox.getVolume();
}