#include<iostream>
#include<string>

int main() {
	using std::string; 
	using std::cout; 
	using std::cin; 
	using std::endl;

	string caps;

	while (true) {
		cout << "\nEnter a String.\n";
		getline(cin, caps);
		int length = 0;
		int capsCounter = 0;

		length = caps.length();
		for (int i = 0; i < length; i++) {
			if (caps[i] + 1 >= 'A' && caps[i] + 1 <= 'Z') {
				cout << caps[i];
				capsCounter++;
				//cout << "Your caps Counter is: " << capsCounter;

			}

		} 
		cout << endl;
		cout << "Your caps Counter is: " << capsCounter;
		cout << endl;
		cout << caps;
	}
}