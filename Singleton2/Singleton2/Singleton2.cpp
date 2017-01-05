// Singleton2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<memory>

using namespace std;

class Singleton {
private:
	static shared_ptr<Singleton> S;
	Singleton(int num): i(num)
	{
	}
public:
	int i;
	static Singleton* getSingleton(int num = 0)
	{
		if (S == NULL) {
			S.reset(new Singleton(num));
		}
		return S.get();
	}
};

shared_ptr<Singleton> Singleton::S = NULL;

int main()
{
	cout << Singleton::getSingleton(10)->i << endl;
	return 0;
}