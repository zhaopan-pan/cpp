#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

typedef int arr[5]; //ʡ�Ե�������Ĵ�С������Ĵ�С��Ϊ��ʼ��ʱԪ�صĸ���
int main()
{

  int len = 5;
  arr arr1 = {1, 2, 3, 4, 5};
  cout << arr1 << endl;     //arr1Ĭ�������һ��Ԫ�صĵ�ַ
  cout << &arr1[0] << endl; //����arr1

  cout << arr1 + 1 << endl; //arr1==arr1[1],Ҳ��������ĵڶ���Ԫ��
  cout << &arr1[1] << endl; //����arr1+1

  reverse(arr1, arr1 + len); //����Ԫ�ط�ת����
  cout << "��ת��" << arr1[0] << endl;

  int arr2[5];
  copy(arr1, arr1 + len, arr2);             //��arr1ԭ�����Ƶ�arr2��
  reverse_copy(arr1, arr1 + len, arr2);     //��arr1�����Ƶ�arr2��
  cout << "arr2��" << arr2 << endl;         //ֱ�Ӵ�ӡ���飬���������λ���׵�ַ
  cout << "arr2��0����" << arr2[0] << endl; //1

  sort(arr2, arr2 + len);                      //Ĭ����������
  cout << "Ĭ����������" << arr2[0] << endl; //1

  sort(arr2, arr2 + len, greater<int>());      //��������
  cout << "������������" << arr2[4] << endl; //5

  int *x = find(arr2, arr2 + len, 11); //�����������Ƿ���� 2, ������᷵��Ԫ��ָ��

  if (x == arr2 + len) //arr2 + lenԪ���൱��arr2[5]��arr[5]������
  {
    cout << "û��2" << endl;
  }
  else
  {
    cout << "��ֵΪ2��Ԫ��" << endl;
  }
  cout << x << endl;
  cout << *x << endl;
  copy(arr2, arr2 + len, ostream_iterator<int>(cout, "-"));//�������
  reverse_copy(arr2,arr2+len,ostream_iterator<int>(cout,"-"));//��ת���

  cout << "arr2���:" << arr2 << endl;

  // cout <<'arr2��ת���:'<<
}