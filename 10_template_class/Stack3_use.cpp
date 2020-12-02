//10장-9.Stack3_use.cpp
//Stack class의 한 사레를 만든 예제
#include <iostream>
#include "Stack3.cpp"
using namespace std;

void main() {
	//정수 stack의 정의
	Stack <int> intStack;
	//stack에 값을 추가한다.
	intStack.Push(500);
	intStack.Push(1992);
	intStack.Push(33);
	intStack.Push(1024);

	//stack에서 하나씩 꺼내면서 값을 출력한다.
	while (!intStack.Empty())
		cout << intStack.Pop() << endl;
	system("pause");
}