#include "Contract.h"
#include <iostream>
#include <cstring>

using namespace std;

//constructors
Contract::Contract() {
}

Contract::Contract(const char pContractID[], const char pContractDate[]) {
	strcpy_s(contractID, pContractID);
	strcpy_s(contractDate, pContractDate);
}

//destructor
Contract::~Contract() {
}

//methods in the class
void Contract::checkPayment() {
}

void Contract::updateContractDetails(char pContractID[], char pContractDate[]) {
	strcpy_s(contractID, pContractID);
	strcpy_s(contractDate, pContractDate);
}

void Contract::specifyPaymentMethod() {
}

void Contract::sendContractDetails() {
}
