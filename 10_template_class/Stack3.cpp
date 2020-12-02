//10��-8.Stack.cpp
//template class Stack�� member �Լ� ����
#include "10_7_Stack3.h"
//template�� ���� �ܺ� member �Լ� ������ Ư���� ������ �ָ��Ѵ�
template <class T>
void Stack <T> ::Push(T item) {
	data[nElements] = item;
	nElements++;
}

template <class T>
T Stack <T> ::Pop() {
	nElements--;
	return data[nElements];
}

template <class T>
int Stack <T> ::Number() {
	return nElements;
}

template <class T>
int Stack <T> ::Empty() {
	return (nElements == 0);
}