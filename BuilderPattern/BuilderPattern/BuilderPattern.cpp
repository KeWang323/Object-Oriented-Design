// BuilderPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"Person.h"
#include<iostream>

using namespace std;

int main()
{
	CPerson *a = (new CPerson::CPersonBuilder("John", "Smith"))->age(17)->phone("123456")->build();
	a->show();
	CPerson *b = CPerson::CPersonBuilder("Kate", "Marry").age(18)->address()->build();
	b->show();
	a->show();

	return 0;
}

