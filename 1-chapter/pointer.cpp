#include <iostream>
using namespace std; //c++��׼�еı�׼���ı����뺯�������������ռ�std

void zhixiang();
void loopCinPointer();
int main()
{
    zhixiang();
    // loopCinPointer();
}

void loopCinPointer()
{
    int *a;         //����int����ָ��
    a = new int(3); //��������int���͵Ĵ���ռ��ָ��a
    for (int i = 0; i < 3; i++)
    {                    //�������i��ʼֵΪ0
        cin >> *(a + i); //����������ݴ���ָ����ַ
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "�����" << *(a + i) << endl; //���ָ���ַ�е�����ֵ
    }
}

void zhixiang()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int *p = &a;
    p = &b;
    b=c;
    cout << a << endl;//1
    cout << *p << endl;//3
}