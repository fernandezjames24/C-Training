#pragma once
#include <iostream>

class Simple {

private:
	int myNumber = 0;


public:
	Simple(int myNumber);
	~Simple();

};


class Text {
private:
	std::string holdon;


public:
	Text();
	Text(std::string file);
	~Text();
	std::string contents();
};




class Message {
private:
	std::string something = "Vitamins";
	
public:
	Message(std::string input = "");
	void print();
	void print(std::string toappend);
	~Message();


};


class Four {
	

public:
	//even it changes to default arguments, declarations of those functions on main() doesn't throw any error.
	void func1();
	void func2(int arg1 = 0);
	void func3(int arg1 = 7, int arg2 = 8);
	void func4(int arg1 = 10, int arg2 = 19, int arg3 = 2);


	~Four();
};
