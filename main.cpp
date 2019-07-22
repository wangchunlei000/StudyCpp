#include <iostream>
#include "Cite.h"
#include "Methods.h"
#include "Student.h"
#include "Car.h"
#include "cmake-build-debug/MollocTest.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

//    Cite *pCite = new Cite();
//    pCite->test();

//    Methods *pMethods = new Methods();
//    pMethods->test();

//    Person p1 = {"BugKiller",28,176};
//    p1.print();
//
//    Student student;
//    student.setName("aaa");
//    student.testPublic();
//    const string &name = student.getName();
//    cout << "getName->" << name << endl;
//
//    Student stu2("WangChunlei",25,180);
//    stu2.print();
//
//    Student stu3("BigThunder");
//    stu3.print();
//
//    student.createStudentArray();

//    Car t_car1;
//    Car t_car2("马自达");
//    Car t_car3(10);
//    Car t_car4("丰田",30);

//    cout << "=======================" << endl;
    //一个参数的构造函数的隐式转换
//    Car t_car5 = "Bugkiller";
//    Car t_car6 = 33;

//    cout << "=======================" << endl;
//    t_car1.print();
//    t_car2.print();
//    t_car3.print();
//    t_car4.print();
//    t_car5.print();
//    t_car6.print();

    MollocTest t_molloc;
    t_molloc.testMolloc();

    return 0;
}