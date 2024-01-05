#pragma once
#include "Dependant.h"
#include "Rating.h"
#include "Supervisor.h"
#define COUNT 2
class Employee
{
private:
	//attributes of Employee Class
	char empID[30];
	char empName[30];
	char empDpartment[30];
	int empContactNum;
	char jobTitle[30];
	//Dependant object is needed for employee to add their dependant details
	Dependant* dpend1;

	//Bi-directional Association
	Supervisor* supp1;

	//Aggregation Relation
	Rating* rating[COUNT];

public:
	//Constructors
	Employee();
	Employee(const char pEmpID[], const char pEmpName[], const char
		pEmpDpartment[], int pEmpContactNum, const char pJobTitle[]);
	//destructor
	~Employee();
	//methods in the class
	void readReview();
	void viewProjectDetails();
	void viewDepartmentDetails();
	void sendDependantDetails(Dependant* dpend1);
	void viewEmployeeDetails();
};

