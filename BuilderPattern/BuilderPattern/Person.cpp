#include "stdafx.h"
#include "Person.h"
#include<string>
using namespace std;


CPerson::CPerson()
{
}

CPerson::CPerson(string FN, string LN, unsigned int age, string address, string phone) : Age(age), Address(address), Phone(phone)
{
	this->FirstName = FN;
	this->LastName = LN;
}

CPerson::~CPerson() {
}

string CPerson::getFirstName() const {
	return FirstName;
}

string CPerson::getLastName()const {
	return LastName;
}

unsigned int CPerson::getAge() const {
	return Age;
}
string CPerson::getAddress() const {
	return Address;
}
string CPerson::getPhone() const {
	return Phone;
}