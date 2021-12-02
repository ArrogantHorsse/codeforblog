#include<iostream>
#include "usestruct.h"

using std::cout;
using std::endl;

int main(){
    cout<<"hello struct of C++ !"<<endl;

    // type one,在C++ 中定义不需加struct
    // 结构体赋值方法一，使用花括号
    type_one_s type_one1 = {1,2};  

    // 结构体赋值方法二，直接赋值
    type_one_s type_one2;
    type_one2.a = 3;
    type_one2.b = 4;

    cout<<"type one : type_one1.a ="<<type_one1.a<<"  type_one1.b ="<<type_one1.b<<endl;
    cout<<"type one : type_one2.a ="<<type_one2.a<<"  type_one2.b ="<<type_one2.b<<endl;
    cout<<"======================================================="<<endl;

    // type two,与type one 用法一致，但可直接使用在定义结构体时定义的结构体变量
    type_two1.a = 5;
    type_two1.b = 6;

    type_two_s type_two2 = {7,8};
    cout<<"type two : type_two1.a ="<<type_two1.a<<"  type_two1.b ="<<type_two1.b<<endl;
    cout<<"type two : type_two2.a ="<<type_two2.a<<"  type_two2.b ="<<type_two2.b<<endl;
    cout<<"======================================================="<<endl;

    // type3, 在定义结构体时无结构体名称，只能使用已定义的结构体变量
    type_three1.a = 9;
    type_three1.b = 10;
    type_three2.a = 11;
    type_three2.b = 12;
    cout<<"type three : type_three1.a ="<<type_three1.a<<"  type_three1.b ="<<type_three1.b<<endl;
    cout<<"type three : type_three2.a ="<<type_three2.a<<"  type_three2.b ="<<type_three2.b<<endl;
    cout<<"======================================================="<<endl;

    //type4, 在定义结构体时添加typedef修饰,为结构体取别名
    type_four_s type_four1 = {13,14};            //使用结构体名定义结构体变量,不需要加struct
    type_four_alias_s type_four2 = {15,16};      //使用结构体别名定义结构体变量,不需要加struct
    cout<<"type four : type_four1.a ="<<type_four1.a<<"  type_four1.b ="<<type_four1.b<<endl;
    cout<<"type four : type_four2.a ="<<type_four2.a<<"  type_four2.b ="<<type_four2.b<<endl;
    cout<<"======================================================="<<endl;

    // type5, 在定义结构体时省略结构体名，只取别名
    type_five_alias_s type_five1 = {17,18};
    type_five_alias_s type_five2;
    type_five2.a = 19;
    type_five2.b = 20; 
    cout<<"type five : type_five1.a ="<<type_five1.a<<"  type_five1.b ="<<type_five1.b<<endl;
    cout<<"type five : type_five2.a ="<<type_five2.a<<"  type_five2.b ="<<type_five2.b<<endl;
    cout<<"======================================================="<<endl;
}