#pragma once
class Contract
{
private:
	//attributes of Contract Class
	char contractID[30];
	char contractDate[30];

public:
	//constructors
	Contract();

	Contract(const char pContractID[], const char pContractDate[]);

	//destructor
	~Contract();

	//methods in the class
	void checkPayment();
	void updateContractDetails(char contractID[], char contractDate[]);
	void specifyPaymentMethod();
	void sendContractDetails();
};


