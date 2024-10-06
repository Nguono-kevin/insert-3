#include<iostream>
using namespace std;
int stack_arr[5];
int top = -1;
void push(int data)
{
	top+= 1;
	for(int i = top; i >= 0; i--)
 
		stack_arr[i] = stack_arr[i - 1];
	stack_arr[0] = data;


}
int pop()
{
	int value;
	value = stack_arr[0];
	for(int i = 0; i < top; i++)
		stack_arr[i] = stack_arr[i + 1];

	top -= 1;
	return value;
}
void print()
{
	if (top == -1 )
	{
		cout << "stack underflow \n";

	}
	else
	{
		cout << "stack overflow \n";
	}
	for(int i = 0; i <= top; i++)
	{
		cout << stack_arr[i];

	}

}
int main()
{
	int data;

	push(7);
	push(6);
	push(5);
	push(4);
	data = pop();
	data = pop();
	push(3);
	push(2);
	push(1);
	data = pop();
	print();

	return 0;
}
