#include <iostream>
#include<string>

using namespace std; 
int main(int argc, char* argv[]) {
	string sentence = "I hate the dog.";
	sentence.erase(0, 7);
	cout << "I like " << sentence << endl;
	return 0;
}

// 059 - 문자열 일부 지우기 ( erase )