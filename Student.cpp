//
// Created by dwb on 2019-07-19.
//

#include "Student.h"


Student::Student()
    :height2(height),student2(*this){
    cout << "构造函数" << endl;
}


//Student::Student(const string &name, int age, int height) {
//    this->name=name;
//    this->age=age;
//    this->height=height;
//}

Student::Student(const string &name, int age, int height)
    :name(name),age(age),height(height),height2(this->height),student2(*this) {
}



void Student::testPublic() {
    cout << "testPublic" << endl;
}

void Student::testProtected() {
    cout << "testProtected" << endl;
}

void Student::testPrivate() {
    cout << "testPrivate" << endl;
}

string Student::getName() {
    return name;
}

string Student::getId() {
    return id;
}

int Student::getAge() {
    return age;
}

string Student::setName(const string& name) {
    return this->name = name;
}

void Student::print() {
    cout << "name:"+name << "  age:" << age <<"  height:" << height << "  height2:" << height2 << endl;
}

Student::Student(const string &name)
    :name(name),height2(height),student2(*this){
}

void Student::createStudentArray() {
    Student array[5] = { Student("Hello",10,180), Student("World",20,100) };
    for (int i = 0; i < (sizeof(array) / sizeof(array[0])); ++i ) {
        array[i].print();
    }

    cout << "===========================" << endl;

    Student* array2[5];
    for (int i = 0; i <(sizeof(array)/ sizeof(array[0])); ++i) {
        array2[i] = &array[i];
        array2[i] -> print();
    }
}

Student::~Student() {
    cout << "~Student" << endl;
}
