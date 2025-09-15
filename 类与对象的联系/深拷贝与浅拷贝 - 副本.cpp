#include<iostream>
using namespace std;
#include<string>
class person {
public:
	//默认函数
	void func() {
		cout << "默认构造函数的使用" << endl;
	}
	//有参函数
	void Hfunc( int age,int h) {
		m_age = age;
		m_hight = new int(h);//在堆区开辟空间
	cout<< "有参构造函数的使用" << endl;
	
	}
	//自己构造拷贝函数，避免浅拷贝引发的问题
	void copy(const person& p) {
		m_age = p.m_age;
		//m_hight = p.m_hight;此为编译器默认的代码
		m_hight = new int(*p.m_hight);//深拷贝
	}
	//析构函数
	~person() {
		if (m_hight != NULL) {
			delete m_hight;//释放空间
			m_hight = NULL;
		}
		cout << "析构函数的使用" << endl;
	}
	string m_name;
	int m_age;
	int* m_hight;//这里用了指针，应该是为了是他长期存在，使用new在堆区开辟空间
};
void test01() {
	person p1;
	p1.Hfunc(10, 10);
	//person p2 = p1;//拷贝函数，编译器自己提供的
	person p2;
	p2.copy(p1);
	cout << p2.m_age << *p2.m_hight << endl;
}
int main() {
	test01();
	return 0;
}