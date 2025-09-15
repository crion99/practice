#include<iostream>
using namespace std;
#include<string>
class student {
public:
	int age;
	string name;
	//构造函数
	void pass(int age) {
		//用age=p.s会报错
		this->age = age;
		//利用this指针解决同名问题
	}
	student& plusage(student& p) {//返回值类型是student类的引用，是为了返回对象本身，如果返回值类型是student类对象，则会调用拷贝构造函数，无法作用到本身
		p.age += 1;
		return *this;
		//利用this指针返回对象本身
	}
	void show() {
		cout << "hellow" << endl;
	}
	void show2() {
		if (this == NULL) {
			return;//时刻检测this指针是否为空
		}
		cout << this->age << endl;
	}
};



void test01(){
	student p;
	p.pass(18);
	cout << "age=" << p.age << endl;
	student *p2 = NULL;
	p2->show();
	//p2->show2();空指针无法访问有成员变量的函数！！！
}
int main() {
	test01();
	return 0;
}
