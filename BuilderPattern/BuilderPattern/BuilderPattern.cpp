// BuilderPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Person.h"
#include<iostream>

using namespace std;

string CPerson::FirstName = "";
string CPerson::LastName = "";
string CPerson::CPersonBuilder::FirstName = "";
string CPerson::CPersonBuilder::LastName = "";

int main()
{
	//CPerson *a = (new CPerson::CPersonBuilder("aa", "bb"))->age(18)->build();
	CPerson *a = CPerson::CPersonBuilder("aa", "bb").age(18)->build();

	cout << a->getFirstName() << endl;
	cout << a->getAge() << endl;
	return 0;
}

