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
class son :virtual public father {//������̳н�����μ̳�����
public:
		void show() {
		cout << "name:" << name << endl;
		cout << "age:" << age << endl;
		//cout << "money:" << money << endl; //���ɷ��ʸ����˽�г�Ա
		}
		string name;
	    //���캯��
		void set(int Age,string Name) {
			age = Age;
			this->name = Name;
		}
};
class daughter:virtual public father {
public:
	//��̳��﷨

};
// �Ӹ���̳е����ж������������࣬�������಻�ܷ���˽�г�Ա
//���μ̳�����
class daughter_son :public son, public daughter {};
//son��daughter�о���age,�����d_sʱ��������age������˷�
void test01() {
	son s1;
	s1.set(16, "����");
	s1.show();
	s1.name = 111;//ͬ��ʱֱ�ӷ���
	s1.father::name = 111;//����Ҫ��������
}
void test02(){
	daughter_son d_s;
	d_s.son::age = 10;//��̳к�����ֻ��һ�ݸ����Ա
	d_s.daughter::age = 20;//ֻ��һ��
	cout << d_s.age << endl;//��̳к󣬿��������ַ�ʽ
}

int main() {
	test01();
	test02();
	return 0;
}