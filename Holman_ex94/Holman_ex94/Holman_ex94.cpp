//Searches a partially filled array of nonnegative integers.
#include <iostream>
const int SIZE = 20;

void fillArray(int a[], int size, int& numberUsed);
int search(const int a[], int numberUsed, int target);

int main()
{
    using namespace std;
    int arr[SIZE], listSize, target, fail;
    fail = -1;

    fillArray(arr, SIZE, listSize);

    char ans;
    int result;
    do
    {
        cout << "Enter a number to search for: ";
        cin >> target;
        result = search(arr, listSize, target);
        if (result == fail)
            cout << target << " is not on the list.\n";
        else
            cout << target << " is stored in array position "
            << result << endl
            << "(Remember: The first position is 0.)\n";
        cout << "Search again?(y/n followed by Return): ";
        cin >> ans;
    } while ((ans != 'n') && (ans != 'N'));
    cout << "End of program.\n";
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
// The rest of the definition of fillArray is given in  Display 7.9.

int search(const int a[], int numberUsed, int target) {

    int index = 0;
    int fail = -1;
    bool found = false;
    while ((!found) && (index < numberUsed))
        if (target == a[index])
            found = true;
        else
            index++;

    if (found)
        return index;
    else
        return fail;
}