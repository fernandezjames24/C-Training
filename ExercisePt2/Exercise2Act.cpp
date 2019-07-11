

#include "cmath"

#include "iostream"
#include "libhdr.h"
#include "vector"
#include "fstream"
#include "string"




// Activity 1 Headers
void headerTry() {

	defvoid(1);
	defchar('2');
	defint(3);
	deffloat(1.0f);

}


void primeNumbers() {


	//std::vector<int> allPrimes;


	int x = 2;
	bool flag = false;
	


	for (x; x <= 100; x++) {

		flag = false;
		for (int i = 2; i <= x / 2; ++i)
		{
			if (x % i == 0) {

				flag = true;
				break;

			}
		}

		if (!flag) {
			std::cout << x << std::endl;
		}
		else {
			//
		}


	}
	
}



// Activity 3 InputLoop

void inputLoop(std::string &file) {


	const std::string command1 = "COKE";
	const std::string command2 = "LIPTON";
	const std::string command3 = "COBRA";
	const std::string command4 = "SUMMIT";




	const int CKE = 1;
	const int LPT = 2;
	const int CBR = 4;
	const int SMT = 8;



	const int HEAVYDRINKER = CKE | LPT | CBR | SMT;
	const int WATERBOY = SMT;
	const int FREAK = CBR;
	const int SWEETTOOTH = CKE;
	const int TEABOY = LPT;
	const int CAFFEINEMASTER = CKE | LPT | CBR;
	const int MODERATE = CKE | LPT | SMT;


	std::string word;
	std::ifstream in(file);
	int integval = 0;


	

	while (true) {
		
		while (std::getline(in, word)) {
		
			if (word == "CKE") {
				integval += CKE;
			}
			else if (word == "LPT") {
				integval += LPT;
			}
			else if (word == "CBR") {
				integval += CBR;
			}
			else if (word == "SMT") {
				integval += SMT;
			}
			else {
				std::cout << "ERROR WORD";
				break;
			}
			break;

		}
		if (in.eof()) {
			break;
		}
}

	

	switch (integval) {
	
	case HEAVYDRINKER:
		std::cout << "Ooops you're a heavy drinker! You drink any of the following:" << std::endl;
		std::cout << command1 << std::endl;
		std::cout << command2 << std::endl;
		std::cout << command3 << std::endl;
		std::cout << command4 << std::endl;
		break;
	case FREAK:
		std::cout << "You're a damn freak! You just drink:" << std::endl;
		std::cout << command3 << std::endl;
		break;
	case WATERBOY:
		std::cout << "You're a water boy and you just drink: " << std::endl;
		std::cout << command4 << std::endl;
		break;
	case CAFFEINEMASTER:
		std::cout << "You're a caffeine master and you just drink caffeine drinks like: " << std::endl;
		std::cout << command1 << std::endl;
		std::cout << command2 << std::endl;
		std::cout << command3 << std::endl;
		break;
	case SWEETTOOTH:
		std::cout << "You're a sweet tooth. You just drink sweet beverage like: " << std::endl;
		std::cout << command1 << std::endl;
		break;
	default:
		std::cout << "What are you doin' mate. Drinks are too much to handle" << std::endl;
	}
	
}






//Activity 4 Menu
void menu() {

	bool flag = false;


	char c; // To hold response
	while (true) {
		std::cout << "MAIN MENU:" << std::endl;
		std::cout << "l: left, r: right, q: quit -> ";
		std::cin >> c;

		switch (c)
		{
		case 'q':
			flag = true;
			break;
		case 'l':
			std::cout << "LEFT MENU:" << std::endl;
			std::cout << "select a or b: ";
			std::cin >> c;
			switch (c) {
			case 'a':
				std::cout << "you chose 'a'" << std::endl;
				continue; // Back to main menu
				break;
			case 'b':
				std::cout << "you chose 'b'" << std::endl;
				continue; // Back to main menu
				break;
			default:
				std::cout << "you didn't choose a or b!"
					<< std::endl;
				continue; // Back to main menu
				break;
			}
			break;
		case 'r':
			std::cout << "RIGHT MENU:" << std::endl;
			std::cout << "select c or d: ";
			std::cin >> c;
			switch (c) {
			case 'c':
				std::cout << "you chose 'c'" << std::endl;
				continue; // Back to main menu
				break;
			case 'd':
				std::cout << "you chose 'd'" << std::endl;
				continue; // Back to main menu
				break;
			default:
				std::cout << "you didn't choose c or d!"
					<< std::endl;
				continue; // Back to main menu
				break;
			}
			break;
		default:
			std::cout << "you must type l or r or q!" << std::endl;
			break;
		}
		
		if (flag == true) {
			break;
		}
	}
	
}



//Activity5 YourPets
void YourPets(int pet) {
	std::cout << "pet id number: " << pet << std::endl;
}



//Activity6 Strings
void modifyString1(std::string* a) {

	*a = "Quick";

}
	
void modifyString2(std::string& a) {

	a = "Brown";

}



//Activity7 static


// if static keyword is removed, if the function goes on a loop, the variable will re-initialize itself and it keeps its value back to 0 then increment by 1;
// keeping its value to 1 on every printing.


// when static is used, the variable scope will live forever until the program exits so the value will retain and keeps adding on a loop. 
void func() {
	static int i = 0;
	std::cout << "i = " << ++i << std::endl;
}







int main() {

	int selection;
	std::string filedir;
	std::string mystring = "This will gonna change...";

	std::cout << "Enter Choice: ";

	std::cin >> selection;

	switch (selection)
	{
	case 1:
		headerTry();
		break;
	case 2:
		primeNumbers();
		break;
	case 3:
		std::cin >> filedir;
		inputLoop(filedir);
		break;
	case 4:
		menu();
		break;
	case 5:
		int dog, cat, bird, fish;
		int i, j, k;
		std::cout << "f(): " << (long)&YourPets << std::endl;
		std::cout << "dog: " << (int)&dog << std::endl;
		std::cout << "cat: " << (long)&cat << std::endl;
		std::cout << "bird: " << (long int)&bird << std::endl;
		std::cout << "fish: " << (wchar_t)&fish << std::endl;
		std::cout << "i: " << (unsigned int)&i << std::endl;
		std::cout << "j: " << (long long int)&j << std::endl;
		std::cout << "k: " << (unsigned long long int)&k << std::endl;
		break;
	case 6:
		std::cout << "mystring value is: " << mystring << std::endl;
		modifyString1(&mystring);
		std::cout << "After modifyString1() is called, the value of mystring is: " << mystring << std::endl;
		modifyString2(mystring); 
		std::cout << "After modifyString2() is called, the value of mystring is: " << mystring << std::endl;
		break;
	case 7:
		for (int x = 0; x < 10; x++) {
			func();
		}
		break;
	default:
		break;

	}

	system("pause");
	return 0;
}











