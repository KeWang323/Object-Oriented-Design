#include "stdafx.h"
#include "Person.h"
#include<string>
#include<iostream>
using namespace std;


CPerson::CPerson()
{
}

CPerson::CPerson(string FN, string LN, unsigned int age, string address, string phone) :FirstName(FN),LastName(LN), Age(age), Address(address), Phone(phone)
{
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

void CPerson::show() const {
	cout << "Firt Name: " << this->FirstName << endl;
	cout << "Last Name: " << this->LastName << endl;
	cout << "Age:" << this->Age << endl;
	cout << "Address: " << this->Address << endl;
	cout << "Phone: " << this->Phone << endl;
	cout << endl;
}