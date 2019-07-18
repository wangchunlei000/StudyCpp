//
// Created by dwb on 2019-07-18.
//

#include "Methods.h"

//函数声明
inline void getInfo();

//函数定义
inline void getInfo(){
    cout << "a sample C++ program" << endl;
    cout << "Hello C++!" << endl;
}

int add(int a ,int b = 200,int c = 300,int d = !400){
    return a+b+c+d;
}

void Methods::test() {
    getInfo();
    int sum=add(1,2,3,4);
    cout << "sum:" << sum << endl;
}
