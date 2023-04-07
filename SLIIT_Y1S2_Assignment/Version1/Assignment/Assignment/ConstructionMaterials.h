#pragma once
class ConstructionMaterials
{
private:
	//attributes of the class
	char constructionMaterialID[30];
	char constructionMaterialName[30];
	double materialPrice;

public:
	//constructors
	ConstructionMaterials();
	ConstructionMaterials(const char pConstructionMaterialID[], const char
		pConstructionName[], double pMaterialPrice);

	//destructor
	~ConstructionMaterials();

	//methods in the class
	void setConstructionMaterialsDetails();
	void updateConstructionMaterialsDetails(char constructionMaterialID[], char constructionMaterialName[], double materialPrice);
	void addNewConstructionMaterialsDetails();
	void deleteConstructionMaterialsDetails();
};

