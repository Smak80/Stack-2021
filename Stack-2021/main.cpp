#include "stack.h"
#include <iostream>
using namespace std;

template <typename T>
void show_stack(elem<T>*& stack)
{
	while (stack)
	{
		T val;
		if (pop(stack, val))
			cout << val << " ";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	elem<int>* stack_top = nullptr;
	push(stack_top, 1);
	push(stack_top, 2);
	push(stack_top, 3);
	push(stack_top, 4);
	push(stack_top, 5);
	show_stack(stack_top);

	elem<double>* stack2_top = nullptr;
	push(stack2_top, 1.5);
	push(stack2_top, 2.32);
	push(stack2_top, 3.12);
	push(stack2_top, 4.59);
	push(stack2_top, 5.43);
	show_stack(stack2_top);

	elem<const char*>* stack3_top = nullptr;
	push(stack3_top, "ÝÒÎÒ");
	push(stack3_top, "ÑÒÅÊ");
	push(stack3_top, "ÑÎÄÅÐÆÈÒ");
	push(stack3_top, "ÑÒÐÎÊÈ");
	show_stack(stack3_top);

	system("pause");
}