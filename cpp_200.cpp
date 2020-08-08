#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

	const string kMyJob = "developer";

	string question = "who are you : ";
	string answer = "my job is :";

	cout << question << kMyJob << endl;
	cout << answer << kMyJob << endl;
	return 0;
}

// 077 - const 변수 이해하기
