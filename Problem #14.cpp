//in this code ive created a function to check if the matrix is a scalar or not 
//scalar matrix is when each one in diagonal matix is equal array[0][0]==array[1][1]==array[2][2]

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
	int LocalElement = array[0][0];

	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			if (i == j && array[i][j] != LocalElement)return false;
			if (i != j && (array[i][j] != 0))return false;
		
		}

	}
	return true;
}
void PrintResult(int arrayDiagonal[row][colm]) {
if (IsDiagonalMatrix(arrayDiagonal)) cout << "\n\nit is  Scalar";
	else cout << "\n\nit is not Scalar";
}


int main() {
	srand((unsigned)time(NULL));
	int arrayScalarl[row][colm] = { {1,0,0},{0,3,0},{0,0,3} };
	int array1[row][colm] = { {1,3,3},{2,1,0},{0,5,1} };
	PrintMatrix(arrayScalarl,"this is 3X3 matrix : ");
	PrintResult(arrayScalarl);
	

	system("pause>0");
}
