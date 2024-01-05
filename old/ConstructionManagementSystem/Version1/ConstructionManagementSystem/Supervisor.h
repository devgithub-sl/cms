#pragma once
#include "Employee.h"
class Supervisor
{
private:
	//attributes of the Supervisor Class
	char supervisorID[30];
	char supervisorName[30];
	int supervisorContactNum;
	char supervisorDepartment[30];

	//Bi-directional Association
	Department* dptment1;
	Employee* emp1;

public:
	//constructor
	Supervisor();
	Supervisor(const char pSupervisorID[], const char pSupervisorName[], int
		pSupervisorContactNum, const char pSupervisorDepartment[]);
	//destructor
	~Supervisor();
	//methods in the class
	void getEmployeeDetails();
	void superviseEmployee();
	void distributeTask();
};

