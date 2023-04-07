#pragma once
class Supplier
{
private:
	//attributes of the class
	char supplierID[30];
	char supplierName[30];
	int supplierContactNum;

	//Bi-directional Association
	Project* prjct1;

public:
	//constructors
	Supplier();
	Supplier(const char pSupplierID[], const char pSupplierName[], int
		pSupplierContactNum);

	//destructor
	~Supplier();

	//methods in the class
	void updateProductDetails();
	void addProductDetails();
	void deleteProductDetails();
	void receiveOrderDetails();
};

