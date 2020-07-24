#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

	int data[10] = { 5,19,76,3,10, 89,54,43,2,17 };

	for (int i = 0;i < 10;i++) {
		if (data[i] % 2 == 0)
			cout << i << " : " << data[i] << "는 짝수 입니다." << endl;
		else
			cout << i << " : " << data[i] << "는 홀수입니다." << endl;
	}
	return 0;
}

// 036 - 순환문으로 홀수, 짝수 찾기 (for)
