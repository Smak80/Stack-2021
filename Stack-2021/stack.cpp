#include "stack.h"

void push(elem*& top, int x)
{
	//Создаем элемент стека (размещаем в памяти)
	elem* new_el = new elem;
	new_el->x = x;
	//Изменяем указатель на следующий элемент стека
	new_el->next = top;
	//Корректируем указатель на вершину стека
	top = new_el;
}

bool pop(elem*& top, int& x)
{
	//Проверка стека на пустоту
	if (!top) return false;
	//Сохранение значения элемента стека
	x = top->x;
	//Сохранение указателя на текущую вершину во временной переменной
	elem* old_el = top;
	//Изменение вершины стека
	top = top->next;
	//Очищаем память из-под удаляемого элемента
	delete old_el;
	return true;
}

bool peek(const elem* top, int& x)
{
	//Проверка стека на пустоту
	if (!top) return false;
	//Сохранение значения элемента стека
	x = top->x;	
	return true;
}

void clear(elem*& top)
{
	int x;
	while (top) pop(top, x);
}