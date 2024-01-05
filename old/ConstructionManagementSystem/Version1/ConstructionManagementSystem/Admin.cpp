#include "Admin.h"
#include <iostream>
#include <cstring>

using namespace std;

//constructors
Admin::Admin() {
}

Admin::Admin(const char pAdminID[], const char pAdminName[], int
	pAdminContactNumber, const char pAdminDepartment[]) {
	strcpy_s(adminID, pAdminID);
	strcpy_s(adminName, pAdminName);
	adminContactNumber = pAdminContactNumber;
	strcpy_s(adminDepartment, pAdminDepartment);
}

//destructor
Admin::~Admin() {
}

//methods in the class
void Admin::receivePaymentDetails() {
}

void Admin::answerFAQ() {
}

void Admin::updateContractDetails() {
}

void Admin::updateProjectDetails() {
}

