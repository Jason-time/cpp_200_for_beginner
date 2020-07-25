#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int num = 0;
	cin >> num;
	int offset = num;

	for (int i= 1, j = 0;i <= offset;i++, j = 0) {
		for (int k = 1;k <= offset - i;k++)
			cout << "  ";
		while (j != 2 * i - 1) {
			cout << "* ";
			j++;
		}
		cout << endl;
	}
	return 0;
}

// 042 - 반복문을 이용하여 피라미드 출력하기