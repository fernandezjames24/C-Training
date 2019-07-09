
#define _USE_MATH_DEFINES 
#include <cmath>

#include "iostream"
#include "cstdlib"
#include "fstream"
#include "string"
#include "vector"
#include "algorithm"




//Activity 1 Open Executable file
void personalInfo() {

	std::system("Nope.exe");

}

//Activity 2 Get Radius
float areaCircle(float *radius) {

	return M_PI * *radius * *radius;

}

//Activity 3 Count words on a text file
int wordCount(std::string& file) {

	//Word Counter
	int count = 0;


	//Check if file is open, else prints Error
	try
	{
		//Open File
		std::ifstream textfile(file);

		//Iterate through available words on file  
		for (std::string word; textfile >> word; ++count)
		{
		}
		return count;

		textfile.close();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
		
		
}


//Activity 4 count word occurence
int wordOccurence(std::string& file, std::string& prospectWord) {

	//Word Counter
	int count = 0;

	//Word Init
	std::string word;


	

	//Check if file is open, else prints Error
	try
	{
		//Open File
		std::ifstream textfile(file);

		while (textfile >> word) {

			if (prospectWord == word) {

				count++;

			}

		}
		return count;

		textfile.close();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what();

	}
	
	
		
	
}



//Activity 5 FillVector (backwards)
void fillVector() {
	

	std::vector<std::string> v;
	
	std::string line;

	try
	{

		std::ifstream in("Runner.cpp");

		while (std::getline(in, line)) {

			v.push_back(line);

		}

		std::reverse(v.begin(), v.end()); //inefficient lol

		for (int i = 0; i < v.size(); i++)
		{
			std::cout << v[i] << std::endl;
		}

	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
		
	

}



//Activity 6 FillVector concat
void fillVectorConcat() {

	std::vector<std::string> v;
	
	std::string line;

	std::string output;
	try
	{
		std::ifstream in("Runner.cpp");
		while (std::getline(in, line)) {

			v.push_back(line);

		}

		for (int i = 0; i < v.size(); i++)
		{
			output += v[i];
		}

		std::cout << output;

	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	


}




//Activity 7 Open File Hiccup
void openFile(std::string &file) {

	
	std::string line;

	try
	{
		std::ifstream in(file);
		while (std::getline(in,line)) {

			fgetc(stdin);
			std::cout << line << std::endl;
			
		}

	}
	catch (const std::exception& e)
	{
		std::cout << e.what();
	}
	

}



//Activity 8 Vector
void vectorInsertPrint() {

	std::vector<float> myVector;

	std::vector<float>::iterator iter;
	
	// fill myVector with random float values;
	for (int i = 1; i <= 25; i++)
	{
		float random = (rand() / (float)RAND_MAX * 1000) + 1;
		myVector.push_back(random);
	}

	// display it using iterator
	for (iter = myVector.begin(); iter < myVector.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}


}


//Activity 9 Vector Add
void vectorInsertAdd() {

	std::vector<float> vector1;
	std::vector<float> vector2;
	std::vector<float> vector3;


	
	//fill first two vectors with random floating point numbers
	for (int i = 1; i <= 25; i++)
	{
		
		float random1 = (rand() / (float)RAND_MAX * 1000) + 1;
		vector1.push_back(random1);
		float random2 = (rand() / (float)RAND_MAX * 1000) + 1;
		vector2.push_back(random2);
	}


	//add the values of 2 vectors and add them
	for (int x = 0; x <= vector1.size()-1;x++) {

		vector3.push_back(vector1[x] + vector2[x]);

	}


	//show vector1 and vector2 and its sum
	for (int x = 0; x <= vector1.size()-1; x++) {
	
		std::cout << vector1[x] << " + " << vector2[x] << " = " << vector3[x] << std::endl;

	}


	
}





//Activity 10 Vector Square
void vectorSquare() {

	std::vector<float> myVector;

	//fill vector with random floating point numbers
	for (int i = 1; i <= 25; i++)
	{
		float random = (rand() / (float)RAND_MAX * 1000) + 1;
		myVector.push_back(random);

	}

	
	//square all number on a vector and overwrite it
	for (int i = 0; i <= myVector.size() - 1; i++)
	{
		myVector.at(i) = myVector[i] * myVector[i];
	}


	//show results
	for (int i = 0; i < myVector.size() - 1; i++)
	{

		std::cout << std::sqrt(myVector[i]) << " " << myVector[i] << std::endl;

	}



}




int main() {

	int selection;


	/* Circumference input: */
	float area;

	/* File Directory input: */
	std::string filedir;

	/* Word to search */
	std::string wordToSearch;

	
	/* Program Selection input: */
	std::cout << "Enter Your Choice: ";
	std::cin >> selection;

	switch (selection)
	{
	case 1:
		personalInfo();
		break;
	case 2:
		std::cout << "Enter a Decimal Number (Radius): ";
		std::cin >> area;
		std::cout << "Area of Circle is: " << areaCircle(&area) << std::endl;
		break;
	case 3:
		std::cout << "Enter file directory: ";
		std::cin >> filedir;
		std::cout << "Total Words is: " << wordCount(filedir) << std::endl;
		break;
	case 4:
		std::cout << "Enter file directory: ";
		std::cin >> filedir;
		std::cout << "Enter word to search: ";
		std::cin >> wordToSearch;
		std::cout << "Total Word is: " << wordOccurence(filedir,wordToSearch) << std::endl;
		break;
	case 5:
		fillVector();
		break;
	case 6:
		fillVectorConcat();
		break;
	case 7:
		std::cout << "Enter file directory: ";
		std::cin >> filedir;
		openFile(filedir);
		break;
	case 8:
		vectorInsertPrint();
		break;
	case 9:
		vectorInsertAdd();
		break;
	case 10:
		vectorSquare();
		break;
	default:
		std::cout << "Error!";
		break;
	}

	std::system("pause");


	return 0;

}
