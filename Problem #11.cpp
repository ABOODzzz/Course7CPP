//in this code i made a function to compare 2 matrices are they equal or not code 1 and code 2 
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

int SumOfMatrix(int array[row][colm]) {
	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			sum += array[i][j];

		}
	}
	return sum;
}

bool AreTheyEqualed(int array1[row][colm],int array2[row][colm]) {
	return (SumOfMatrix(array1) == SumOfMatrix(array2));
}

int main() {
	srand((unsigned)time(NULL));
	
	int array1[row][colm],array2[row][colm];
	FillArrayWithRandomNums(array1);

	PrintMatrix(array1,"\n\nthe following is 3X3 matix :\n\n");
	FillArrayWithRandomNums(array2);

	PrintMatrix(array2, "\n\nthe following is 3X3 matix :\n\n");
	
	if (AreTheyEqualed(array1,array2))cout << "\nthey are  equal ";
	else cout << "\n\nthey are not equal";
	
system("pause>0");
}



/* code 2 :
#include<iostream>
#include <iomanip>
#include<cstdlib>

const int row = 3,colm=3;
using namespace std;
enum enEqualOrNot{equal=1,NotEqual=2};
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
enEqualOrNot AreTheyEqual(int array1[row][colm],int array2[row][colm]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			if (array1[i][j] != array2[i][j])return enEqualOrNot::NotEqual;
			
		}
	}
	return enEqualOrNot::equal;
}
void PrintResult(enEqualOrNot result) {
	if (result == enEqualOrNot::equal)cout << "\n\nYes, they are equaled.\n";
	else cout << "\n\nthey are not equaled.\n\n";
}
int SumOfMatrix(int array[row][colm]) {
	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			sum += array[i][j];

		}
	}
	return sum;
}

int main() {
	srand((unsigned)time(NULL));
	
	int array1[row][colm],array2[row][colm];
	FillArrayWithRandomNums(array1);

	PrintMatrix(array1,"\n\nthe following is 3X3 matix :\n\n");
	FillArrayWithRandomNums(array2);

	PrintMatrix(array2, "\n\nthe following is 3X3 matix :\n\n");
	PrintResult(AreTheyEqual(array1,array2));
	
system("pause>0");
}

*/
