/*
 * Algorithm_test.cpp
 *
 *  Created on: Sep 18, 2015
 *      Author: MacBookEr
 */

#include <Algorithm.h>
#include <gtest/gtest.h>


TEST(EnsureTestsAreWorking, itShouldReturnTrue) {
	Algorithm alg = Algorithm();
	string result = alg.getTestStatus();
	string correct = "Tests are working";
	EXPECT_EQ(correct, result);
}

TEST(GetAllFactorsOfANumber, itShouldReturnFactorGroupsForAnInteger) {
	Algorithm alg = Algorithm();
	int integerToFactor = 18;

	vector <vector <int> > result = alg.getFactorsForInteger(integerToFactor);

	vector <vector <int> > correct;
	vector <int> firstFactors;
	firstFactors.push_back(1);
	firstFactors.push_back(18);
	vector <int> secondFactors;
	secondFactors.push_back(2);
	secondFactors.push_back(9);
	vector <int> thirdFactors;
	thirdFactors.push_back(3);
	thirdFactors.push_back(6);
	correct.push_back(firstFactors);
	correct.push_back(secondFactors);
	correct.push_back(thirdFactors);

	EXPECT_EQ(correct,result);
}
