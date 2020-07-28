#include <iostream>

using namespace std; 
int main(int argc, char* argv[]) {
	string seven_war = "임진왜란";
	string korea_war = "한국전쟁";

	if (seven_war.compare(korea_war) != 0)
		cout << "다른 문자열입니다.\n";
	else
		cout << "같은 문자열입니다.\n";
	return 0;
}

// 053 - 문자열 비교하기(string.compare)