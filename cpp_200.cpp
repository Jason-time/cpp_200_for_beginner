#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

	int number1 = 10;
	int number2 = 20;

	int const* ptr1;
	ptr1 = &number1;
	//ptr1 = number1;
	ptr1 = &number2;

	int* const ptr2 = &number1;
	*ptr2 = number2;
	//*ptr2 = &number2;

	return 0;
}

// 078 - const 포인터 이해하기
