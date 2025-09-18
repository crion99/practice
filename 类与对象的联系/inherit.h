#include<iostream>
#include<string>
using namespace std;
class father {
public:
	string name;
	int age;
private:
	int money;
};
class son :virtual public father {//利用虚继承解决菱形继承问题
public:
		void show() {
		cout << "name:" << name << endl;
		cout << "age:" << age << endl;
		//cout << "money:" << money << endl; //不可访问父类的私有成员
		}
		string name;
	    //构造函数
		void set(int Age,string Name) {
			age = Age;
			this->name = Name;
		}
};
class daughter:virtual public father {
public:
	//多继承语法

};
// 从父类继承的所有东西都属于子类，但是子类不能访问私有成员
//菱形继承问题
class daughter_son :public son, public daughter {};
//son与daughter中均有age,传入给d_s时会有两份age，造成浪费
void test01() {
	son s1;
	s1.set(16, "张三");
	s1.show();
	s1.name = 111;//同名时直接访问
	s1.father::name = 111;//父类要加作用域
}
void test02(){
	daughter_son d_s;
	d_s.son::age = 10;//虚继承后，子类只有一份父类成员
	d_s.daughter::age = 20;//只有一份
	cout << d_s.age << endl;//虚继承后，可以用这种方式
}

void inherit() {
	test01();
	test02();
}