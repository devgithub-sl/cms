#include "ConstructionMaterials.h"
#include <iostream>
#include <cstring>

using namespace std;

//constructors
ConstructionMaterials::ConstructionMaterials() {
}

ConstructionMaterials::ConstructionMaterials(const char pConstructionMaterialID[],
	const char pConstructionMaterialName[], double pMaterialPrice) {
	strcpy_s(constructionMaterialID, pConstructionMaterialID);
	strcpy_s(constructionMaterialName, pConstructionMaterialName);
	materialPrice = pMaterialPrice;
}

//destructor
ConstructionMaterials::~ConstructionMaterials() {
}

//methods in the class
void ConstructionMaterials::setConstructionMaterialsDetails() {
}

void ConstructionMaterials::updateConstructionMaterialsDetails(char pConstructionMaterialID[], char pConstructionMaterialName[], double pMaterialPrice) {
	strcpy_s(constructionMaterialID, pConstructionMaterialID);
	strcpy_s(constructionMaterialName, pConstructionMaterialName);
	materialPrice = pMaterialPrice;
}

void ConstructionMaterials::addNewConstructionMaterialsDetails() {
}

void ConstructionMaterials::deleteConstructionMaterialsDetails() {
}