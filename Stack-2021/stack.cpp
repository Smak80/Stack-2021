#include "stack.h"

void push(elem*& top, int x)
{
	//������� ������� ����� (��������� � ������)
	elem* new_el = new elem;
	new_el->x = x;
	//�������� ��������� �� ��������� ������� �����
	new_el->next = top;
	//������������ ��������� �� ������� �����
	top = new_el;
}

bool pop(elem*& top, int& x)
{
	//�������� ����� �� �������
	if (!top) return false;
	//���������� �������� �������� �����
	x = top->x;
	//���������� ��������� �� ������� ������� �� ��������� ����������
	elem* old_el = top;
	//��������� ������� �����
	top = top->next;
	//������� ������ ��-��� ���������� ��������
	delete old_el;
	return true;
}

bool peek(const elem* top, int& x)
{
	//�������� ����� �� �������
	if (!top) return false;
	//���������� �������� �������� �����
	x = top->x;	
	return true;
}

void clear(elem*& top)
{
	int x;
	while (top) pop(top, x);
}