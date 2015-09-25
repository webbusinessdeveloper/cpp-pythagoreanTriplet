/*
 * Algorithm.cpp
 *
 *  Created on: Sep 18, 2015
 *      Author: MacBookEr
 */

#include "Algorithm.h"

Algorithm::Algorithm() {
	// TODO Auto-generated constructor stub
	this->testStatus = "Tests are working";
}

Algorithm::~Algorithm() {
	// TODO Auto-generated destructor stub
}

string Algorithm::getTestStatus() const {
	return this->testStatus;
}

vector <vector <int> > Algorithm::getFactorsForInteger(int integerToFactor) {
	int countStart = 1;
	vector <vector <int> > intVectorToReturn;
	vector <int> used;

	while(countStart < integerToFactor) {
		if(integerToFactor % countStart == 0) {
			bool alreadyInArray = false;
			for(int count = 0; count < used.size(); count++) {
				if(used[count] == countStart) {
					alreadyInArray = true;
				}
			}
			if(!alreadyInArray) {
				vector <int> tempVector;
				tempVector.push_back(countStart);
				tempVector.push_back(integerToFactor / countStart);
				intVectorToReturn.push_back(tempVector);
				used.push_back(countStart);
				used.push_back(integerToFactor / countStart);
			}

		}
		countStart++;
	}
	return intVectorToReturn;
}

int Algorithm::squareIntegerAndDivideInHalf(int integer) {
	return (integer * integer) / 2;
}

vector <vector <int> > Algorithm::findPythagoreanTriplets(int r, vector <vector <int> > factorialsOfRSquaredAndDividedInHalf) {
	vector < vector <int> > triplets;


	int count = 0;

	while(count < factorialsOfRSquaredAndDividedInHalf.size()) {
		int s = factorialsOfRSquaredAndDividedInHalf[count][0];
		int t = factorialsOfRSquaredAndDividedInHalf[count][1];
		count++;
		int x = r + s;
		int y = r + t;
		int z = r + s + t;
		if(((x * x) + (y * y)) == (z * z)) {
			vector <int> addToTriplets;
			addToTriplets.push_back(x);
			addToTriplets.push_back(y);
			addToTriplets.push_back(z);
			triplets.push_back(addToTriplets);
			addToTriplets.clear();
		}
	}


	return triplets;

}

vector <int> Algorithm::findVectorGroupThatMatchesSum(vector <vector <int> > vectorToCheck, int sumToMatch) {
	vector <int> returnValue;
	int limit = vectorToCheck.size();
	int counter = 0;
	bool groupFound = false;

	while(counter < limit && !groupFound) {
		int sumOfGroup = 0;
		for(int i = 0; i < vectorToCheck[counter].size(); i++) {
			sumOfGroup += vectorToCheck[counter][i];
		}
		if(sumToMatch == sumOfGroup){
			groupFound = true;
			for(int j = 0; j < vectorToCheck[counter].size(); j++){
				returnValue.push_back(vectorToCheck[counter][j]);
			}
		}
		counter++;
	}
	return returnValue;
}

int Algorithm::findProductOfVectorOfIntegers(vector <int> vectorGroup) {
	int returnValue = 1;
	int limit = vectorGroup.size();
	int counter = 0;

	while(counter < limit) {
		returnValue *= vectorGroup[counter];
		counter++;
	}
	return returnValue;
}
