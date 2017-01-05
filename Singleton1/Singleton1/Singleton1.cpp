// Singleton1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

using namespace std;

class Singleton {
private:
	Singleton(int num):i(num)
	{
	}
	~Singleton()
	{
	}
	static Singleton *S;
public:
	int i;
	static Singleton* getSingleton(int num = 0)
	{
		if (S == NULL) {
			S = new Singleton(num);
		}
		return S;
	}
};

Singleton* Singleton::S = NULL;

int main()
{
	cout << Singleton::getSingleton(10)->i << endl;
    return 0;
}

