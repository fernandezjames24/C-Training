#include "iostream"
#include "cmath"



// 1.
#pragma region
int findHighestNumber(int a[], int length) {

	int highflag = 0;


	for (int i = 0; i < length; i++)
	{
		if (a[i] > highflag) {
		
			highflag = a[i];

		}
	
	}

	return highflag;

}
#pragma endregion

//2.
#pragma region
void largestThree(int a[], int length) {

	if (length < 3)
	{
		std::cout << "Insufficient length";
	}

	int first, second, third;

	first = second = third = 0;

	for (int i = 0; i < length; i++) {
	
	
		if (a[i] > first) {
		
			third = second;
			second = first;
			first = a[i];
		
		}

		else if (a[i] > second) {
		
			third = second;
			second = a[i];

		}

		else if (a[i] > third) {
		
			third = a[i];
		
		}
	
	
	}

	std::cout << "First three largest numbers: " << first << " " << second << " " << third;



}
#pragma endregion


//3. 
#pragma region
int secondLargest(int a[], int length) {

	int first, second;

	first = second = 0;

	for (int i = 0; i < length; i++)
	{

		if (a[i] > first) {
		
			second = first;
			first = a[i];

		}

		else if (a[i] > second) {
		
			second = a[i];

		}

	}

	return second;

}
#pragma endregion


//4.
#pragma region
void kLargest(int a[], int length, int k) {

	int currentHighest = 0;


	if (length < k) {
		std::cout << "Invalid";
	}



	int index1;
	int index2;
	int min;



	for (index1 = 0; index1 < length - 1; index1++)
	{

		min = index1;

		for (index2 = index1 + 1; index2 < length; index2++)
		{
			int buffer;
			if (a[index2] > a[min]) {
				min = index2;
			}

			buffer = a[min];
			a[min] = a[index1];
			a[index1] = buffer;

		}

	}


	
	for (int x = 0; x < k; x++) {
	
		std::cout << a[x] << std::endl;
	
	}

	

}
#pragma endregion


//5.
#pragma region
void findTwoSmallest(int a[], int length) {

	int first, second;
	int highest = 0;



	// find largest
	for (int i = 0; i < length; i++)
	{
		if (a[i] > highest) {

			highest = a[i];

		}

	}
	
	first = second = highest;

	// find smallest 2
	for (int i = 0; i < length; i++)
	{
		if (a[i] < first) {

			second = first;
			first = a[i];

		}

		else if (a[i] < second) {
		
			second = a[i];
		}
	}


	std::cout << first << " " << second;

}
#pragma endregion


//6 
#pragma region
void twoGreaterElement(int *a, int *length) {


	int counter = 0;

	int i, j;
	for (i = 0; i < *length; i++)
	{
		for (j = i+1; j < *length; j++)
		{
			if (a[i] < a[j]) {
				++counter;

				if (counter >= 2) {
					std::cout << a[i] << std::endl;
					counter = 0;
					break;
				}

			}

			
		}
	}


}
#pragma endregion


//7
#pragma region
int findMode(int a[], int length) {

	int currentMode = 0;

	int maxCount = 0;

	
	for (int x = 0; x < length; x++) {

		int count = 0;

		for (int y = 0; y < length; y++) {

			if (a[y] == a[x]) {
				count++;
			
			}
		}

		if (count >  maxCount) {

			maxCount = count;
			currentMode = a[x];

		}

	
	}


	return currentMode;

}
#pragma endregion


// 8 
#pragma region
void greaterElement(int a[], int length) {


	int testElement = 0;
	

	for (int i = 0; i < length; i++)
	{

		testElement = a[i];
		int greaterVal = -1;

		for (int x = i+1; x < length; x++)
		{
			if (a[x] > testElement) {
				greaterVal = a[x];
				break;
			}
			
		}

		if (greaterVal != -1) {
			std::cout << testElement << " " << greaterVal << std::endl;
		}
		else {
			std::cout << "Ignored" << std::endl;
		}
	}



}
#pragma endregion


//9
#pragma region
void waveForm(int *a, int *length) {

	int buffer;
	bool isswapped;

	//sort
	for (int i = 0; i < *length - 1; i++)
	{
		isswapped = false;
		for (int j = 0; j < *length - i - 1; j++)
		{
			if (a[j] > a[j + 1]) {
				buffer = a[j];
				a[j] = a[j + 1];
				a[j + 1] = buffer;
				isswapped = true;
			}
		}

		if (isswapped == false) {
			break;
		}

	}




	for (int i = 0; i < *length; i++)
	{
		int buffer1 = a[i];
		a[i] = a[i + 1];
		a[i + 1] = buffer1;
		++i;

	}




	for (int i = 0; i < *length; i++) {


		std::cout << a[i] << " ";


	}

}
#pragma endregion


//10.
#pragma region 
int findSmallestMissing(int a[], int length) {


	for (int i = 0; i < length; i++)
	{
		if (a[i] > i) {
			
			return i;

		}
	}
	
	
}
#pragma endregion


//11.
#pragma region
void multiplyNextPrev(int a[], int length) {

	
	int previousval = a[0];  
	a[0] = a[0] * a[1]; 


	for (int i = 1; i < length- 1; i++)
	{
		int current = a[i]; 
 		a[i] = previousval * a[i + 1];  
		previousval = current;
	}

	a[length-1] = previousval * a[length-1];
	
	for (int x = 0; x < length; x++) {
		std::cout << a[x] << std::endl;
	}

}
#pragma endregion


//12
#pragma region
void zigzag(int *a, int *length) {

	bool lessthan = false;
	bool greaterthan = false;
	
	for (int i = 0; i < *length; i++)
	{
		int buffer;
		if (i % 2 == 0) { //even index
			
			lessthan = true;
			if (a[i] > a[i + 1] && lessthan == true) {
				buffer = a[i];
				a[i] = a[i + 1];
				a[i + 1] = buffer;
				lessthan = false;
			}

		}
		else {

			greaterthan = true;
			if (a[i] < a[i + 1] && greaterthan == true) {
				buffer = a[i];
				a[i] = a[i + 1];
				a[i + 1] = buffer;
				greaterthan = false;
			}

		}
		
	}




	for (int i = 0; i < *length; i++) {

		std::cout << a[i] << " ";

	}
	
}
#pragma endregion


//13.
#pragma region
void evenOdd(int a[], int length) {


	int leftIndex = 0;
	int rightIndex = length - 1;

	while (leftIndex < rightIndex) {

		int buffer;

		while (a[leftIndex] % 2 == 0 && leftIndex < rightIndex){
			leftIndex++;
		}

		while (a[rightIndex] % 2 == 1 && leftIndex < rightIndex) {
			rightIndex--;
		}

		
		if (leftIndex < rightIndex) {
		
			int buffer = a[leftIndex];
			a[leftIndex] = a[rightIndex];
			a[rightIndex] = buffer;

			leftIndex++;
			rightIndex--;

		}

	}


	for (int x = 0; x < length; x++) {
	
		std::cout << a[x] << std::endl;
	
	}


}
#pragma endregion


//14
#pragma region
void separateZeroOnes(int a[],int length) {


	int leftIndex = 0;
	int rightIndex = length - 1;


	while (leftIndex < rightIndex)
	{

		int buffer;

		while (a[leftIndex] == 1 && leftIndex < rightIndex) {
			leftIndex++;
		}

		while (a[rightIndex] == 0 && leftIndex < rightIndex) {
			rightIndex--;
		}


		if (leftIndex < rightIndex) {
		
			buffer = a[leftIndex];
			a[leftIndex] = a[rightIndex];
			a[rightIndex] = buffer;
			leftIndex++;
			rightIndex--;
		}

	}


	for (int x = 0; x < length; x++) {
	
		std::cout << a[x] << std::endl;
	
	}


}
#pragma endregion

//15
#pragma region

void rearrangeSort(int *a, int *length) {

	int leftindex = 0;
	int rightindex = *length - 1;


	int *arr = new int[*length];



	for (int i = 0; i < *length; i++)
	{
		if (i % 2 == 0) { // if even index, put maximums
			arr[i] = a[rightindex];
			rightindex--;
		}
		else { //else odd, put lowest
			arr[i] = a[leftindex];
			leftindex++;
		}

	}
	

	for (int i = 0; i < *length; i++)
	{
		std::cout << arr[i] << " ";
	}


	delete[] arr;
	
}



// 1,2,3,4,5,6,7
#pragma endregion


//16
#pragma region
void zeroOneTwo(int *a, int *length) {

	int index1;
	int index2;
	int min;



	for (index1 = 0; index1 < *length - 1; index1++)
	{

		min = index1;
		
		for (index2 = index1 + 1; index2 < *length; index2++)
		{
			int buffer;
			if (a[index2] < a[min]) {
				min = index2;
			}

			buffer = a[min];
			a[min] = a[index1];
			a[index1] = buffer;

		}

	}





	for (int x = 0; x < *length; x++) {
	
		std::cout << a[x] << std::endl;
	
	}
	


}
#pragma endregion


//17
#pragma region
void absDiff(int *a, int *length, int given) {

	int buffer;

	for (int i = 0; i < *length; i++)
	{
		a[i] = std::abs(given - a[i]);
	}

	

	
	bool isswapped;

	//sort
	for (int i = 0; i < *length - 1; i++)
	{
		isswapped = false;
		for (int j = 0; j < *length - i - 1; j++)
		{
			if (a[j] < a[j + 1]) {
				buffer = a[j];
				a[j] = a[j + 1];
				a[j + 1] = buffer;
				isswapped = true;
			}
		}

		if (isswapped == false) {
			break;
		}

	}

	for (int i = 0; i < *length; i++)
	{
		std::cout << a[i] << " ";
	}

}

#pragma endregion

//18
#pragma region
void rearrangePosNeg(int *a, int *length) {

	
	int *temp = new int[*length];

	int currentIndex = 0;


	for (int i = 0; i < *length; i++) {
	
		if (a[i] >= 0) { // if positive
			temp[currentIndex++] = a[i];
			
		}
	
	}



	for (int i = 0; i < *length; i++) {
	
		if (a[i] < 0) { // if negative
			temp[currentIndex++] = a[i];
		}
	
	}



	for (int i = 0; i < *length; i++) {
		std::cout << temp[i] << std::endl;
	}


	delete[] temp;

}
#pragma endregion

//19
#pragma region
int oddTimes(int *a, int *length) {

	int counter = 0;

	for (int i = 0; i < *length; i++)
	{

		for (int j = 0; j < *length; j++)
		{
			if (a[i] == a[j]) {
				counter++;
			}
		}

		if (counter % 2 != 0) {
			return a[i];
		}

	}

	
}
#pragma endregion


//20
#pragma region
int occurenceSort(int *a, int *length, int given) {

	
	int counter = 0;

	for (int i = 0; i < *length; i++)
	{
	
		if (a[i] == given) {
		
			counter++;
		
		}

	}

	return counter;


}
#pragma endregion


//21
#pragma region
void twoRepeating(int *a, int *length) {

	
	int counter = 0;

	for (int i = 0; i < *length; i++)
	{
		for (int j = 0; j < *length; j++)
		{
			if (a[i] == a[j]) {
				counter++;
			}
		}

		if (counter > 1) {
			std::cout << a[i] << " ";
			i += counter;
		}
		counter = 0;
	}



}
#pragma endregion

//22 
void missingOnTwo(int *a, int *b, int *length1, int *length2) {


	int missing = 0;

	for (int i = 0; i < *length1; i++)
	{
		missing ^= a[i];
	}
	for (int i = 0; i < *length2; i++)
	{
		missing ^= b[i];
	}

	std::cout << missing;


}








//23 // notfinish
void onceTwice(int *a, int *length) {

	int value = 0;

	for (int i = 0; i < *length; i++)
	{
		value = value ^ a[i];
	}
	
	std::cout << value;

}

//24
#pragma region
void firstRepeating(int *a, int *length) {

	bool thereis = false;


	for (int i = 0; i < *length; i++)
	{
		for (int j = i + 1; j < *length; j++)
		{
			if (a[i] == a[j]) {
				std::cout << a[j] << std::endl;
				thereis = true;
				break;
			}
		}

		if (thereis) {
			break;
		}
	}


}
#pragma endregion

void commonElements(int *a, int *b, int *c, int length1, int length2, int length3) {

	
	
	

	int i = 0;
	int j = 0;
	int k = 0;

	while (i < length1 && j < length2 && k < length3)
	{
		if (a[i] == b[j] && b[j] == c[k]) {
		
			std::cout << a[i] << " ";
			i++;
			j++;
			k++;
		
		}
		else if (a[i] < b[j]) {
			i++;
		}
		
		else if (b[j] < c[k]) {
			j++;
		}
		 
		else {
			k++;
		}
	}
	

}










//26
void unique(int *a, int *length) {

	
	int counter;

	int i, j, k;
	for (i = 0; i < *length; i++)
	{
		counter = 1;
		for (j = i+1; j < *length; j++)
		{
			if (a[i] == a[j]) {
				for (k = j; k < *length - 1; k++) {
					a[k] = a[k + 1];
				}

				*length--;
				j--;
				counter = 0;
			}
		}

		if (counter != 1) {
			
			for (j = i; j < *length - 1; j++)
			{
				a[j] = a[j + 1];
			}

			*length--;
			i--;
		}

	}

	for (int x = 0; x < *length; x++)
	{
		std::cout << a[x] << " ";
	}



}




//27
void pairSum(int *a, int *length, int given) {


	int counter = 0;

	for (int i = 0; i < *length; i++)
	{
		for (int j = i+1; j < *length; j++)
		{
			if (a[i] + a[j] == given) {
				counter++;
			}
		}

	}


	std::cout << counter;

}



int main() {

	int choice;
	int given; 

	int mylist[] = { 0,0,1,0,1,0 };
	int mylist1[] = { 8,9,0,1,7 };
	int mylist2[] = { 10,9,0,1 };
	int somelist[] = { 0,1,2,1,2,0 };
	int anotherlist[] = { 1,2,2,3,3,4,4 };


	int arrwithneg[] = { 0,-1,2,-2,-5,5,7,6,3,5 };
	int arrwithnegzise = sizeof(arrwithneg) / sizeof(arrwithneg[0]);


	int anotherlistsize = sizeof(anotherlist) / sizeof(anotherlist[0]);
	int size1 = sizeof(mylist1) / sizeof(mylist1[0]);
	int size2 = sizeof(mylist2) / sizeof(mylist2[0]);
	int itssize = sizeof(somelist) / sizeof(somelist[0]);
	int size01 = sizeof(mylist) / sizeof(mylist[0]);





	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,1 };
	int arr3[] = { 10,11,12,13,1 };

	int arr1size = sizeof(arr1) / sizeof(arr1[0]);
	int arr2size = sizeof(arr2) / sizeof(arr2[0]);
	int arr3size = sizeof(arr3) / sizeof(arr3[0]);

	
	std::cout << "Enter Activity Number: ";
	std::cin >> choice;

	switch (choice)
	{
		case 1:
			std::cout << "Highest Number" << std::endl;
			std::cout << findHighestNumber(mylist1,size1);
			break;
		case 2:
			std::cout << "Largest Three Element" << std::endl;
			largestThree(mylist1, size1);
			break;
		case 3:
			std::cout << "Second Largest Number" << std::endl;
			std::cout << secondLargest(mylist1, size1);
			break;
		case 4:
			std::cout << "k Largest Number" << std::endl;
			std::cout << "Enter value for k";
			std::cin >> given;
			std::cout << "k is: " << given << " and " << given << " highest numbers is: ";
			kLargest(mylist1, size1, given);
			break;
		case 5:
			std::cout << "Find Smallest and Second Smallest" << std::endl;
			findTwoSmallest(mylist1, size1);
			break;
		case 6:
			std::cout << "Find all elements with at least two greater elements" << std::endl;
			twoGreaterElement(mylist1, &size1);
			break;
		case 7:
			std::cout << "Find the most occurring element" << std::endl;
			std::cout << findMode(mylist1, size1);
			break;
		case 8:
			std::cout << "Find greater element of every element" << std::endl;
			greaterElement(mylist1, size1);
			break;
		case 9:
			std::cout << "Waveform" << std::endl;
			waveForm(mylist1, &size1);
			break;
		case 10:
			std::cout << "Find smallest element missing" << std::endl;
			std::cout << findSmallestMissing(mylist1, size1);
			break;
		case 11:
			std::cout << "Update every array element by multiplication of next and previous values of an element" << std::endl;
			multiplyNextPrev(mylist1, size1);
			break;
		case 12:
			std::cout << "Arrange array on a zigzag fashion" << std::endl;
			zigzag(mylist1, &size1);
			break;
		case 13:
			std::cout << "Separate odd and even numbers. Even first then odd" << std::endl;
			evenOdd(mylist1, size1);
			break;
		case 14:
			std::cout << "Separate zeros and ones." << std::endl;
			separateZeroOnes(mylist,size01);
			break;
		case 15:
			std::cout << "Rearrange a given sorted array. Sequence must be largest, smallest, second largest, second smallest,..." << std::endl;
			rearrangeSort(mylist1, &size1);
			break;
		case 16:
			std::cout << "Sort array of elements 0,1,2 and sort to 0, 1 , 2 respectively" << std::endl;
			zeroOneTwo(somelist, &itssize);
			break;
		case 17:
			std::cout << "Sort aray based on absolute difference of given value and array elemets" << std::endl;
			std::cin >> given;
			absDiff(mylist1, &size1, given);
			break;
		case 18:
			std::cout << "Move all negative elements to end of array without changing its position" << std::endl;
			rearrangePosNeg(arrwithneg, &arrwithnegzise);
			break;
		case 19:
			std::cout << "Find an element occur odd number of times whose other element occur even times" << std::endl;
			std::cout << oddTimes(anotherlist, &anotherlistsize);
			break;
		case 20:
			std::cout << "Count the occurence of a given number on a sorted array" << std::endl;
			std::cout << "Given: "; std::cin >> given;
			occurenceSort(anotherlist, &anotherlistsize, given);
			break;
		case 21:
			std::cout << "Find the two repeating elements" << std::endl;
			twoRepeating(mylist1, &size1);
			break;
		case 22:
			std::cout << "Find the missing element from two arrays" << std::endl;
			missingOnTwo(mylist1, mylist2, &size1, &size2);
			break;
		case 23:
			std::cout << "Find element that appear once and every other appear twice" << std::endl;
			onceTwice(mylist1, &size1);
			break;
		case 24:
			std::cout << "Find first repeating element" << std::endl;
			firstRepeating(mylist1, &size1);
			break;
		case 25:
			std::cout << "Find common element in three sorted array" << std::endl;
			commonElements(arr1, arr2, arr3, arr1size, arr2size, arr3size);
			break;
		case 26:
			std::cout << "Print all unique number" << std::endl;
			unique(mylist1, &size1);
			break;
		case 27:
			std::cout << "Find number of pairs whose sum is equal to given" << std::endl;
			std::cout << "Given: "; std::cin >> given;
			pairSum(mylist1, &size1, given);
			break;
	default:
		break;
	}
	system("pause");
	return 0;	

}
