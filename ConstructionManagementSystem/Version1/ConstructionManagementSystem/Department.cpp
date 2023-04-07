#include "Department.h"
#include <iostream>
#include <cstring>

using namespace std;

//constructors
Department::Department() {
}

Department::Department(const char pDepartmentID[], const char pDepartmentName[],
	const char pDepartmentLocation[]) {
	strcpy_s(departmentID, pDepartmentID);
	strcpy_s(departmentName, pDepartmentName);
	strcpy_s(departmentLocation, pDepartmentLocation);
}

//destructor
Department::~Department() {
}

//methods in the class
void Department::storeEmployeeDetails() {
}

void Department::addNewEmployeeDetails() {
}

void Department::deleteEmployeeDetails() {
}

void Department::updateEmployeeDetails() {
}

void Department::storeDepartmentDetails() {
}