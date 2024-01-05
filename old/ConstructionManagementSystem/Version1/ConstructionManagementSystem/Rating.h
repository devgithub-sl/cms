#pragma once
class Rating
{
private:
	//Aggregration Relationship between the Rating and the Employee Class
	//When Rating class gets deleted Employee class will remain
	//attributes of Rating Class
	char ratingID[30];
	char ratingType[30];
	char ratingDate[30];

public:
	//constructors
	Rating();
	Rating(const char pRatingID[], const char pRatingType[], const char
		pRatingDate[]);
	//destructor
	~Rating();
	//methods in the class
	void storeRatingDetails();
	void showRating();
	void deleteRating();
	void updateRating();
};


