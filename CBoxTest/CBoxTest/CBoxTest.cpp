// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include"CCandyBox.h"
#include <iostream>

using namespace std;

int main()
{
	CBox Box1(2.0, 4.0, 5.0);
	cout << getBoxSurface(Box1) << endl;
	CBox box2(Box1);
	CCandyBox myMintBox(3.0, 4.0, 5.0, "Wafer Thin Mints");
	CCandyBox myBox(myMintBox);
	CBox Box3(1, 2, 3);
	cout << endl
		<< "MyBox occupies " << sizeof(myBox)
		<< " bytes" << endl
		<< "myMintBox occupies " << sizeof(myMintBox)
		<< " bytes" << endl;
	cout << Box1.ShowVolume() << endl;
	cout << Box3.ShowVolume() << endl;
	cout << myMintBox.ShowVolume() << endl;

	return 0;
}

