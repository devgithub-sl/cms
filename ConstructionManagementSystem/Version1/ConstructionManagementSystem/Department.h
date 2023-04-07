#pragma once
#include "Admin.h"
#include "Supervisor.h"

class Department
{
private:
	//attributes of the Department Class
	char departmentID[30];
	char departmentName[30];
	char departmentLocation[30];

	//Bi-directional association
	Admin* admn1;
	Supervisor* supp1;

public:
	//constructors
	Department();
	Department(const char pDepartmentID[], const char pDepartmentName[], const
		char pDepartmentLocation[]);

	//destructor
	~Department();

	//methods in the class
	void storeEmployeeDetails();
	void addNewEmployeeDetails();
	void deleteEmployeeDetails();
	void updateEmployeeDetails();
	void storeDepartmentDetails();
};


