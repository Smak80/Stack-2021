#include "stack.h"
#include <iostream>
using namespace std;

void show_stack(elem*& stack)
{
	while (stack)
	{
		int val;
		if (pop(stack, val))
			cout << val << " ";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	elem* stack_top = nullptr;
	push(stack_top, 1);
	push(stack_top, 2);
	push(stack_top, 3);
	push(stack_top, 4);
	push(stack_top, 5);
	show_stack(stack_top);
	system("pause");
}