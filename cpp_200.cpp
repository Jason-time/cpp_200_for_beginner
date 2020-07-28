#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;

	mod = modf(x, &div);

	cout << "1.2345의 몫 : " << div << ", 나머지 : " << mod << endl;
	
	return 0;

}

// 048 - 소수점 분리하기(modf)
