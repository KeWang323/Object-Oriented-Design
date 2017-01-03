#pragma once
#include<string>
using namespace std;
class CPerson
{
private:
	static string FirstName;
	static string LastName;

public:
	unsigned int Age;
	string Address;
	string Phone;

	class CPersonBuilder
	{
	public:
		static string FirstName;
		static string LastName;
		unsigned int Age;
		string Address;
		string Phone;

		CPersonBuilder (string FN, string LN)
		{
			this->FirstName = FN;
			this->LastName = LN;
		}

		CPersonBuilder* age(unsigned int a)
		{
			this->Age = a;
			return this;
		}

		CPersonBuilder* address(string address)
		{
			this->Address = address;
			return this;
		}

		CPersonBuilder* phone(string phone)
		{
			this->Phone = phone;
			return this;
		}

		CPerson* build()
		{
			return new CPerson(this);
		}
	};

	CPerson();
	explicit CPerson(string FN, string LN, unsigned int age = 0, string address = "", string phone = "");
	CPerson(CPersonBuilder* build)
	{
		this->FirstName = build->FirstName;
		this->LastName = build->LastName;
		this->Age = build->Age;
		this->Address = build->Address;
		this->Phone = build->Phone;
	}
	~CPerson();

	string getFirstName() const;
	string getLastName() const;
	unsigned int getAge() const;
	string getAddress() const;
	string getPhone() const;

};