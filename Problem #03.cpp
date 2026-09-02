//it is the same in prop2 the deff is i put the sum ofeach row at 3x3  1 dimention array to store it
 #include<iostream>
#include<cstdlib>
#include<iomanip>
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
void PrintArrayRandomNums(int array[3][3]) {
	cout << "\n\nthw following is a 3*3 random matrix:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}

int SumOfArray(int array[3][3],int row) {
	int sum = 0;
	
		for (int j = 0;j<colm;j++) {
			sum += array[row][j];
		}
	
	return sum;
}


void ArraySumArray(int array[3][3],int array1[row]) {
	
	
	int localRow = 0;
	for (int i = 0;i<row;i++) {
		array1[i] = SumOfArray(array, localRow);
		localRow++;
	}
}

void PrintArray(int array1[row]) {
	for (int i = 0;i<row;i++) {
		cout << "\nthe sum of row " << i + 1 << " is :" << array1[i] << endl;
	}
}

int main() {
	srand((unsigned)time(NULL));
	
	int array[3][3];
	FillArrayWithRandomNums(array);
	PrintArrayRandomNums(array);
	int array1[row];
	ArraySumArray(array,array1);
	PrintArray(array1);
}
