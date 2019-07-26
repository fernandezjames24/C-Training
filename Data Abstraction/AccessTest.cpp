#include "dataabs.h"



	int AccessTest::testpublic = 1;
	void AccessTest::testpublicmethod() {
		std::cout << "Hello my name is: " << __FUNCTION__ << "\n";
	}


	int AccessTest::testprivate = 2;
	void AccessTest::testprivatemethod() {
		std::cout << "Hello my name is: " << __FUNCTION__ << "\n";
	}


	int AccessTest::testprotected = 3;
	void AccessTest::testprotectedmethod() {
		std::cout << " Hello my name is: " << __FUNCTION__ << "\n";
	}


	
