#pragma once
class Dependant
{
private:
	//there is a dependancy relationship between Employee and Dependant
	//dependant class requre the employee class inorder to exist
	//if the class is deleted the data relating to dependant is deleted also
	//attributes of Dependant Class
	char dependantID[30];
	char dependantName[30];
	char employeeID[30];

public:
	//constructors
	Dependant();
	Dependant(const char pDependantID[], const char pDependantName[], const char
		pEmployeeID[]);
	//destructor
	~Dependant();
	//methods
	void storeDependantDetails();
	void getDependantDetails();
};


