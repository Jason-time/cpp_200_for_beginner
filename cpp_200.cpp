﻿#include <ctime>
#include <iostream>

using namespace std; 
int main(int argc, char* argv[]) {
	time_t start = time(NULL);
	time_t finish = time(NULL);

	int pass_int = 2;

	time(&start);
	for (int i = 1;i < 10000;i++) {
		for (int j = 1; j < 10000;j++)
			pass_int += 1;
	}

	time(&finish);
	cout << "1을 100억 번 더하는 시간 : " << difftime(finish, start) << "초 \n";
	return 0;
}

// 052 - 지나간 시간 알아내기(time)