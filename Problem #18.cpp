//in this code i compare 2 matrices and catch the numbers that intersected between them and it was nice using vectors and wow man :);
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


bool IsTheNumHere(int matrix[row][colm],int num) {
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			if (matrix[i][j] == num)return true;
		}
	}
	return false;
}

void FindHowManyInterseceted(vector<int>&vIntersected, int matrix1[row][colm], int matrix2[row][colm]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			if (IsTheNumHere(matrix2, matrix1[i][j])) vIntersected.push_back(matrix1[i][j]);
		}

	}
}

void PrintHowManyIntersectedNums(vector <int>&vIntersected) {
	if (vIntersected.empty())cout << "\n\nthere is not any intersected nums here :(\n\n";
	else {
		cout << "\n\nthese are the intersected nums :\n";
		for (int &intersected:vIntersected) {
			cout << intersected << "\t";
		}
		cout << endl;
	}
}


int main() {
	srand((unsigned)time(NULL));
	
	int matrix1[row][colm] ,matrix2[row][colm];
	cout << "\nthis is for matrix 1 : \n";
	FillMatrixWithRandomNums(matrix1);
	cout << "\nthis is for matrix 2 : \n";
	FillMatrixWithRandomNums(matrix2);
	PrintMatrix(matrix1,"\n\nthis is 3X3 matrix 1 : \n\n");
	PrintMatrix(matrix2,"\n\nthis is matrix 2 : \n\n");
	vector <int> vIntersected;
	FindHowManyInterseceted(vIntersected,matrix1,matrix2);
	PrintHowManyIntersectedNums(vIntersected);
	

	system("pause>0");
}
