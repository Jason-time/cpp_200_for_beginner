#include <iostream>
#include<ctime>

using namespace std;

int main(int argc, char* argv[]) {
	srand(static_cast<unsigned int>(time(NULL)));

	for (int i = 0;i < 5; i++)
		cout << "난수 : " << rand() << endl;
	return 0;

}

// 049 - 난수 생성하기(srand,rand)