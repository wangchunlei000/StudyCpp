//
// Created by dwb on 2019-07-18.
//

#include <iostream>
#include "Cite.h"

using  namespace std;

#define PI 3.1415926

double g_area=0;

void swap1(int *t_p1,int *t_p2){
    int temp = *t_p1;
    *t_p1 = *t_p2;
    *t_p2 = temp;
}

void swap2(int &t_x,int &t_y){
    int temp = t_y;
    t_y = t_x;
    t_x = temp;
}

void fun1(){
    double t_a=10.2032;
}

void fun2(){
    double t_a=99.2032;
}

double& getArea(double radius){
    double area = PI * radius * radius;
    return area;
}

struct Person{
    string m_name;
    int m_age;
    int m_weight;
};

/**
 * 获取Person的信息
 */
void getPersonInfo(const Person &person){
    cout << "person.name:" << person.m_name  << endl;
    cout << "person.age:" << person.m_age  << endl;
    cout << "person.weight:" << person.m_weight << endl;
}

void updatePersonInfo(Person &person){
    cout << "请输入修改后的姓名：" << endl;
    cin  >> person.m_name;

    cout << "请输入修改后的年龄：" << endl;
    cin >> person.m_age;

    cout << "请输入修改后的体重：" << endl;
    cin >> person.m_weight;
}

int Cite::test() {

    int a = 100;
    int &b = a;
    int *c = &a;


    cout << "&a=" << &a << "  a=" << a <<endl;
    cout << "&b=" << &b << "  b=" << b <<endl;
    cout << " c=" << c << "  *c=" << *c <<endl;

    b=250;

    cout << "&a=" << &a << "  a=" << a <<endl;
    cout << "&b=" << &b << "  b=" << b <<endl;


    int &p1 = a;
    int *t_p1 = &p1;
    int *&t_p2 = t_p1;

    cout << "&t_p1 = " << &t_p1 << "  t_p1 = " << t_p1 << "  *t_p1 = " << *t_p1 << endl;
    cout << "&t_p2 = " << &t_p2 << "  t_p2 = " << t_p2 << "  *t_p2 = " << *t_p2 << endl;

    int t_array1[3] = {1,2,3};
    //没有数组的引用
//    int &t_array2[3]=t_array1;

    int aa=10;
    int bb=20;
//    swap1(&aa,&bb);
    swap2(aa,bb);
    cout << "aa=" << aa<< "  bb=" << bb << endl;


    Person person1 = { "BugKiller" , 28 , 75 };
    getPersonInfo(person1);
//    updatePersonInfo(person1);
    cout << endl;
    getPersonInfo(person1);
    
    double radius = 10.0;
    double area = getArea(radius);
    cout << "area->" << area << endl;

    fun1();
    cout << "area->" << area << endl;


    fun2();
    cout << "area->" << area << endl;
    return 10;
}
