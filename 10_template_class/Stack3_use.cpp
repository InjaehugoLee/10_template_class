//10��-9.Stack3_use.cpp
//Stack class�� �� �緹�� ���� ����
#include <iostream>
#include "Stack3.cpp"
using namespace std;

void main() {
	//���� stack�� ����
	Stack <int> intStack;
	//stack�� ���� �߰��Ѵ�.
	intStack.Push(500);
	intStack.Push(1992);
	intStack.Push(33);
	intStack.Push(1024);

	//stack���� �ϳ��� �����鼭 ���� ����Ѵ�.
	while (!intStack.Empty())
		cout << intStack.Pop() << endl;
	system("pause");
}