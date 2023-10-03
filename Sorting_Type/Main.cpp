#include <iostream>
#include <string>
#include <vector>
#include "Sorter.h"

using namespace std;

void check_input(bool& flag, const string& user_in);

int main() {
	string input;
	bool state = true;

	cout << "What data type would you like to sort?\n";
	cout << "1.int\n2.double\n3.string\n4.char\n";
	cout << "\nInput: ";
	getline(cin, input);

	check_input(state, input);
	
	while (state == false) {
		cout << "\nPlease type \"int\" ,\"double\",\"string\",\"char\"" << endl;
		cout << "Input: ";
		cin.clear();
		getline(cin, input);
		check_input(state, input);
	}
	if (input == "int") {
		SortType<int> sorter;
	}
	else if (input == "double") {
		SortType<double> sorter;
	}
	else if (input == "string") {
		SortType<string> sorter;
	}
	else if (input == "char") {
		SortType<char> sorter;
	}
	return 0;
}

void check_input(bool& flag, const string& user_in) {
	if (user_in == "int" || user_in == "double" || user_in == "string" || user_in == "char") { flag = true; }
	else { flag = false; }
}
