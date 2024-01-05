#include "Customer.h"
#include <iostream>
#include <cstring>

using namespace std;

//constructors
Customer::Customer() {
}

Customer::Customer(const char pCustomerID[], const char pCustomerName[], const char
	pCustomerContracctID[], int pCustomerContactNum) {
	strcpy_s(customerID, pCustomerID);
	strcpy_s(customerName, pCustomerName);
	strcpy_s(customerContractID, pCustomerContracctID);
	customerContactNum = pCustomerContactNum;
}

//destructor
Customer::~Customer() {
}

//methods in the class
void Customer::giveFeedback() {
}

void Customer::contactCompany() {
}

void Customer::editUserProfile() {
}

void Customer::viewBlogs() {
}