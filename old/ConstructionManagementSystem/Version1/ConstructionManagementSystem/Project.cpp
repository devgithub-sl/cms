#include "Project.h"
#include <iostream>
#include <cstring>

using namespace std;
//constructors

Project::Project() {
	cout << "Default Project Constructor";
	strcpy_s(projectID, "ID00000");
	strcpy_s(projectName, "Project");
	strcpy_s(projectLocation, "Unknown");
	strcpy_s(projectStartDate, "Date");
	strcpy_s(customerName, "Unknown");
}

Project::Project(const char pProjectID[], const char pProjectName[], const char
	pProjectLocation[], const char pProjectStartDate[], const char pCustomerName[]) {
	cout << "Overloaded Project Constructor";
	strcpy_s(projectID, pProjectID);
	strcpy_s(projectName, pProjectName);
	strcpy_s(projectLocation, pProjectLocation);
	strcpy_s(projectStartDate, pProjectStartDate);
	strcpy_s(customerName, pCustomerName);
}

//destructor
Project::~Project() {
	cout << "Project Destructor";
}

//methods
void Project::setProjectDetails() {
	new Project();
}

void Project::updateTheProjectDetails() {
	char matID[30];
	char matName[30];
	double matPrice;

	cout << "Construction Material Details\n";
	cout << "enter material id:";
	cin >> matID;
	cout << "enter material name:";
	cin >> matName;
	cout << "enter material price:";
	cin >> matPrice;

	//takes the parameters matID, matName & matPrice and update the conMat1 object
	conMat1->updateConstructionMaterialsDetails(matID, matName, matPrice);

	char payID[30];
	char payType[30];
	char payDate[30];

	cout << "Payment Details\n";
	cout << "enter payment id:";
	cin >> payID;
	cout << "enter payment type:";
	cin >> payType;
	cout << "enter payment date:";
	cin >> payDate;

	//takes the parameters payID, payType and payDate and store the new details onto pymnt1 object
	pymnt1->storePaymentDetails(payID,payType,payDate);

	char contID[30];
	char contDate[30];

	cout << "Contract Details\n";
	cout << "enter contract id:";
	cin >> contID;
	cout << "enter contract date:";
	cin >> contDate;
	contrct1->updateContractDetails(contID,contDate);

}

void Project::addNewProjectDetails() {
	//When creating new project these objects are needed for it to exist
	conMat1 = new ConstructionMaterials();
	contrct1 = new Contract();
	pymnt1 = new Payment();
}

void Project::deleteProjectDetails() {
	//deallocate memory for these objects
	delete conMat1;
	delete contrct1;
	delete pymnt1;
}

void Project::getContractDetails() {
	cout << conMat1;
}