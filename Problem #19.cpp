//in this code i've created 2 func to find the max and min in matrix
#include<iostream>
#include <iomanip>
#include<cstdlib>
#include <vector>
const int row = 3, colm = 3;
using namespace std;
int RandomNum(int from, int to) {
	return rand() % (to - from + 1) + from;

}

int ReadPosNum(string message) {
	int num = 1;
	do {
		cout << message; cin >> num; cout << endl;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			num = -1;
			cout << "\nInvalid input. Try again.\n"; cin >> num;
		}
		else if (num < 0) {
			cout << "\nNumber must be non-negative.\n";
		}
	} while (num < 0);

	return num;
}
void FillMatrixWithRandomNums(int array[3][3]) {
	int from = ReadPosNum("enter from : ");
	int to = ReadPosNum("enter to : ");
	if (from > to)swap(from, to);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			array[i][j] = RandomNum(from, to);
		}
	}
}
void PrintMatrix(int array[row][colm], string message) {
	cout << message << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}


int FindMaxInMatrix(int matrix[row][colm]) {
	int Max=matrix[0][0];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			
			if (matrix[i][j] > Max)Max=matrix[i][j];
		}
	}
	return Max;
}
int FindMinInMatrix(int matrix[row][colm]) {
	int min=matrix[0][0];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			
			if (matrix[i][j] < min)min = matrix[i][j];
		}
	}
	return min;
}




int main() {
	srand((unsigned)time(NULL));
	
	int matrix1[row][colm];
	cout << "\nthis is for matrix 1 : \n";
	FillMatrixWithRandomNums(matrix1);
	PrintMatrix(matrix1,"\n\nthis is 3X3 matrix 1 : \n\n");
	cout << "\n\nthe max num is : " << FindMaxInMatrix(matrix1);
	cout << "\n\nthe min num is : " << FindMinInMatrix(matrix1);
	
	
	

	system("pause>0");
}
