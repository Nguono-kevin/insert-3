#include<iostream>
using namespace std;
int main()
{
	int k, num, digit, rev = 0;
	cout << "Enter a number" << endl;
	cin >> num;
	k = num;
	while(num != 0)
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	}
	if(k == rev)
	{
		cout << "palindrome" << endl;
	}
	else
	{
		cout << "not palindrome" << endl;
	}
	return 0;
}
