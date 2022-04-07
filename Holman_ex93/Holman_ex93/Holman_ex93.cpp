#include <iostream>

void fillArray(int array[], int size, int& numberUsed);
void findMax(int array[], int size);
const int SIZE = 5; 
int main() {
	int array[SIZE]; 
	int listSize; 
	fillArray(array, SIZE, listSize);
	findMax(array, SIZE); 

	return 0; 
}

void fillArray(int array[], int size, int& numberUsed) {
	using std::cout; 
	using std::cin; 
	using std::endl; 

	cout << "Please Enter 4 Integer Values And mark The End With A Negative Value: \n"; 
	int next = 0, index = 0; 
	while ((next >=0) && (index < size)) {
		array[index] = next; 
		index++; 
		cin >> next; 
	}
	numberUsed = index; 
}
// used the example from 7.9 in the book to create the fillArray function. 
void findMax(int array[], int size) {
	using std::cout; 
	using std::endl; 
	int max = 0; 
	for (int i = 1; i <= size - 1; i++) {
		if (array[i] > max)
			max = array[i]; 
	}
	cout << "The maximum number in this array is " << max << "\n";
	for (int i = 0; i < size; i++) {
		cout << array[i] << " difference from Max is: " << max - array[i] << endl;
	}
}

