#include <iostream>
#include <string>
#include "ctordtor.h"


int main() {

	int myNumber = 0;
	int choice;
	std::cout << "Enter your choice 1-8";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
	case 2:
	case 3: {
		// Number 1-3 is on CtorDtor.h and CtorDtor.cpp
		Simple *ctordtor = new Simple(1998);
		delete ctordtor;
	}
		break;
	case 4: {
		Simple *something = new Simple(1923);
		//4 I used Simple as a sample class with destructor
		while (myNumber < 10)
		{
			myNumber++;
			if (myNumber == 15) {
				goto LOOP;
			}
		}
	LOOP: std::cout << "Out of loop \n"; 
		delete something;
	}
		break;
	case 5: {
		// new instance of Text, opens a text file
		Text *text = new Text("Vitamins.txt");
		std::cout << text->contents();
		delete text;
	}
			break;
	case 6: {
	
		Message *message = new Message();
		message->print();
		message->print("Nanananana");

		delete message;
	}
			break;
	case 7:
		std::cout << "Name decoration scheme (name mangling) is like modifiying the name of functions to become unique. It is used especially on function overloads. \n"
			<< "Things like function overloading generate same name on the assembly code, which eliminates their uniqueness and the linker will identify them as same although they don't have \n"
			<< "the same arguments. Name mangling addresses those issues. \n";
		system("pause");
		break;
	case 8: {
		
		Four *four = new Four();
		four->func1();
		four->func2(6);
		four->func3(7,5);
		four->func4(1,5,9);

		delete four;
	}
			break;
	default:
		break;
	}
	

	
	
}
