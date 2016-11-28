// CMessageTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"CMessage.h"
#include<iostream>

using namespace std;

int main()
{
	//construct objects
	CMessage m1("ohehehe");    //parameter
	m1.showMessae();
	CMessage m2(m1);           //copy
	m2.showMessae();
	CMessage m3("yixixixi");   //parameter
	m3.showMessae();
	m2 = m3;
	m2.showMessae();
	m2 = m2;
	m2.showMessae();
	m1.reset();
	m1.showMessae();
	CMessage m4 = m1 + m2;
	m4.showMessae();
	m4 = m4 + m1 + m2;
	m4.showMessae();
	return 0;
}

