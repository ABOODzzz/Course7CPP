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

short HowManyTimesNumShowUp(int array[row][colm],int num) {
	int LocalElement = num;
	int counter = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			if (array[i][j] == LocalElement) counter++;
			else continue;
		}
		
	}
	return counter;
}


void PrintResult(int arrayDiagonal[row][colm]) {
	int Num = ReadPosNum("enter num to see if it is in the matrix or not :");
	int counter =HowManyTimesNumShowUp(arrayDiagonal, Num);
	if (counter) printf("\n\nnumber %d count in matrix has appeared %d  times",Num,counter);
	else cout << "\n\nit is not in matrix";
}


int main() {
	srand((unsigned)time(NULL));
	int array1[row][colm] = { {1,3,3},{2,1,0},{0,5,1} };
	PrintMatrix(array1,"this is 3X3 matrix : ");
	PrintResult(array1);
	

	system("pause>0");
}
