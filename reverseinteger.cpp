#include<iostream>
using namespace std;
int main()
{
	int num, revnum = 0, rem;
	cout << "Enter Number" << endl;
	cin >> num;
	while( num != 0)
	{
		rem = num % 10;
		num = num / 10;
		revnum = (revnum * 10) + rem;
	}
	cout << "Reverse Number: \n" << revnum;
	return 0;
}
