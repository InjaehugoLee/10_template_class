//10장-10. Stack3.cpp
//Stack class의 3개 template instance(instance) 예
#include <iostream>
#include <iomanip>
#include "Stack3.cpp"
using namespace std;
void main() {
	//다른 정밀도를 갖는 두 개의 실수 stack과 하나의 정수 stack을 정의
	Stack <int> intStack;
	Stack <float > floatStack;
	Stack <double> doubleStack;
	//세 개의 stack에 같은 값을 추가한다
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
	//stack에서하나씩 꺼내면서 요소를 출력한다
	cout << endl << "Contents of three stacks having a different data type" << endl << "(the same values have been inserted)" << endl;
	while (!intStack.Empty())
		cout << "int: " << setw(8) << intStack.Pop()
		<< "\t float : " << setw(12) << floatStack.Pop()
		<< "\t double : " << setw(12)
		<< doubleStack.Pop()
		<< endl;

}