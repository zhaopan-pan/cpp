#include <iostream>
using namespace std;//c++标准中的标准类库的变量与函数都属于命名空间std

int main() {
    int * a;                     //声明int类型指针
    a=new int(3);                //分配三个int类型的储存空间给指针a
    for(int i=0;i<3;i++){        //定义对象i初始值为0
        cin>>*(a+i);             //把输入的数据存入指定地址
    }
    for(int i=0;i<3;i++){
        cout <<"输出："<< *(a+i)<<endl; //输出指针地址中的三个值
    }
}