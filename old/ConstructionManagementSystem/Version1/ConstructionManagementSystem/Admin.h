#pragma once
#include "Project.h"
class Admin
{
private:
	//attributes of Admin Class
	char adminID[30];
	char adminName[30];
	int adminContactNumber;
	char adminDepartment[30];

	//Bi-direction association
	Project* prjct1;
	Department* dpmnt1;

public:
	//constructors
	Admin();
	Admin(const char pAdminID[], const char pAdminName[], int pAdminContactNumber,
		const char pAdminDepartment[]);

	//destructor
	~Admin();

	//methods in the class
	void receivePaymentDetails();
	void answerFAQ();
	void updateContractDetails();
	void updateProjectDetails();
};

