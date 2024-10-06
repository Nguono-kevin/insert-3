/*C++ Program to Insert an element at a specific position in an Array*/
#include <iostream>
using namespace std;

/* Function to insert element at a specific position*/

void insertElement(int a[], int n, int x, int pos)
{

	for (int i = n - 1; i >= pos; i--)
		a[i + 1] = a[i];
	a[pos] = x;
}

// main function
int main()
{
	int a[15] = { 2, 4, 1, 8, 5 };
	int n = 5;
	cout << "\n Before insertion : " << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	int x = 10, pos = 2;

	//Here is  Function call
	insertElement(a, n, x, pos);
	n++;
	cout << "\n After insertion : " << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}
