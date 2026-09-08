//in this code hive created a function  to multiply 2 matrices and store it in another matrix
#include<iostream>
#include <iomanip>
#include<cstdlib>

const int row = 3,colm=3;
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
			cout << "\n\nre_entere pos num : "; cin >> num;
		}
		if (num < 0) {
			cout << "\nNumber must be non-negative.\n";
		}
	} while (num < 0);

	return num;
}
void FillArrayWithRandomNums(int array[3][3]) {
	int from = ReadPosNum("enter from : ");
	int to = ReadPosNum("enter to : ");
	if (from > to)swap(from, to);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			array[i][j] = RandomNum(from, to);
		}
	}
}

void PrintMatrix(int array[3][3],string message) {
	cout <<message << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}

void Multiply_2_Matrices(int array1[row][colm],int array2[row][colm],int array3[row][colm]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			array3[i][j] = array1[i][j] * array2[i][j];
		}
	}
}


int main() {
	srand((unsigned)time(NULL));
	
	int array1[row][colm],array2[row][colm];
	cout << "for array1 :\n\n";
	FillArrayWithRandomNums(array1); cout << endl;
	cout << "for array2 :\n\n";
	FillArrayWithRandomNums(array2);
	PrintMatrix(array1,"\n\nthe following is 3X3 matrix : \n");
	PrintMatrix(array2, "\n\nthe following is 3X3 matrix : \n");
	int array3[row][colm];
	Multiply_2_Matrices(array1,array2,array3);
	PrintMatrix(array3,"\n\nthe following is the result of Multiply_2_Matrices :\n" );

	
system("pause>0");
}
