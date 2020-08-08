#include <iostream>

using namespace std;

enum Status {

	normal = 0,
	abnormal,
	disconnect =100,
	close
};

int main(int argc, char* argv[]) {

	Status number = close;

	if (number == Status::normal)
		cout << "Status : normal" << endl;
	else if (number == abnormal)
		cout << "Status : abnormal" << endl;
	else if (number == 101)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	return 0;
}

// 079 - enum 이해하기
