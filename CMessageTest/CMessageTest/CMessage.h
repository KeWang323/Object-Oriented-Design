#pragma once
#include<iostream>

using namespace std;

class CMessage {
private:
	char* pMessage;
public:
	CMessage(const char* text = "Default Message") {
		cout << "CMessage constructor called" << endl;
		pMessage = new char[strlen(text) + 1];
		strcpy_s(pMessage, strlen(text) + 1, text);
	}

	CMessage(const CMessage& message) {
		cout << "CMessage copy called" << endl;
		pMessage = new char[strlen(message.pMessage) + 1];
		strcpy_s(pMessage, strlen(message.pMessage) + 1, message.pMessage);
	}
	CMessage(CMessage&& message) {
		cout << "CMessage copy(overload) called" << endl;
		pMessage = message.pMessage;
		message.pMessage = NULL;
	}
	CMessage& operator=(const CMessage& aMess) {
		if (this != &aMess) {
			cout << "CMessage operator= called" << endl;
			delete[] pMessage;
			pMessage = new char[strlen(aMess.pMessage) + 1];
			strcpy_s(this->pMessage, strlen(aMess.pMessage) + 1, aMess.pMessage);
			return *this;
		}
	}
	CMessage operator+(const CMessage& aMess) const {
		cout << "CMessage operator+ called" << endl;
		size_t len = strlen(pMessage) + strlen(aMess.pMessage) + 1;
		CMessage message;
		message.pMessage = new char[len];
		strcpy_s(message.pMessage, len, pMessage);
		strcat_s(message.pMessage, len, aMess.pMessage);
		return message;
	}
	~CMessage() {
		cout << "CMessage destructor called" << endl;
		delete[] pMessage;
	}
	void showMessae() const {
		cout << pMessage << endl;
	}
	void reset() {
		char* temp = pMessage;
		while (*temp) {
			*(temp++) = '*';
		}
	}
};
