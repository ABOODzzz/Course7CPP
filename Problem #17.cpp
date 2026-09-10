//in this code ive created a function to find out if the num that user search for in the matrix or not 
#include<iostream>
#include <iomanip>

const int row = 3, colm = 3;
using namespace std;
int ReadPosNum(string message) {
	int num = 1;
	do {
		cout << message; cin >> num; cout << endl;
	} while (num < 0);
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\n\nre_entere pos num : "; cin >> num;
	}
	return num;
}
void PrintMatrix(int array[row][colm], string message) {
	cout << message << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}


bool IsTheNumHere(int matrix[row][colm]) {
	int Num = ReadPosNum("\n\nenter pos num here to check if it is in the matrix or not : ");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			if (matrix[i][j] == Num)return true;
		}
	}
	return 0;
}

void PrintResult(int matrix[row][colm]) {
	if (IsTheNumHere(matrix))cout << "\n\nyes  it is inside matrix\n\n";
	else cout << "\n\nno it is not there\n\n";
}

int main() {
	srand((unsigned)time(NULL));
	int array1[row][colm] = { {10,10,10},{0,0,2},{0,0,0} };
	PrintMatrix(array1,"this is 3X3 matrix : ");
	PrintResult(array1);
	

	system("pause>0");
}
