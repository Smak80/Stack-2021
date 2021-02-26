#pragma once

/// <summary>
/// Структура для хранения элементов стека
/// </summary>
template <typename T>
struct elem
{
	/// <summary>
	/// Сохраняемое в стеке значение
	/// </summary>
	T x;
	/// <summary>
	/// Указатель на следующий элемент в стеке
	/// </summary>
	elem* next = nullptr;
};

/// <summary>
/// Добавление элемента в стек
/// </summary>
/// <param name="stack">Указатель на вершину стека</param>
/// <param name="x">Размещаемый в стеке элемент</param>
template <typename T>
void push(elem<T>*& stack, T x);

/// <summary>
/// Удаляет из стека элемент и возвращает его значение
/// </summary>
/// <param name="stack">Указатель на вершину стека</param>
/// <param name="x">Возвращаемый элемент</param>
/// <returns>
/// true, если удалось изъять из стека элемент и
/// false в противном случае
/// </returns>
template <typename T>
bool pop(elem<T>*& stack, T& x);

/// <summary>
/// Возвращает значение элемента с вершины стека, но оставляет сам элемент в стеке
/// </summary>
/// <param name="stack">Указатель на вершину стека</param>
/// <param name="x">Возвращаемое значение элемента с вершины стека</param>
/// <returns>
/// true, если удалось получить из стека элемент и
/// false в противном случае
/// </returns>
template <typename T>
bool peek(const elem<T>* stack, T& x);

/// <summary>
/// Функция удаления стека из памяти 
/// </summary>
/// <param name="stack">Указатель на вершины удаляемого стека</param>
template <typename T>
void clear(elem<T>*& stack);

template <typename T>
void push(elem<T>*& top, T x)
{
	//Создаем элемент стека (размещаем в памяти)
	auto new_el = new elem<T>;
	new_el->x = x;
	//Изменяем указатель на следующий элемент стека
	new_el->next = top;
	//Корректируем указатель на вершину стека
	top = new_el;
}

template <typename T>
bool pop(elem<T>*& top, T& x)
{
	//Проверка стека на пустоту
	if (!top) return false;
	//Сохранение значения элемента стека
	x = top->x;
	//Сохранение указателя на текущую вершину во временной переменной
	auto old_el = top;
	//Изменение вершины стека
	top = top->next;
	//Очищаем память из-под удаляемого элемента
	delete old_el;
	return true;
}

template <typename T>
bool peek(const elem<T>* top, T& x)
{
	//Проверка стека на пустоту
	if (!top) return false;
	//Сохранение значения элемента стека
	x = top->x;	
	return true;
}

template <typename T>
void clear(elem<T>*& top)
{
	T x;
	while (top) pop(top, x);
}