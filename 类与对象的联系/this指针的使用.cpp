#include<iostream>
using namespace std;
#include<string>
class student {
public:
	int age;
	string name;
	//���캯��
	void pass(int age) {
		//��age=p.s�ᱨ��
		this->age = age;
		//����thisָ����ͬ������
	}
	student& plusage(student& p) {//����ֵ������student������ã���Ϊ�˷��ض������������ֵ������student����������ÿ������캯�����޷����õ�����
		p.age += 1;
		return *this;
		//����thisָ�뷵�ض�����
	}
	void show() {
		cout << "hellow" << endl;
	}
	void show2() {
		if (this == NULL) {
			return;//ʱ�̼��thisָ���Ƿ�Ϊ��
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
	//p2->show2();��ָ���޷������г�Ա�����ĺ���������
}
int main() {
	test01();
	return 0;
}
