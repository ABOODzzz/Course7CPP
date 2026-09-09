//code 1 : in this code ive created a function to detrimine if the matrix is a diagonal or not
#include<iostream>
#include <iomanip>

const int row = 3, colm = 3;
using namespace std;
void PrintMatrix(int array[row][colm], string message) {
	cout << message << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}

bool IsDiagonalMatrix(int array[row][colm]) {
	int local = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			if (i == j && (array[i][j] != 1))return false;
			if (i != j && (array[i][j] != 0))return false;
		
		}

	}
	return true;
}
void PrintResult(int arrayDiagonal[row][colm]) {
if (IsDiagonalMatrix(arrayDiagonal)) cout << "\n\nit is  diagonal";
	else cout << "\n\nit is not diagonal";
}


int main() {
	srand((unsigned)time(NULL));
	int arrayDiagonal[row][colm] = { {1,0,0},{0,1,0},{0,0,1} };
	int array1[row][colm] = { {1,3,3},{2,1,0},{0,5,1} };
	PrintMatrix(arrayDiagonal,"this is 3X3 matrix : ");
	PrintResult(arrayDiagonal);
	

	system("pause>0");
}

/*code 2
#include<iostream>
#include <iomanip>

const int row = 3, colm = 3;
using namespace std;
void PrintMatrix(int array[row][colm], string message) {
	cout << message << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}

bool IsDiagonalMatrix(int array[row][colm]) {
	int local = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			switch (i) {
			case 0: {
				if (j ==1 && (array[i][j] != 0))return false;
				if (j == 2 && (array[i][j] != 0))return false;
				else continue;
			}
			case 1: {
				if (j == 0 && (array[i][j] != 0))return false;
				if (j == 2 && (array[i][j] != 0))return false;
				else continue;
			}
			case 2: {
				if (j == 0 && (array[i][j] != 0))return false;
				if (j == 1 && (array[i][j] != 0))return false;
				else continue;
			}
			}
		}
	}
	return true;
}
void PrintResult(int arrayDiagonal[row][colm]) {
if (IsDiagonalMatrix(arrayDiagonal)) cout << "\n\nit is  diagonal";
	else cout << "\n\nit is not diagonal";
}


int main() {
	srand((unsigned)time(NULL));
	int arrayDiagonal[row][colm] = { {1,0,0},{0,1,0},{0,0,1} };
	int array1[row][colm] = { {1,3,3},{2,1,0},{0,5,1} };
	PrintMatrix(arrayDiagonal,"this is 3X3 matrix : ");
	PrintResult(arrayDiagonal);
	

	system("pause>0");
}*/
