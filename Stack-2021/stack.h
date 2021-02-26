#pragma once

/// <summary>
/// ��������� ��� �������� ��������� �����
/// </summary>
template <typename T>
struct elem
{
	/// <summary>
	/// ����������� � ����� ��������
	/// </summary>
	T x;
	/// <summary>
	/// ��������� �� ��������� ������� � �����
	/// </summary>
	elem* next = nullptr;
};

/// <summary>
/// ���������� �������� � ����
/// </summary>
/// <param name="stack">��������� �� ������� �����</param>
/// <param name="x">����������� � ����� �������</param>
template <typename T>
void push(elem<T>*& stack, T x);

/// <summary>
/// ������� �� ����� ������� � ���������� ��� ��������
/// </summary>
/// <param name="stack">��������� �� ������� �����</param>
/// <param name="x">������������ �������</param>
/// <returns>
/// true, ���� ������� ������ �� ����� ������� �
/// false � ��������� ������
/// </returns>
template <typename T>
bool pop(elem<T>*& stack, T& x);

/// <summary>
/// ���������� �������� �������� � ������� �����, �� ��������� ��� ������� � �����
/// </summary>
/// <param name="stack">��������� �� ������� �����</param>
/// <param name="x">������������ �������� �������� � ������� �����</param>
/// <returns>
/// true, ���� ������� �������� �� ����� ������� �
/// false � ��������� ������
/// </returns>
template <typename T>
bool peek(const elem<T>* stack, T& x);

/// <summary>
/// ������� �������� ����� �� ������ 
/// </summary>
/// <param name="stack">��������� �� ������� ���������� �����</param>
template <typename T>
void clear(elem<T>*& stack);

template <typename T>
void push(elem<T>*& top, T x)
{
	//������� ������� ����� (��������� � ������)
	auto new_el = new elem<T>;
	new_el->x = x;
	//�������� ��������� �� ��������� ������� �����
	new_el->next = top;
	//������������ ��������� �� ������� �����
	top = new_el;
}

template <typename T>
bool pop(elem<T>*& top, T& x)
{
	//�������� ����� �� �������
	if (!top) return false;
	//���������� �������� �������� �����
	x = top->x;
	//���������� ��������� �� ������� ������� �� ��������� ����������
	auto old_el = top;
	//��������� ������� �����
	top = top->next;
	//������� ������ ��-��� ���������� ��������
	delete old_el;
	return true;
}

template <typename T>
bool peek(const elem<T>* top, T& x)
{
	//�������� ����� �� �������
	if (!top) return false;
	//���������� �������� �������� �����
	x = top->x;	
	return true;
}

template <typename T>
void clear(elem<T>*& top)
{
	T x;
	while (top) pop(top, x);
}