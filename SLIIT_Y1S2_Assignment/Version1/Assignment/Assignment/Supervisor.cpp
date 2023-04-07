#include "Supervisor.h"
#include <iostream>
#include <cstring>

using namespace std;

//constructor
Supervisor::Supervisor() {
}

Supervisor::Supervisor(const char pSupervisorID[], const char pSupervisorName[], int
	pSupervisorContactNum, const char pSupervisorDepartment[]) {
	strcpy_s(supervisorID, pSupervisorID);
	strcpy_s(supervisorName, pSupervisorName);
	supervisorContactNum = pSupervisorContactNum;
	strcpy_s(supervisorDepartment, pSupervisorDepartment);
}

//destructor
Supervisor::~Supervisor() {
}

//methods in the class
void Supervisor::getEmployeeDetails() {
}

void Supervisor::superviseEmployee() {
}

void Supervisor::distributeTask() {
}
