#include <iostream>
#include <iomanip>
using namespace std;

//�����ʽ
int main()
{
    int num = 123;
    int nums = 321;
    cout << "10����-dec:" << dec << num << endl;
    cout << "8����-oct:" << oct << num << endl;
    cout << "16����-hex:" << hex << num << endl;
    cout << "10����-dec:" << dec << num << endl;//������תΪ10���ƣ�num��������������16���ƣ�
    int &b=num;
    b=nums;      //ͨ�����øı�num,���ָ��Ҳ�����
    cout <<b<<endl;   //321
    cout <<num<<endl; //321
    return 0;
}