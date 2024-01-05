#include "Rating.h"
#include <iostream>
#include <cstring>

using namespace std;

//constructors
Rating::Rating() {
}

Rating::Rating(const char pRatingID[], const char pRatingType[], const char
	pRatingDate[]) {
	strcpy_s(ratingID, pRatingID);
	strcpy_s(ratingType, pRatingType);
	strcpy_s(ratingDate, pRatingDate);
}

//destructor
Rating::~Rating() {
}

//methods in the class
void Rating::storeRatingDetails() {
}

void Rating::showRating() {
}

void Rating::deleteRating() {
}

void Rating::updateRating() {
}
