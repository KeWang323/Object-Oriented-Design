#pragma once
#include<string>
using namespace std;
class CPerson
{
private:
	const string FirstName;
	const string LastName;

public:
	unsigned int Age;
	string Address;
	string Phone;
	class CPersonBuilder
	{
	private:
		const string FirstName;
		const string LastName;
		unsigned int Age = 0;
		string Address = "NULL";
		string Phone = "NULL";
	public:
		explicit CPersonBuilder(string FN, string LN): FirstName(FN), LastName(LN)
		{
		}

		CPersonBuilder* age(unsigned int a = 0)
		{
			this->Age = a;
			return this;
		}

		CPersonBuilder* address(string address = "NULL")
		{
			this->Address = address;
			return this;
		}

		CPersonBuilder* phone(string phone = "NULL")
		{
			this->Phone = phone;
			return this;
		}

		CPerson* build()
		{
			return new CPerson(this);
		}

		string getFirstName() {
			return this->FirstName;
		}
		string getLastName() {
			return this->LastName;
		}
		unsigned int getAge() {
			return this->Age;
		}
		string getAddress() {
			return this->Address;
		}
		string getPhone() {
			return this->Phone;
		}
	};

	CPerson();
	explicit CPerson(string FN, 
		string LN, 
		unsigned int age = 0, 
		string address = "NULL", 
		string phone = "NULL");
	CPerson(CPersonBuilder* build): 
		FirstName(build->getFirstName()), 
		LastName(build->getLastName()), 
		Age(build->getAge()), 
		Address(build->getAddress()), 
		Phone(build->getPhone())
	{
	}
	~CPerson();

	string getFirstName() const;
	string getLastName() const;
	unsigned int getAge() const;
	string getAddress() const;
	string getPhone() const;
	void show() const;

};