#include <iostream>
#include<string>

using namespace std; 

int main(int argc, char* argv[]) {
	string sentence = "I like coding";
	string find_str = "coding";
	string replace_str = "history";

	sentence.replace(sentence.find(find_str), find_str.length(), replace_str);

	cout << sentence << endl;
	return 0;
}

// 062 - 문자열 일부 교체하기(replace)