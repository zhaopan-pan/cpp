#include <iostream>
using namespace std;

void TypeString();
int main()
{
    TypeString();
    return 0;
}

void TypeString()
{
    string str = "hello";
    cout << str.find("e", 1) << endl;  //�����ַ�����λ������,�ڶ�������Ϊ��ʼ�������±꣬��ָ���������Ĭ�ϴ�0��ʼ
    cout << str.rfind("e", 1) << endl; //~  ��find()���������ڵڶ������������ҵ��ڶ���������ָ�����±�Ϊֹ���Ҳ��������������
    cout << str.find_first_of("e") << endl; //����ַ����״γ��ֵ�λ��
    cout << str.size() << endl;        //�ַ������ȣ�ͬ��
    cout << str.length() << endl;

    //ɾ��
    str.erase(4);
    cout << "ָ����ʼ-ɾ����" << str << "\n";
    str.erase(1, 3);
    cout << "ָ����ʼ��ɾ������-ɾ����" << str << "\n";

    //����
    str.insert(1, "ello world");
    cout << "�����" << str << "\n";

    //��ȡ�ַ���
    cout << "��ȡ���±�1��ʼ����Ϊ3�ַ���" << str.substr(1, 3) << "\n";
}