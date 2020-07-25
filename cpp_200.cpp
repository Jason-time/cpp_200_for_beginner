#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int number = 0;

	while (number <10)
	{
		number++;
		if (number % 3 == 0)
			continue;
		else
			cout << "number 값 : " << number << endl;
	}
	return 0;
}

// 038 - 조건 순환문 이해하기1.(while~continue~break)
