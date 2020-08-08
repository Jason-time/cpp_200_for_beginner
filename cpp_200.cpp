#include <iostream>
#include <string>
#include <algorithm>

using namespace std; 

int main(int argc, char* argv[]) {
	string str = "gfedcba";
	reverse(str.begin(), str.end());
	
	cout << str << endl;

	return 0;
}

// 066 - 문자열 뒤집기 ( reverse )
