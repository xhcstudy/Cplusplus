#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <map>

//map大小和交换
//size();		//返回容器中元素的数目
//empty();		//判断容器是否为空
//swap(st);		//交换两个集合容器

//void PrintMap(map<int, int> &m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << "\tvalue = " << it->second << endl;
//	}
//	cout << endl;
//}
//
////大小
//void Test1()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的大小为:" << m.size() << endl;
//	}
//}
//
////交换
//void Test2()
//{
//	map<int, int> m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(4, 100));
//	m2.insert(pair<int, int>(5, 200));
//	m2.insert(pair<int, int>(6, 300));
//	cout << "交换前:" << endl;
//	PrintMap(m1);
//	PrintMap(m2);
//	m1.swap(m2);
//	cout << "交换后:" << endl;
//	PrintMap(m1);
//	PrintMap(m2);
//}
//
//int main()
//{
//	//Test1();
//	Test2();
//
//	system("pause");
//	return 0;
//}