#pragma once
#include <iostream>
class FriendlyTest {

private:
	int secret = 0;
	int anothersecret = 0;


	
public:
	friend void secretModifier(FriendlyTest& test);
	void showSecret() {
		std::cout << secret << "\n";
		std::cout << anothersecret << "\n";
	}
};


void secretModifier(FriendlyTest& test);
