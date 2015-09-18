/*
 * Algorithm.h
 *
 *  Created on: Sep 18, 2015
 *      Author: MacBookEr
 */

#ifndef INCLUDE_ALGORITHM_H_
#define INCLUDE_ALGORITHM_H_

#include <iostream>
#include <string>

using namespace std;

class Algorithm {


public:
	Algorithm();
	virtual ~Algorithm();

	string getTestStatus() const;

private:
	string testStatus;
};


#endif /* INCLUDE_ALGORITHM_H_ */
