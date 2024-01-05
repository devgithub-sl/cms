#include "Employee.h"
#include <iostream>
#include <cstring>

using namespace std;

//Normal Constructor
Employee::Employee() {
}

//Overloaded Constructor
Employee::Employee(const char pEmpID[], const char pEmpName[], const char
	pEmpDpartment[], int pEmpContactNum, const char pJobTitle[]) {
	strcpy_s(empID, pEmpID);
	strcpy_s(empName, pEmpName);
	strcpy_s(empDpartment, pEmpDpartment);
	empContactNum = pEmpContactNum;
	strcpy_s(jobTitle, pJobTitle);
}

//destructor
Employee::~Employee() {
}

//methods
void Employee::readReview() {
}

void Employee::viewProjectDetails() {
}

void Employee::viewDepartmentDetails() {
}

void Employee::sendDependantDetails(Dependant* dpend1) {
}

void Employee::viewEmployeeDetails() {
}