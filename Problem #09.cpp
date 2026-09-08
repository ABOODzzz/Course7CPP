//in this code i've createrd a function to print part of matrix 
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
void FillArrayWithRandomNums(int array[row][colm]) {
	int from = ReadPosNum("enter from : ");
	int to = ReadPosNum("enter to : ");
	if (from > to)swap(from, to);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			array[i][j] = RandomNum(from, to);
		}
	}
}




void PrintMatrix(int array[row][colm],string message) {
	cout <<message << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}
void PrintPartOfMatrix(int array[row][colm], int localRow,int localColm,string message) {
	cout << message << endl;
	if (localRow > localColm) {
		for (int i = 0; i < row; i++) {
			cout << setw(4) << array[localRow][i];
		}
	}
	else {
		for (int i = 0; i < colm; i++) {
			cout << setw(4) << array[i][localColm];
		}
	}
}

short Middle(int num) {
	return ceil(num / 2.f);
}

int main() {
	srand((unsigned)time(NULL));
	
	int array1[row][colm];
	FillArrayWithRandomNums(array1);
	PrintMatrix(array1,"\n\nthe following is 3X3 matix :\n\n");
	int M = Middle(row)-1;
	PrintPartOfMatrix(array1,M,0,"\n\nthis is the middle row : \n");
	M = Middle(colm)-1;
	PrintPartOfMatrix(array1, 0, M, "\n\nthis is the middle row : \n");
	
system("pause>0");
}
