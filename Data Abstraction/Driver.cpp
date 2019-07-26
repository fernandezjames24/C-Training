#include "dataabs.h"
#include <iostream>
#include <string>
#include "libc.h"
#include "friendly.h"
#define SHOW(a) std::cout << #a << ": " << (&a) <<"\n"


// 1
#pragma region
void accessTest() {

	AccessTest *acccesstest = new AccessTest;
	std::cout << "Value of testpublic is: " << acccesstest->testpublic << "\n";
	acccesstest->testpublicmethod();

	// cannot access private member
	//std::cout << "Value of testprivate is: " << acccesstest->testprivate << "\n";
	//acccesstest->testprivatemethod();

	// cannot access protected member
//	std::cout << "Value of testprotected is: " << acccesstest->testprotected << "\n";
//	acccesstest->testprotectedmethod();


	delete acccesstest;

}

#pragma endregion



//2
struct Lib {
public:
	std::string a, b, c;
	//will change:
	std::string s[3];
};






//3 is on header file friendly.h

//4


//forward declaration
class MyClass1;
class MyClass2;

class MyClass1
{
public:
	
	void pointToClass2(MyClass2 *class2) {
		std::cout << "Called " << __FUNCTION__ << "\n";
	}

};






class MyClass2
{
public:
	
	void pointToClass1(MyClass1 *class1) {
		
		std::cout << "Called " << __FUNCTION__ << "\n";

	}

};

//5

class Classnum1;


class Classnum2
{
public:
	
	
	
	
	void editmorethan(Classnum1 &classmorethan);
	
	void editanything(Classnum1 &classmorethan);


};


class Classnum3
{
public:


	void editSomething(Classnum1 &classnum1);
};


class Classnum1
{
private:
	int something = 0;
	int morethan = 10;

public:
	friend Classnum2;
	friend void Classnum3::editSomething(Classnum1 &classnum1);
	void showPrivate();
};

void Classnum2::editmorethan(Classnum1 &classmorethan) {

	std::cout << "Iam Classnum2. I will modify 'morethan' on my friend Classnum1 because I'm his friend!" << "\n";
	classmorethan.morethan = 100234;

}


void Classnum2::editanything(Classnum1 &classmorethan) {

	std::cout << "Iam Classnum2. I will modify 'something' on my friend Classnum1 because I'm his friend!" << "\n";
	classmorethan.something = 99656;

}

void Classnum3::editSomething(Classnum1 &classnum1) {

	std::cout << "Iam editSomething from Classnum3. I will modify 'something' on my friend Classnum1 because I'm his friend!" << "\n";
	classnum1.something = 6575757;

}

void Classnum1::showPrivate(){

	std::cout << "something: "<< something << "\n";
	std::cout << "morethan: " << morethan << "\n";

}



//6

class Hen;

class Hen {

public:
	class Nest {
		
	private:
		int dragonNest = 1995;
		
	public:
		void display();
		friend class Hen;

		class Egg {
		private:
			int dragonEgg = 1944;
			
		public:
			void display();
			friend class Hen;
		};
	};


public:
	void display();
	void accessNest(Nest &nest);
	void accessEgg(Nest::Egg &egg);



};

void Hen::display() {

	std::cout << "I'm Hen display() \n";

}

void Hen::Nest::display() {

	std::cout << "I'm Nest display() \n";

}

void Hen::Nest::Egg::display() {

	std::cout << "I'm Egg display() \n";
	
}





//7
void Hen::accessNest(Hen::Nest &nest) {
	
	std::cout << "Nest Private Member dragonNest: " << nest.dragonNest << "\n";

}

void Hen::accessEgg(Nest::Egg &egg) {

	std::cout << "Egg Private Member dragonEgg " << egg.dragonEgg << "\n";

}


class DataDistrib {

public:
	int someintpublic = 10;
private:
	int someintprivate = 20;
protected:
	int someintprotected = 30;


public:
	void showMap() {
	
		SHOW(someintpublic);
		SHOW(someintprivate);
		SHOW(someintprotected);
	}


};






int main() {
	Lib x;
	Libc libc;
	FriendlyTest test;
	MyClass1 *class1 = new MyClass1;
	MyClass2 *class2 = new MyClass2;

	Classnum1 classy1;
	Classnum2 classy2;
	Classnum3 classy3;

	DataDistrib datadistrib;

	Hen hen;
	Hen::Nest nest;
	Hen::Nest::Egg egg;

	int a = 999;
	int b = 1020;
	int select;
	std::cout << "Enter Activity Number: ";
	std::cin >> select;


	switch (select)
	{
	case 1:
		accessTest();
		break;
	case 2:
		
		x.a = "Iam A";
		x.b = "Iam B";
		x.c = "Iam C";
		std::cout << x.a << "\n";
		std::cout << x.b << "\n";
		std::cout << x.c << "\n";

		libc.geta();
		libc.getb();
		libc.getc();
		libc.seta();
		libc.setb();
		libc.setc();
		
		break;
	case 3:
		//show FriendlyTest private data
		test.showSecret();
		//modify FriendlyTest private data
		secretModifier(test);
		//show again
		test.showSecret();
		break;
	case 4:
		class1->pointToClass2(class2);
		class2->pointToClass1(class1);
		delete class1;
		delete class2;
		break;
	case 5:
		std::cout << "Value of Classnum1 private members: \n";
		classy1.showPrivate();
		classy2.editmorethan(classy1);
		classy2.editanything(classy1);
		std::cout << "Value of Classnum1 private members: \n";
		classy1.showPrivate();
		classy3.editSomething(classy1);
		std::cout << "Value of Classnum1 private members: \n";
		classy1.showPrivate();
		break;
	case 6:
		hen.display();
		nest.display();
		egg.display();
		break;
	case 7:
		hen.accessNest(nest);
		hen.accessEgg(egg);
		break;
	case 8:
		datadistrib.showMap();
		break;
	default:
		break;
	}
	







	system("pause");
}
