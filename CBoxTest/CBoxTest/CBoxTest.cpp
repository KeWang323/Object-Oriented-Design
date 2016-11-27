// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include"Box.h"
#include"CandyBox.h"
#include"Can.h"
#include"BoxOperators.h"
//#include"CCandyBox.h"

using namespace std;

int CBox::boxCnt = 0;

int main() {
	//construct objects
	CBox Box1(2.0, 2.0, 2.0);//full parameters
	CBox Box3(1, 2, 3);      //full parameters
	CBox box2(Box1);         //copy
	CBox *Box5 = &Box1;      //using pointers
	CBox &Box6(Box1);		 //using reference
	Box5 = &Box3;            //redefine pointer
	CBox Box4[6];            //array of objects
	CBox Box7 = Box3 * 2;
	CCandyBox myMintBox(5,5,5,"Wafer Thin Mints");
	cout << myMintBox.getVolume() << endl;
	CCandyBox myMintBox2(myMintBox);
	CCan can(5, 10);
	CContainer *Box8 = new CBox(3, 3, 3);
	CBox *Box9 = dynamic_cast<CBox*>(Box8);
	//CCandyBox myBox(myMintBox);
	//CBox Box7(-1, 0, 0);
	//call functions members
	cout << Box8->showVolume() << endl;
	cout << Box9->getLength() << endl;
	cout << Box1.showVolume() << endl;    //instance
	cout << Box3.showVolume() << endl;    //instance
	cout << getBoxSurface(Box1) << endl;  //instance
	cout << Box4[0].showVolume() << endl; //instance
	cout << Box5->showVolume() << endl;   //pointer
	cout << myMintBox.showVolume() << endl;
	cout << "Compare:" << Box1.compare(Box3) << endl;
	Box1.showBox();
	Box3.showBox();
	Box7.showBox();
	cout << myMintBox.getVolume() << endl;
	cout << can.showVolume() << endl;
	//static field
	Box1.increCnt();
	cout << CBox::boxCnt << endl;
	//size of object
	cout << "Box occupies " << sizeof(Box1) << " bytes" << endl;
	cout << "The array of Box occupies " << sizeof(Box4) << " bytes" << endl;
	cout << "The array of CandyBox occupies " << sizeof(myMintBox) << " bytes" << endl;
	//Operator overloading
	cout << Box7 / Box3 << endl;
	cout << Box7 % Box3 << endl;
	cout << endl;
	cout << (Box1 < Box3) << endl;
	cout << (Box1 > Box3) << endl;
	cout << (Box1 == Box3) << endl;
	cout << (Box1 != Box3) << endl;
	cout << endl;
	//cout << (Box1.operator<(Box3)) << endl;    //not valid for templates for operator functions
	//cout << (Box1.operator>(Box3)) << endl;
	//cout << (Box1.operator==(Box3)) << endl;
	//cout << endl;
	cout << (Box1 < 8) << endl;
	cout << (Box1 > 8) << endl;
	cout << (Box1 == 8) << endl;
	cout << (Box1 != 8) << endl;
	cout << endl;
	cout << (9 < Box1) << endl;
	cout << (9 > Box1) << endl;
	cout << (9 == Box1) << endl;
	cout << (9 != Box1) << endl;


	//cout << myMintBox.ShowVolume() << endl;

	return 0;
}

