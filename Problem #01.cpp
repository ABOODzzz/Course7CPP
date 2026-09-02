//My code :
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int RandomNum(int from,int to) {
	int randomNum = rand() % (to - from + 1) + from;
	return randomNum;
}

int ReadPosNum(string message) {
	int num = 1;
	do {
		cout << message; cin >> num; cout << endl;
	} while (num<0);
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "\n\nre_entere pos num : "; cin >> num;
	}
	return num;
}
void FillArrayWithRandomNums(int array[3][3],short colm,short row) {
	int from = ReadPosNum("enter from : ");
	int to = ReadPosNum("enter to : ");
	for (int i = 0;i<row;i++) {
		for (int j = 0;j<colm;j++) {
			array[i][j] = RandomNum(from,to);
		}
	}
}
void PrintArrayRandomNums(int array[3][3],short colm,short row) {
	cout << "\n\nthw following is a 3*3 random matrix:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout <<setw(4) <<array[i][j]<<"     ";
		}cout << endl;
	}
}



int main() {
	srand((unsigned)time(NULL));
	int array[3][3];
	FillArrayWithRandomNums(array,3,3);
	PrintArrayRandomNums(array,3,3);
	

}
//Dr code :
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
//Function to generate a random number
int randNum = rand() % (To - From + 1) + From;
return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short
Cols)
{
for (short i = 0; i < Rows; i++)
{
for (short j = 0; j < Cols; j++)
{
arr[i][j] = RandomNumber(1, 100);
}
}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
for (short i = 0; i < Rows; i++)
{
for (short j = 0; j < Cols; j++)
{
cout <<setw(3) << arr[i][j] << " ";
}
cout << "\n";
}
}
int main()
{
//Seeds the random number generator in C++, called only once
srand((unsigned)time(NULL));
int arr[3][3];
FillMatrixWithRandomNumbers(arr, 3, 3);
cout << "\n The following is a 3x3 random matrix:\n";
PrintMatrix(arr, 3, 3);
system("pause>0");
}
