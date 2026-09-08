//Ive created a function to return the sum of Matrix 

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
int SumOfMatix(int array[row][colm]) {
	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			sum += array[i][j];
		}cout << endl;
	}
	return sum;
}

int main() {
	srand((unsigned)time(NULL));
	
	int array1[row][colm];
	FillArrayWithRandomNums(array1);
	PrintMatrix(array1,"\n\nthe following is 3X3 matix :\n\n");
	cout << "\n\nthe sum of Matrix is : " << SumOfMatix(array1);
	
system("pause>0");
}
