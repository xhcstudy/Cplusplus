#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
#include <string>

//类模板的分文件编写问题以及解决

//第一种解决方式，直接包含.cpp源文件
//#include "person.cpp"

//第二种解决方式，将.h和.cpp的内容写到一起，将后缀名改为.hpp文件
#include "person.hpp"

//template <class T1, class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age);
//
//	void ShowPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::ShowPerson()
//{
//	cout << "姓名: " << this->m_Name << endl;
//	cout << "年龄: " << this->m_Age << endl;
//}

//void Test1()
//{
//	Person<string, int> p("Jerry", 15);
//	p.ShowPerson();
//}
//
//int main()
//{
//	Test1();
//
//	system("pause");
//	return 0;
//}