//10��-10. Stack3.cpp
//Stack class�� 3�� template instance(instance) ��
#include <iostream>
#include <iomanip>
#include "Stack3.cpp"
using namespace std;
void main() {
	//�ٸ� ���е��� ���� �� ���� �Ǽ� stack�� �ϳ��� ���� stack�� ����
	Stack <int> intStack;
	Stack <float > floatStack;
	Stack <double> doubleStack;
	//�� ���� stack�� ���� ���� �߰��Ѵ�
	intStack.Push(500.01);
	floatStack.Push(500.01);
	doubleStack.Push(500.01);
	intStack.Push(1992);
	floatStack.Push(1992);
	doubleStack.Push(1992);
	intStack.Push(33.333333333333333);
	floatStack.Push(33.333333333333333);
	doubleStack.Push(33.333333333333333);
	intStack.Push(1024.1024);
	floatStack.Push(1024.1024);
	doubleStack.Push(1024.1024);
	//stack�����ϳ��� �����鼭 ��Ҹ� ����Ѵ�
	cout << endl << "Contents of three stacks having a different data type" << endl << "(the same values have been inserted)" << endl;
	while (!intStack.Empty())
		cout << "int: " << setw(8) << intStack.Pop()
		<< "\t float : " << setw(12) << floatStack.Pop()
		<< "\t double : " << setw(12)
		<< doubleStack.Pop()
		<< endl;

}