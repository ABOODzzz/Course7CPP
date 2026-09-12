
#include<iostream>
#include <iomanip>
#include<cstdlib>
#include <vector>
const int row = 3, colm = 3;
using namespace std;


void CalculateFibonaci(int array1[],int size) {
	for (int i = 2;i<size;i++) {
		array1[i] = array1[i-2] + array1[i-1];
	}
}
void PrintArray(int array1[],int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(3) << array1[i] << "\t";
	}
}

int main() {
	const int size = 10;
	int array1[size] = {1,1};
	
	CalculateFibonaci(array1,size);
	PrintArray(array1,size);

	
	system("pause>0");
}
