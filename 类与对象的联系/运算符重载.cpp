#include<iostream>
#include<string>
using namespace std;
class person {
public:
	string name;
	int age;
	person operator+ (person & p) {//����+��
		person temp;
		temp.age = this->age + p.age;
		return temp;
	}
	//�������������
	person& operator++() {//ǰ�õ���
		this->age++;
		return *this;
	}
	person operator++(int) {//���õ���
		person temp = *this;
		this->age++;
		return temp;
	}
	//��ֵ��������������ڿ������캯�������Է�ֹǳ��������
	person& operator= (const person & p) {//��ֵ���������
		this->name = p.name;
		this->age = p.age;
		return *this;
	}
	//��ϵ���������
	bool operator== (const person& p) {
		if (p.age == this->age && p.name == this->name) {
			return true;
		}
		else  return false;
		
	}
	//�����������������
	void operator() (string test) {
		cout <<test<< endl;
	}
	 
	


};
   //�������������
ostream& operator<< (ostream& cout, const person& p) {//�˴�ostream&����д��ostream����Ϊcout���ܸ���
	cout << "������" << p.name << " ���䣺" << p.age << endl;
	return cout;

}



void test01() {
	person p1;
	p1.name = "����";
	p1.age = 20;
	person p2;
	p2.name = "����";
	p2.age = 30;
	person p3 = p1 + p2;//p1.operator+(p2);
	cout << "p3������Ϊ��" << p3.age << endl;
	cout << p1 << endl;
	cout << ++p1;
	cout << p1++;/*�� p1++������++�����ص���һ����ʱ���󣨰�ֵ���أ�����ʱ�����ܰ󶨵��� const ����ֵ���ã����� operator<< ���ղ�����������ͱ�����
	Ҳ����˵ const person &pʹ�ÿ��Խ�����temp������ʱ�ı������ڲ��ı�ֵ�ĺ�������ȫ����ֱ�Ӽ�const*/
	p1("hello world");
	
}
int main() {
	test01();
	return 0;
}

