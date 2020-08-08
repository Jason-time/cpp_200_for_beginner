#include <iostream>
#include <string>
#include <algorithm>

using namespace std; 

int main(int argc, char* argv[]) {
	string sort_str1 = "gojoseon";
	string sort_str2 = "AaBbCcDdEe";

	sort(sort_str1.begin(), sort_str1.end());
	sort(sort_str2.begin(), sort_str2.end());
	
	cout << "소문자만 정렬 : " << sort_str1 << endl;
	cout << "대소문자만 정렬 : " << sort_str2 << endl;

	return 0;
}

// 065 - 문자열 정렬하기(sort)
