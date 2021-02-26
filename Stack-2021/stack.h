#pragma once

/// <summary>
/// ��������� ��� �������� ��������� �����
/// </summary>

struct elem
{
	/// <summary>
	/// ����������� � ����� ��������
	/// </summary>
	int x;
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
void push(elem*& stack, int x);

/// <summary>
/// ������� �� ����� ������� � ���������� ��� ��������
/// </summary>
/// <param name="stack">��������� �� ������� �����</param>
/// <param name="x">������������ �������</param>
/// <returns>
/// true, ���� ������� ������ �� ����� ������� �
/// false � ��������� ������
/// </returns>
bool pop(elem*& stack, int& x);

/// <summary>
/// ���������� �������� �������� � ������� �����, �� ��������� ��� ������� � �����
/// </summary>
/// <param name="stack">��������� �� ������� �����</param>
/// <param name="x">������������ �������� �������� � ������� �����</param>
/// <returns>
/// true, ���� ������� �������� �� ����� ������� �
/// false � ��������� ������
/// </returns>
bool peek(const elem* stack, int& x);

/// <summary>
/// ������� �������� ����� �� ������ 
/// </summary>
/// <param name="stack">��������� �� ������� ���������� �����</param>
void clear(elem*& stack);

