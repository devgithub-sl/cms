#include <iostream>
#include <cstring>

//calling class header files
#include "Admin.h"
#include "ConstructionMaterials.h"
#include "Contract.h"
#include "Customer.h"
#include "Department.h"
#include "Dependant.h"
#include "Employee.h"
#include "Payment.h"
#include "Project.h"
#include "Rating.h"
#include "Supervisor.h"
#include "Supplier.h"

using namespace std;

//main program
int main() {
	//Object for Admin Class
	Admin admn1("ADM001", "joe joena", 0712345671, "Database");
	admn1.answerFAQ();
	admn1.receivePaymentDetails();
	admn1.updateContractDetails();
	admn1.updateProjectDetails();

	//Object for Construction Material Class
	ConstructionMaterials conMat1("PLK001", "Lanwa Steel", 120000.99);
	conMat1.addNewConstructionMaterialsDetails();
	conMat1.deleteConstructionMaterialsDetails();
	conMat1.setConstructionMaterialsDetails();
	conMat1.updateConstructionMaterialsDetails();

	//Object for Contract Class
	Contract contrct1("CON001", "2/2/2013");
	contrct1.checkPayment();
	contrct1.sendContractDetails();
	contrct1.specifyPaymentMethod();
	contrct1.updateContractDetails();

	//Object for Customer Class
	Customer cust1("Cid001", "john richard", "CON001", 0123456712);
	cust1.contactCompany();
	cust1.editUserProfile();
	cust1.giveFeedback();
	cust1.viewBlogs();

	//Objects for Department Class
	Department dept1("DID001", "Engineering", "New Kandy Road");
	dept1.addNewEmployeeDetails();
	dept1.deleteEmployeeDetails();
	dept1.storeDepartmentDetails();
	dept1.storeEmployeeDetails();
	dept1.updateEmployeeDetails();

	//Objects for Dependant Class
	Dependant dpnd1("DPNN001", "Maththew silva", "Cid001");
	dpnd1.getDependantDetails();
	dpnd1.storeDependantDetails();

	//Object for Employee Class
	Employee emp1("CSK001", "John silva", "Engineering", 0123456712, "Supervisor");
	emp1.readReview();
	emp1.sendDependantDetails(dpnd1);
	emp1.viewDepartmentDetails();
	emp1.viewEmployeeDetails();
	emp1.viewProjectDetails();

	//Object for Payment Class
	Payment pymnt1("PMY001", "Visa", "1/12/2012");
	pymnt1.createReceipt();
	pymnt1.sendReceipt();
	pymnt1.storePaymentDetails();
	pymnt1.validatePayment();

	//Object for Project Class
	Project proj1("PROJ001", "Siedal Towers", "New Kandy Street", "2/2/2013",
		"john richard");
	proj1.addNewProjectDetails();
	proj1.deleteProjectDetails();
	proj1.getContractDetails();
	proj1.setProjectDetails();
	proj1.updateTheProjectDetails();

	//Object for Rating Class
	Rating rate1("RT001", "star", "2/2/2013");
	rate1.deleteRating();
	rate1.showRating();
	rate1.storeRatingDetails();
	rate1.updateRating();

	//Object for Supervisor Class
	Supervisor supvsr1("SUP001", "John michaels", 0122267721, "Engineering");
	supvsr1.distributeTask();
	supvsr1.getEmployeeDetails();
	supvsr1.superviseEmployee();

	//Object for Supplier Class
	Supplier supp1("SPP001", "John Super Steel", 0623122223);
	supp1.addProductDetails();
	supp1.deleteProductDetails();
	supp1.receiveOrderDetails();
	supp1.updateProductDetails();
}