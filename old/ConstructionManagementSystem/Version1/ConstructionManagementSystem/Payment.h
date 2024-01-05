#pragma once
class Payment
{
private:
	char paymentID[30];
	char paymentType[30];
	char paymentDate[30];

public:
	//constructors
	Payment();
	Payment(const char pPaymentID[], const char pPaymentType[], const char pPaymentDate[]);

	//destructor
	~Payment();

	//methods in the class
	void validatePayment();
	void storePaymentDetails(char paymentID[], char paymentType[], char paymentDate[]);
	void createReceipt();
	void sendReceipt();
};


