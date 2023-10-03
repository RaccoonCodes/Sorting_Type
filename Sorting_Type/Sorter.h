#ifndef SORTER_H
#define SORTER_H
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

template<typename T> class SortType {
private:
	vector <T> data_list;
public:
	SortType();
	void setData_list(T& data);
	void getData_list();
	void sortList_fun();
};

template<typename T> SortType <T>::SortType() {
	T input;
	string input_str;
	cout << "Enter the values to be added on the list (press \"Enter\" to stop)";
	getline(cin, input_str);

	istringstream stream(input_str);

	while (stream>> input) {
		if (cin.fail()) {
			break;
		}
		setData_list(input);
	}

	sortList_fun();
	getData_list();
}

template<typename T> void SortType <T>::setData_list(T& data) {
	data_list.push_back(data);
}

template<typename T> void SortType<T>::getData_list() {
	for (auto& x : data_list) { cout << x << " "; }
}

template <typename T> void SortType<T>::sortList_fun() {
	int n = data_list.size();

	//bubble sort Algorithm for short list
	//use quicksort or merge sort for large list
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (data_list[j] > data_list[j + 1]) {
				T temp = data_list[j];
				data_list[j] = data_list[j + 1];
				data_list[j + 1] = temp;
			}
		}
	}
}

#endif // !SORTER_H