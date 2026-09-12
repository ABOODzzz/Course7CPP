//code 1 I used vector to check if this matrix is palindrome or not it is complicated and there is anotheer way and better (code 2)in the same time but i would practice vector concept 
//code 3 is the best solution 
#include<iostream>
#include <iomanip>
#include<cstdlib>
#include <vector>
const int row = 3, colm = 3;
using namespace std;


void PrintMatrix(int array[row][colm], string message) {
	cout << message << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}

void FillVector(vector <int> &vElements,int matrix[row][colm],int localRow) {
	if (!vElements.empty())vElements.clear();
	for (int i = 0;i<colm;i++) {
		vElements.push_back(matrix[localRow][i]);
}
}

bool IsPalindrome(vector <int>&vElements,int matrix[row][colm],int localRow) {
	for (int j = 0; j < colm; j++) {
		if (vElements.back() != matrix[localRow][j])return false;
		vElements.pop_back();
	}
	return true;
}

bool TotalIsPalindrome(vector <int>&vElements,int matrix[row][colm]) {
	
	for (int localRow = 0;localRow<row;localRow++) {
		FillVector(vElements,matrix,localRow);
		if (!IsPalindrome(vElements, matrix, localRow))return false;
	}
	return true;
}
void PrintIsItPalindromeOrNot(vector <int>&vElements,int matrix[row][colm]) {
	if (TotalIsPalindrome(vElements, matrix))cout << "\n\nYes,it is palindrome \n\n";
	else cout << "\n\nNo, it isn't palindrome\n\n";
}



int main() {

	vector <int>vElemnts;
	int matrix1[row][colm]{ {1,2,1},{5,5,5},{4,2,4} }, matrix2[row][colm]{ {1,2,2},{5,5,5},{4,2,4} };;
	cout << "\nthis is for matrix 1 : \n";
	PrintMatrix(matrix2,"\n\nthis is 3X3 matrix 1 : \n\n");
	PrintIsItPalindromeOrNot(vElemnts,matrix2);
	
	
	

	system("pause>0");
}

/*
Code 3 
#include<iostream>
#include <iomanip>
#include<cstdlib>
#include <vector>
const int row = 3, colm = 3;
using namespace std;


void PrintMatrix(int array[row][colm], string message) {
	cout << message << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}


bool IsPalindrome(int matrix[row][colm]) {
	for (int i = 0;i<row;i++) {
		for (int j = 0; j < colm/2; j++) {
			if (matrix[i][j] != matrix[i][colm - 1 - j]) return false;

		}
	}
	return true;
}


void PrintIsItPalindromeOrNot(int matrix[row][colm]) {
	if (IsPalindrome( matrix))cout << "\n\nYes,it is palindrome \n\n";
	else cout << "\n\nNo, it isn't palindrome\n\n";
}



int main() {

	
	int matrix1[row][colm]{ {1,2,1},{5,5,5},{4,2,4} }, matrix2[row][colm]{ {1,2,2},{5,5,5},{4,2,4} };;
	cout << "\nthis is for matrix 1 : \n";
	PrintMatrix(matrix1,"\n\nthis is 3X3 matrix 1 : \n\n");
	PrintIsItPalindromeOrNot(matrix2);
	
	
	

	system("pause>0");
}
*/

/*
CODE 2
#include<iostream>
#include <iomanip>
#include<cstdlib>
#include <vector>
const int row = 3, colm = 3;
using namespace std;


void PrintMatrix(int array[row][colm], string message) {
	cout << message << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < colm; j++) {
			cout << setw(4) << array[i][j] << "     ";
		}cout << endl;
	}
}


bool IsPalindrome(int matrix[row][colm],int localRow) {
	int localColm = 2;
	for (int j = 0; j < colm; j++) {
		if (matrix[localRow][localColm] != matrix[localRow][j])return false;
		localColm--;
	}
	return true;
}

bool TotalIsPalindrome(int matrix[row][colm]) {
	
	for (int localRow = 0;localRow<row;localRow++) {
		
		if (!IsPalindrome(matrix, localRow))return false;
	}
	return true;
}
void PrintIsItPalindromeOrNot(int matrix[row][colm]) {
	if (TotalIsPalindrome( matrix))cout << "\n\nYes,it is palindrome \n\n";
	else cout << "\n\nNo, it isn't palindrome\n\n";
}



int main() {

	
	int matrix1[row][colm]{ {1,2,1},{5,5,5},{4,2,4} }, matrix2[row][colm]{ {1,2,2},{5,5,5},{4,2,4} };;
	cout << "\nthis is for matrix 1 : \n";
	PrintMatrix(matrix1,"\n\nthis is 3X3 matrix 1 : \n\n");
	PrintIsItPalindromeOrNot(matrix1);
	
	
	

	system("pause>0");
}

*/
