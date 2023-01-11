#include <iostream>
using namespace std;
#include <string>

int main() {
	//	for (int i = 1; i < 10; i++) {
	//		for (int j = 1; j <= i; j++) {
	//			cout << i << "*" << j << "=" << i * j << "\t";
	//		}
	//		cout << endl;
	//	}
		//char ch = 'a';
		//char str[] = "hello world";
		//string text = "I love You";
		//cout << ch << "\n" << str << "\n" << text << "\n" << endl;

	int arr4[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

