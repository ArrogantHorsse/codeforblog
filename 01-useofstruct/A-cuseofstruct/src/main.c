#include "stdio.h"
#include "usestruct.h"

int main(){
    printf("helloWorld!\n");

    // type 1,在C中定义必须加struct
    struct type_one_s type_one1 = {1,2};

    struct type_one_s type_one2;
    type_one2.a = 3;
    type_one2.b = 4;

    printf("type 1 : type_one1.a = %d ,type_one1.b = %d\n",type_one1.a,type_one1.b);
    printf("type 1 : type_one2.a = %d ,type_one2.b = %d\n",type_one2.a,type_one2.b);
    printf("=======================================================\n");
    // type 2,与type 1 用法一致，但可直接使用在定义结构体时定义的结构体变量

    type_two1.a = 5;
    type_two1.b = 6;

    struct type_two_s type_two2 = {7,8};
    printf("type 2 : type_two1.a = %d ,type_two1.b = %d\n",type_two1.a,type_two1.b);
    printf("type 2 : type_two2.a = %d ,type_two2.b = %d\n",type_two2.a,type_two2.b);
    printf("=======================================================\n");
    // type3, 在定义结构体时无结构体名称，只能使用已定义的结构体变量
    type_three1.a = 9;
    type_three1.b = 10;
    type_three2.a = 11;
    type_three2.b = 12;
    printf("type 3 : type_three1.a = %d ,type_three1.b = %d\n",type_three1.a,type_three1.b);
    printf("type 3 : type_three2.a = %d ,type_three2.b = %d\n",type_three2.a,type_three2.b);
    printf("=======================================================\n");

    //type4,
}