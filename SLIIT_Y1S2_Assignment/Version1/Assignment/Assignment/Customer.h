#pragma once
#include "Project.h"
class Customer
{
private:
	//attributes of the Customer Class
	char customerID[30];
	char customerName[30];
	char customerContractID[30];
	int customerContactNum;

	//Bi-directional Association
	Project* prjct1;

public:
	//constructors
	Customer();
	Customer(const char pCustomerID[], const char pCustomerName[], const char
		pContractContracctID[], int pCustomerContactNum);

	//destructor
	~Customer();

	//methods in the class
	void giveFeedback();
	void contactCompany();
	void editUserProfile();
	void viewBlogs();
};


