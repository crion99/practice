#include<iostream>
using namespace std;
#include<string>
class home {
public:
	string m_name;
	int m_length;
	mutable int m_score;//mutable修饰的成员属性可以在const修饰的函数中修改
	void show()const {
		cout << "home的名字是：" << m_name << "，长度是：" << m_length << endl;
		//m_length = 100;错误的，const修饰的函数不允许修改成员属性 但是加上mutable就可以
		m_score = 100;
	}
};