#include <iostream>
#include "Cite.h"
#include "Methods.h"
#include "Student.h"
#include "Car.h"
#include "Animal.h"

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

//    Student student1("WangChunlei");
//    Student student2(student1);
//    student1.print();
//    cout << "==========================="  << endl;
//    student2.print();

    //赋值操作符
//    Student t_student1("WangChunlei",28,178);
//    Student t_student2("BugKiller",30,180);
//
//    t_student1 = t_student2;

//    Animal animal("Cat",30,100);
//    Animal::Bird bird;
//    animal.innerClass();
//
//    AnimalFactory animalFactory;
//    animalFactory.addAnimal(animal);
//    animalFactory.print();
//    AnimalFactory::getNumber();
//
//    getAnimalInfo(animal);

    int num1=1100;
    int num2=1200;
    int *p=&num1;
    p = &num2;
    *p = 12;
    double *p2;


    printf("p ->  %p \n",&p);
    printf("num1->%p\n",&num1);
    printf("num2->%p\n",&num2);
    printf("================================\n");
    printf("num2--->%d\n",num2);
    printf("num1--->%d\n",*p);
    printf("p.size-->%d\n", sizeof(p));
    printf("p2-->%d\n", p2);

    return 0;
}