#include <iostream>
#include "ctordtor.h"
#include <fstream>
#include <string>


//1 Constructor
Simple::Simple(int myNumber) {
	std::cout << "Constructor is called! " << "and its number is: " <<myNumber<< "\n";
}

//2 Add a Destructor
Simple::~Simple() {
	std::cout << "Destructor is called! " << "and its number is: " << myNumber << "\n";
	system("pause");
}



Text::Text() {
	
}

Text::Text(std::string file) {

	std::string line;
	std::ifstream textfile(file);
	

	while (std::getline(textfile,line))
	{
		holdon += line + "\n";
	}

	textfile.close();
}

std::string Text::contents() {
	return holdon;
}

Text::~Text() {
	system("pause");
}



Message::Message(std::string input) {
	input = something;
}

void Message::print() {
	std::cout << something << "\n";
}

void Message::print(std::string toappend) {
	std::cout << something << " " << toappend << "\n";
}

Message::~Message() {
	system("pause");
}



void Four::func1() {
	std::cout << "None" << "\n";
}

void Four::func2(int arg1) {
	std::cout << arg1 << "\n";
}

void Four::func3(int arg1, int arg2) {
	std::cout << arg1 << " " << arg2 << "\n";
}

void Four::func4(int arg1, int arg2, int arg3) {
	std::cout << arg1 << " " << arg2 << " " << arg3 << "\n";
}

Four::~Four() {
	system("pause");
}
