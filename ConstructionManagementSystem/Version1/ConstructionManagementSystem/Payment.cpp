#include "Payment.h"
#include <iostream>
#include <cstring>

using namespace std;

//constructors
Payment::Payment() {
}

Payment::Payment(const char pPaymentID[], const char pPaymentType[], const char
	pPaymentDate[]) {
	strcpy_s(paymentID, pPaymentID);
	strcpy_s(paymentType, pPaymentType);
	strcpy_s(paymentDate, pPaymentDate);
}

//destructor
Payment::~Payment() {
}

//methods in the class
void Payment::validatePayment() {
}

void Payment::storePaymentDetails(char paymentID[], char paymentType[], char paymentDate[]) {
}

void Payment::createReceipt() {
}

void Payment::sendReceipt() {
}