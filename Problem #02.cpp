/*this program can sum each row and print the result of it  

*/
#include<iostream>
#include<cstdlib>
#include<iomanip>
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
void FillArrayWithRandomNums(int array[3][3], short colm, short row) {
	int from = ReadPosNum("enter from : ");
	int to = ReadPosNum("enter to : ");
	if (from > to)swap(from, to);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			array[i][j] = RandomNum(from, to);
		}
	}
}
void PrintArrayRandomNums(int array[3][3], short colm, short row) {
	cout << "\n\nthw following is a 3*3 random matrix:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}

int SumOfArray(int array[3][3],int colm,int row) {
	int sum = 0;
	
		for (int j = 0;j<colm;j++) {
			sum += array[row][j];
		}
	
	return sum;
}


void PrintSumArray(int array[3][3],int colm,int row) {
	cout << "\nthis is the sum of each row :" << endl;
	int localRow = 0;
	for (int i = 0;i<row;i++) {
		cout << "the sum of row " << i + 1 << " is : " << SumOfArray(array, colm, localRow) << endl;
		localRow++;
	}
}


int main() {
	srand((unsigned)time(NULL));
	
	int array[3][3];
	FillArrayWithRandomNums(array, 3, 3);
	PrintArrayRandomNums(array, 3, 3);
	PrintSumArray(array,3,3);

}
