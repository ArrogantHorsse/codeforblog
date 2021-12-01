#ifndef USESTRUCT_H
#define USESTRUCT_H

// ################################### type 1  #################################
// 定义结构体type_one_s,此时结构体相当于一个类型，使用形式： type_one_s data1;
// C和C++中均可使用,在C中使用定义时，必须加struct，C++中不需要
// 即：C语言：struct type_one_s struct1;
//    C++：  type_one_s struct2;
struct type_one_s{
    int a;
    int b;
};
// 
// ################################### type 1 end  #############################

// ################################### type 2  #################################
// 定义结构体type_two_s，同时定义需要使用的变量two_a,two_b;
// 如果之后还需要定义其他变量，定义形式：type_two_s two_c; 
// 其实和上边的type 1是一样的，不同的只是这种形式在定义结构体的同时定义了变量
// C和C++中均可使用,使用方式同type 1
struct type_two_s
{
    int a;
    int b;
}type_two1;
// ################################### type 2 end  #############################


// ################################### type  3   ###############################
// 定义结构体时，没有结构体名称，同时定义结构体变量three_a,three_b。
// 一次性使用，之后不能再定义别的结构体变量。
// C和C++中均可使用
struct {
    int a;
    int b;
}type_three1,type_three2;
// ################################### type  3  end  ###########################


// ################################### type  4   ###############################

typedef struct type_four_s {
    int a;
    int b;
}type_four_alias_s;
// ################################### type  4  end  ###########################

// ################################### type  5 type  ###############################
typedef struct{
    int a;
    int b;
}type_five_alias_s;
// ################################### type  5  end  ###########################

#endif