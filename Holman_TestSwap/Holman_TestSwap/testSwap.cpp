#include <iostream>

void fillArray(int array[], int size, int& numberUsed);
void swapFrontBack(int array[], int size);

int main() {
	using std::cout; 
	using std::cin; 
	using std::endl; 
	cout << "Please Enter A Number For The Size Of The Array:\n"; 
	int size = 0; 
	cin >> size; 
	int value = 0; 
	int array[100];  
	fillArray(array, size, value); 
	for (int i = 0; i < size; i++) {
		cout << array[i] + 1 << " ";
	}
	cout << endl; 
	cout << "Swapping the first and last values of the array now: \n"; 
	swapFrontBack(array, size); 
	
	return 0;
}

void fillArray(int array[], int size, int& numberUsed) {
	using std::cout; 
	using std::cin; 
	using std::endl; 
	int index = 0; 
	int next = 0; 
	cout << "Please Enter in " << size << " values\n"; 
	while ((next >= 0) && (index < size)) {
		array[index] = next;
		index++; 
		cin >> next; 
	}
	//numberUsed = index;  
}

void swapFrontBack(int array[], int size) {
	using std::cout; 
	//int n = 0; 
	int temp = 0;
	temp = array[0];
	array[0] = array[size - 1]; 
	array[size - 1] = temp; 
	for (int i = 0; i < size; i++) {
		cout << array[i] + 1 << " ";
	}
}