#include <iostream>
#include <string>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

struct person {
	string name;
	Date birthday;
}id = { "陈浩" , 2002 , 8 , 26 };

//person id[] = {
//{ "陈浩" , 2002 , 8 , 26 },
//{ "陈强" , 2002 , 8 , 17 },
//{ "钱能文" , 2002 , 9 , 10 },
//{ "万里" , 2002 , 12 , 12 },
//};

//void imformation();
