#include <iostream>

using namespace std;

int x = 10;

int Func1() {
	int y = x + 10;
	return y;
}

int Func2() {
	int x = 100;
	return x;
}

int main(int argc, char* argv[])
{
	cout << "y = " << Func1() << endl;
	cout << "x = " << Func2() << endl;
	cout << "x = " << x << endl;

	return 0;
}

// 015 - 스코핑룰 이해하기 ( {} )
