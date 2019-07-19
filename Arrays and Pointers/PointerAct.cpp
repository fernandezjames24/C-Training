#include "iostream"
#include "string"

//1
#pragma region
void pointer101() {

	std::cout << "Pointer: Show the basic declaration of pointer:" << std::endl;
	std::cout << "-----------------------------------------------"<< std::endl;
	std::cout << "Here is m = 10, n and o are two integer variable and *z is an integer" << std::endl;
	int m = 10;
	int n, o;
	int *z;


	z = &m;
	std::cout << "z stores the address of m = " << z << std::endl;
	
	*z = m;
	std::cout <<  "*z stores the value of m = " << *z << std::endl;

	std::cout << "&m is the address of m = " << &m << std::endl;

	std::cout << "&n stores the address of n= " << &n << std::endl;

	std::cout << "&o stores the address of o = " << &o << std::endl;

	std::cout << "&z stores the address of z = " << &z << std::endl;


}

#pragma endregion


//2
#pragma region

void demoPointers() {

	int m = 29;

	std::cout << "Address of m" << &m << std::endl;
	std::cout << "Value of m" << m << std::endl;

	int *ab = &m;

	std::cout << "Now ab is assigned with the address of m." << std::endl;
	std::cout << "Address of pointer ab : " << &ab << std::endl;
	std::cout << "Content of pointer ab :" << *ab << std::endl;

	m = 34;
	std::cout << " The value of m assigned to 34 now." << std::endl;
	std::cout << "Address of pointer ab : " << &ab << std::endl;
	std::cout << "Content of pointer ab :" << *ab << std::endl;

	m = 7;
	std::cout << "The pointer variable ab is assigned with the value 7 now." << std::endl;
	std::cout << "Address of m: " << &m << std::endl;
	std::cout << "Value of m: " << *ab << std::endl;

}


#pragma endregion


//3
#pragma region

void demoAddRef() {

	std::cout << "Pointer : Demonstrate the use of & and * operator :" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;

	int m = 300;
	float fx = 300.600006f;
	char cht = 'z';


	int *pm = &m;
	float *pfx = &fx;
	char *pcht = &cht;

	std::cout << "m = " << m << std::endl;
	std::cout << "fx = " << fx << std::endl;
	std::cout << "cht = " << cht << std::endl;


	std::cout << "Using & operator :" << std::endl;
	std::cout << "------------------------" << std::endl;

	std::cout << "address of m " << &m << std::endl;
	std::cout << "address of fx " << &fx << std::endl;
	//std::cout << "address of cht " << &cht << std::endl;
	printf("address of cht %p", &cht);

	std::cout << "Using & and * operator :" << std::endl;
	std::cout << "------------------------" << std::endl;

	std::cout << "Value at address of m " << *pm << std::endl;
	std::cout << "Value at address of fx " << *pfx << std::endl;
	std::cout << "Value at address of cht " << *pcht << std::endl;

	std::cout << "Using only pointer variable:" << std::endl;
	std::cout << "------------------------" << std::endl;

	std::cout << "address of m " << &pm << std::endl;
	std::cout << "address of fx " << &pfx << std::endl;
	std::cout << "address of cht " << &pcht << std::endl;

	std::cout << "Using only pointer operator:" << std::endl;
	std::cout << "------------------------" << std::endl;

	std::cout << "Value at address of m " << *pm << std::endl;
	std::cout << "Value at address of fx " << *pfx << std::endl;
	std::cout << "Value at address of cht " << *pcht << std::endl;

}



#pragma endregion

//4
#pragma region

int addTwoNumber(int *a, int *b) {
	int value = *a + *b;
	return value;
}



#pragma endregion

//5
#pragma region

int addByRef(int &a, int&b) {

	return a + b;

}


#pragma endregion

//6
#pragma region

int *maxNumber(int *a, int *b) {
	
	int num1 = *a;
	int num2 = *b;

	return (num1 > num2) ? &num1 : &num2;
	
}


#pragma endregion


//7
#pragma region

void arrayPointer() {

	int a;
	std::cout << "Input the number of elements to store in the array: ";
	std::cin >> a;

	int *arr = new int[a];

	std::cout << "Input " << a << " number of elements in the array: " << std::endl;
	for (int i = 0; i < a; i++)
	{
		int input;
		std::cout << "Element - " << i << " "; std::cin >> input;
		arr[i] = input;
	}


	for (int x = 0; x < a; x++)
	{
		std::cout << "Element - " << x << " ";
		std::cout << arr[x] << std::endl;
	}

	delete[] arr;

}


#pragma endregion

//8
#pragma region


void swap(char *a, char *b) {

	char buffer = *a;
	*a = *b;
	*b = buffer;
}


void permutation(char *a, int *first, int *length) {

	
	int i;

	if (*first == *length) {
		std::cout << a << " ";
	}
	else {

		for (i = *first; i <= *length; i++)
		{

			swap((a + *first),(a + i));
			permutation(a, first + 1, length);
			swap((a + *first), (a + i));

		}

	}
}


#pragma endregion


//9
#pragma region
void findHighest() {

	int buffer = 0;
	int elem;
	std::cout << "Input total number of elements (1 to 100) : ";
	std::cin >> elem;

	int *arr = new int[elem];

	for (int x = 0; x < elem; x++)
	{
		int element;
		std::cout << "Number: " << x + 1 << " ";
		std::cin >> element;
		arr[x] = element;
	}


	
	for (int i = 0; i < elem; i++)
	{

		if (arr[i] > buffer) {
			buffer = arr[i];
		}
	}

	std::cout << "The Largest Element is : " << buffer;

	delete[] arr;
}
#pragma endregion

//10
#pragma region
void stringLength() {

	char *a = new char[256];

	std::cout << "Input a string: ";
	std::cin >> a;

	int wordcount = 0;

	for (int i = 0; i < strlen(a);i++)
	{
		wordcount++;
	}

	
	std::cout << "The length of the given string " << a << " is " << wordcount << std::endl;
	
	delete[] a;

}
#pragma endregion

//11
#pragma region
void swap3(int &a, int &b, int &c) {

	a = a ^ b ^ c;
	b = a ^ b ^ c;
	c = a ^ b ^ c;
	a = a ^ b ^ c;

}

#pragma endregion


//12
#pragma region

int *factorial(int *num) {

	int fact = 1;

	for (int i = 1; i <= *num ; i++)
	{
		fact = fact * i;
	}

	return &fact;

}

#pragma endregion


//13
#pragma region

void vowelSingular() {

	int vowelcounter = 0;
	int singularcounter = 0;

	char *arr = new char[256];
	std::cout << "Input a string: ";
	std::cin >> arr;

	for (int i = 0; i < strlen(arr); i++) {
	
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
			vowelcounter++;
		}
		else {
			singularcounter++;
		}

	}

	std::cout << "Number of vowels: " << vowelcounter << std::endl;
	std::cout << "Number of singular: " << singularcounter << std::endl;

	
	delete[] arr;

}


#pragma endregion


//14
#pragma region
void sortArray() {

	int size;
	std::cout << "Input the number of elements to store in the array: ";
	std::cin >> size;
	int *nums = new int[size];
	std::cout << "Input " << size << " number of elements in the array : " << std::endl;

	for (int i = 0; i < size; i++)
	{
		int value;
		std::cout << "element" << i + 1 << ": ";
		std::cin >> value;
		nums[i] = value;
	}

	
	int i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			int buffer;
			if (nums[j] < nums[min]) {
				min = j;
			}

			buffer = nums[min];
			nums[min] = nums[i];
			nums[i] = buffer;

		}


	}


	std::cout << "The elements in the array after sorting : \n";

	for (int x = 0; x < size; x++)
	{
		std::cout << "element - " << x + 1 << " : " << nums[x] << std::endl;
	}

	delete[] nums;


}





#pragma endregion


//15
#pragma region
int *returnPointer(int *a, int *b) {
	
	
	return (*a > *b) ? a : b;
	
}

#pragma endregion


//16
#pragma region
void addElements() {


	int size;
	std::cout << "Input the number of elements to store in the array (max 10) : ";
	std::cin >> size;

	if (size > 10) {
		return;
	}

	int *a = new int[size];
	
	std::cout << "Input " << size << "number of elements in the array :" << std::endl;

	for (int i = 0; i < size; i++)
	{
		int value;
		std::cout << "element - " << i + 1 << " ";
		std::cin >> value;
		a[i] = value;
	}

	int total = 0;
	for (int x = 0; x < size; x++)
	{
		total += a[x];
	}

	std::cout << "The sum of array is : " << total;

	delete[] a;
}


#pragma endregion


//17
#pragma region
void reverseArray() {

	int size;
	std::cout << "Input the number of elements to store in the array (max 15) : ";
	std::cin >> size;

	if (size > 15) {
		return;
	}

	int *a = new int[size];

	std::cout << "Input " << size << "number of elements in the array :" << std::endl;

	for (int i = 0; i < size; i++)
	{
		int value;
		std::cout << "element - " << i + 1 << " ";
		std::cin >> value;
		a[i] = value;
	}

	

	std::cout << "The elements of array in reverse order are : " << std::endl;


	for (int x = size - 1; x >=0; x--)
	{
		std::cout << "element - " << x << " : " << a[x] << std::endl;
	}




	delete[] a;


}


#pragma endregion

//18
#pragma region

struct myStruct {

	char *mychar;

};



void pStruct() {

	myStruct * temp = new myStruct();		
	temp->mychar = "John Alter from Court Street";

	std::cout << temp->mychar;

	delete temp;

}

#pragma endregion

//19
#pragma region
union MyUnion
{
	char * mychar;
};

void pUnion() {

	MyUnion *pt = new MyUnion;

	pt->mychar = "Jhon Mc";

	std::cout << pt->mychar << " " << pt->mychar;
	delete pt;

}


#pragma endregion

//20
#pragma region

struct anotherStruct {

	char * employeeName;
	int employeeID;

};

void pointerArrayStruct() {

	struct anotherStruct emp1 = { "Alex", 1002 };
	struct anotherStruct *arr = { &emp1 };


	std::cout << arr->employeeName << " " << arr->employeeID;


}




#pragma endregion


//21
#pragma region
void printAlphabet() {

	char alphabet[27];
	char *a;

	

	int i;

	a = alphabet;
	for (i = 0; i < 26; i++)
	{
		*a = i + 'A';
		a++;
	}

	a = alphabet;


	std::cout << "The alphabets are: \n";
	for (i = 0; i < 26; i++)
	{
		std::cout << *a << " ";
		a++;
	}

}






#pragma endregion

//22
#pragma region
void palindrome() {

	char *myString = new char[100];
	std::cout << "Input a String: ";
	std::cin >> myString;

	_strrev(myString);

	std::cout << myString;

	delete[] myString;

}
#pragma endregion

int main() {

	//add number variables
	int a, b;

	//choice select variable
	int choice;


	//permutation variables
	char something[] = "abcd";
	int start = 0;
	int length = strlen(something) - 1;


	//swap variables
	int num1, num2, num3;


	std::cout << "Enter a number (1 up to 22): ";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		pointer101();
		break;
	case 2:
		demoPointers();
		break;
	case 3:
		demoAddRef();
		break;
	case 4:
		std::cout << "Input the first number: ";
		std::cin >> a;
		std::cout << "Input the second number: ";
		std::cin >> b;
		std::cout << "The sum of the entered numbers is: ";
		std::cout << addTwoNumber(&a,&b) << std::endl;
		break;
	case 5:
		std::cout << "Input the first number: ";
		std::cin >> a;
		std::cout << "Input the second number: ";
		std::cin >> b;
		std::cout << "The sum of " << a << " and " << b << " is " << addByRef(a,b) << std::endl;
		break;
	case 6:
		std::cout << "Input the first number: ";
		std::cin >> a;
		std::cout << "Input the second number: ";
		std::cin >> b;
		std::cout << *maxNumber(&a, &b) << " is the maximum number" << std::endl;
		break;
	case 7:
		arrayPointer();
		break;
	case 8:
		permutation(something,&start,&length);
		break;
	case 9:
		findHighest();
		break;
	case 10:
		stringLength();
		break;
	case 11:
		std::cout << "Input the value of 1st element: ";
		std::cin >> num1;
		std::cout << "Input the value of 2nd element: ";
		std::cin >> num2;
		std::cout << "Input the value of 3rd element: ";
		std::cin >> num3;

		std::cout << "The value before swapping are: " << std::endl;
		std::cout << "element 1: = " << num1 << std::endl;
		std::cout << "element 2: = " << num2 << std::endl;
		std::cout << "element 3: = " << num3 << std::endl;


		swap3(num1, num2, num3);
		
		std::cout << "The value after swapping are: " << std::endl;
		std::cout << "element 1: = " << num1 << std::endl;
		std::cout << "element 2: = " << num2 << std::endl;
		std::cout << "element 3: = " << num3 << std::endl;
		break;

	case 12:
		std::cin >> a;
		std::cout << *factorial(&a);
		break;
	case 13:
		vowelSingular();
		break;
	case 14:
		sortArray();
		break;
	case 15:
		int *op;
		std::cout << "Input the first number: ";
		std::cin >> a;
		std::cout << "Input the second number: ";
		std::cin >> b;
		op = returnPointer(&a, &b);
		std::cout << *op << " is the maximum number" << std::endl;
		delete op;
		break;
	case 16:
		addElements();
		break;
	case 17:
		reverseArray();
		break;
	case 18:
		pStruct();
		break;
	case 19:
		pUnion();
		break;
	case 20:
		pointerArrayStruct();
		break;
	case 21:
		printAlphabet();
		break;
	case 22:
		palindrome();
		break;
	default:
		break;
	}
	

	
	system("pause");
	return 0;

}	
