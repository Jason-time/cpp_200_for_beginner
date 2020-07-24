#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 1;

	cout << "x = " << x++ << endl;
	cout << "x = " << x++ << endl;
	cout << "x = " << ++x << endl;
	cout << "x = " << x-- << endl;
	cout << "x = " << x-- << endl;
	cout << "x = " << --x << endl;
	
	return 0;
}

// 023 - 증감 연산자 이해하기(++, --)
