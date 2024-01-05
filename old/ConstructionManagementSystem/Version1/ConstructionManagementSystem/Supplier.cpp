#include "Supplier.h"
#include <iostream>
#include <cstring>

using namespace std;

//constructors
Supplier::Supplier() {
}

Supplier::Supplier(const char pSupplierID[], const char pSupplierName[], int
	pSupplierContactNum) {
	strcpy_s(supplierID, pSupplierID);
	strcpy_s(supplierName, pSupplierName);
	supplierContactNum = pSupplierContactNum;
}

//destructor
Supplier::~Supplier() {
}

//methods in the class
void Supplier::updateProductDetails() {
}

void Supplier::addProductDetails() {
}

void Supplier::deleteProductDetails() {
}

void Supplier::receiveOrderDetails() {
}