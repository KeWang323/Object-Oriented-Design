#include "stdafx.h"
#include "Container.h"

 double CContainer::showVolume() const
{
	 cout << "CContainer showVolume()" << endl;
	 return getVolume();
 }


CContainer:: ~CContainer()
 {
	 cout << "CContainer destructor called" << endl;
 }