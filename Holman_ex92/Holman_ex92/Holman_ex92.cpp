#include <iostream>
//using namespace std; 

const int MAXSIZE = 20; 
void fillArray(int array[], int size, int& numberUsed);
int index_of_smallest(const int a[], int start_index, int used_size); // finds the index of the smallest number in the array
int index_of_largest(const int a[], int start_index, int used_size); // finds the index of the largest number in the array
void sort_array(int a[], int used_size); // sorts the array 

double calcAverage(int array[], int size) {
	using std::cout;
	//using std::array; 
	using std::endl;

	double total = 0;

	for (int i = 0; i < size; i++) {
		total = total + array[i]++;
	}
	int newTotal = total / size;
	if (size > 0) {
		return newTotal;
	}
	else {
		cout << "Error"; 
		return 0; 
	}
	//used example 7.9 computeAverage function as guide 
}

void print_array(int array[], int index, int size);

int main() {
	using std::cout;
	using std::endl; 
	int array[MAXSIZE]; 
	int size = 0; 
	int listOrder = 0; 
	//sort_array(array, MAXSIZE); // sorts the array at the beginning
	//print_array(array, size, MAXSIZE);
	fillArray(array, MAXSIZE, listOrder); 
	sort_array(array, MAXSIZE); // sorts the array at the beginning
	cout << "The smallest number of the array is located at index: " << index_of_smallest(array, size, MAXSIZE);
	cout << endl;
	cout << "The largest number of the array is located at index: " << index_of_largest(array, size, MAXSIZE);
	cout << endl; 
	cout << "The Average of the Array is: " << calcAverage(array, MAXSIZE) << endl;
	cout << endl;
	cout << endl; 
	
	return 0; 
}


void fillArray(int a[], int size, int& numberUsed) {
		using std::cout;
		using std::cin;
		using std::endl;
		cout << "Enter up to " << size << " nonnegative whole numbers.\n"
			<< "Mark the end of the list with a negative number.\n";
		int next, index = 0;
		cin >> next;
		while ((next >= 0) && (index < size))
		{
			a[index] = next;
			index++;
			cin >> next;
		}
		numberUsed = index;

}


int index_of_smallest(const int a[], int start_index, int used_size){
	int min = a[start_index], index_of_min = start_index;
	for (int i = start_index + 1; i < used_size; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			index_of_min = i;
		}
	}
	return index_of_min;
}

int index_of_largest(const int a[], int start_index, int used_size) {
	int max = a[start_index], index_of_max = start_index;
	for (int i = start_index + 1; i < used_size; i++)
	{
		if (a[i] >= max)
		{
			max = a[i];
			index_of_max = i;
		}
	}
	return index_of_max;
}

void sort_array(int a[], int used_size)
{
	int index_of_next_smallest;
	int temp;
	for (int i = 0; i < used_size - 1; i++)
	{
		index_of_next_smallest = index_of_smallest(a, i, used_size);
		// swap two elements
		temp = a[i];
		a[i] = a[index_of_next_smallest];
		a[index_of_next_smallest] = temp;
	}
}

void print_array(int array[], int index, int size) {
	using std::cout; 
	using std::endl; 
	sort_array(array, MAXSIZE); // sorts the array at the beginning
	cout << "The smallest number of the array is located at index: " << index_of_smallest(array, size, MAXSIZE);
	cout << endl;
	cout << "The largest number of the array is located at index: " << index_of_largest(array, size, MAXSIZE);
	cout << endl;
}