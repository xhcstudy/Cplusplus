#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//pair对组创建
//两种创建方式
//pair<type, type> p(value1, value2);
//pair<type, type> p = make_pair(value1, value2);

//void Test1()
//{
//	//第一种方式
//	pair<string, int> p("Tom", 20);
//
//	cout << "姓名: " << p.first << "\t年龄:" << p.second << endl;
//
//	//第二种方式
//	pair<string, int> p2 = make_pair("Jerry", 30);
//	cout << "姓名: " << p2.first << "\t年龄:" << p2.second << endl;
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}