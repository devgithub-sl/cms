#pragma once
#include "ConstructionMaterials.h"
#include "Contract.h"
#include "Payment.h"
#include "Admin.h"
#include "Customer.h"
#include "Supplier.h"

class Project
{
	//Composition relationship between the Project, Construction Materials,Contract and Payment classes
	//Project class will not exist unless the construction materials, contract and payment classes are existing
	//Bi-direction association between these classes {Supplier, Customer & Admin}
private:
	//attributes of the Project Class
	char projectID[30];
	char projectName[30];
	char projectLocation[30];
	char projectStartDate[30];
	char customerName[30];

	//objects of Construction Materials, Contract and Payment classes must exist inorder for the Project class to exist
	ConstructionMaterials* conMat1;
	Contract* contrct1;
	Payment* pymnt1;

	//Bi-directional Association
	Admin* admn1;
	Supplier* supp1;
	Customer* cust1;

public:
	//constructors
	Project();
	Project(const char pProjectID[], const char pProjectName[], const char
		pProjectLocation[], const char pProjectStartDate[], const char pCustomerName[]);
	
	//destructor
	~Project();
	
	//methods
	void setProjectDetails();
	void updateTheProjectDetails();
	void addNewProjectDetails();
	void deleteProjectDetails();
	void getContractDetails();
};
