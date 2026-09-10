//code 1: this code is helping to find out if the matrix is sparce matrix or nor 
//code 2 at the end 
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

void IsSparceMatrix(int array[row][colm],int &CounterZero,int &CounterNotZero) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			if (array[i][j] == 0) CounterZero++;
			else CounterNotZero++;
		}
		
	}
	
}


void PrintResult(int array1[row][colm]) {
	int CounterZero = 0, CounterNotZero = 0;
	IsSparceMatrix(array1,CounterZero,CounterNotZero);
	if (CounterZero > CounterNotZero) cout << "\n\nYes it is sparce matrix \n\n";
	else cout << "\n\nit is not sparce matrix\n\n";
}


int main() {
	srand((unsigned)time(NULL));
	int array1[row][colm] = { {0,0,0},{0,0,0},{0,0,0} };
	PrintMatrix(array1,"this is 3X3 matrix : ");
	PrintResult(array1);
	

	system("pause>0");
}
/*

*/
