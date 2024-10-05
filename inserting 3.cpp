#include<iostream>
using namespace std;
// Function to insert a key into an array
int insertSorted(int a[], int n, int key, int capacity)
{
	if (n >= capacity)
		return n;
	a[n] = key;
	return (n + 1);
}
int main()
{
	int a[20] = {12, 16, 20, 40, 50, 70};

	int capacity = sizeof(a) / sizeof(a[0]);

	int n = 6;
	int key = 26;

	cout << "  Before Insertion: " << endl;

	// Inserting the key into the array
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	n = insertSorted(a, n, key, capacity);

	cout << "\n After Insertion:\n ";

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;

}
