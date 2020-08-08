#include <iostream>

using namespace std; 

void Func(int arg) {

	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

int main(int argc, char* argv[]) {

	int year = 10;

	Func(year);

	cout << "함수 종료 후 : " << year << endl;
	return 0;
}

// 074 - Call by Vallue 이해하기
