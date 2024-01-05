#include "Dependant.h"
#include <iostream>
#include <cstring>

using namespace std;

//Normal Constructor
Dependant::Dependant() {
}

//Overloaded Constructor
Dependant::Dependant(const char pDependantID[], const char pDependantName[], const
	char pEmployeeID[]) {
	strcpy_s(dependantID, pDependantID);
	strcpy_s(dependantName, pDependantName);
	strcpy_s(employeeID, pEmployeeID);
}

//destructor
Dependant::~Dependant() {
}

//methods
void Dependant::getDependantDetails() {
}

void Dependant::storeDependantDetails() {
}
