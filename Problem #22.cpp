#include<iostream>

using namespace std;

void PrintFibonacci(int number,int prev1=1,int prev2=0,int febNum=1) {
	if (number > 0) {
		cout << febNum << "\t";
		febNum = prev1 + prev2;
		prev2 = prev1;
		prev1 = febNum;
		PrintFibonacci(number-1,prev1,prev2,febNum);
	}
	else return;
}

int main() {

	
	PrintFibonacci(10);

	
	system("pause>0");
}
