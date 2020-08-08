#include <iostream>
#include<string>

using namespace std; 

int main(int argc, char* argv[]) {
	string sentence = "I like coding";
	sentence.erase(remove(sentence.begin(), sentence.end(), ' '),sentence.end());

	cout << sentence << endl;
	return 0;
}

// 061 - 문자열에서 특정 문자만 제거하기(erase, remove)