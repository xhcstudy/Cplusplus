#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <vector>

//vector容器赋值操作
//vector& operator= (const vector &vec);	//重载等号操作符
//assign(beg, end);							//将[beg,end)区间中的数据拷贝赋值给本身
//assign(n, elem);							//将n个elem拷贝赋值给本身

//void printVector(vector<int> v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void Test1()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//赋值		operator=
//	vector<int> v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	//n个elem 方式赋值
//	vector<int> v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}