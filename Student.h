//
// Created by dwb on 2019-07-19.
//

#ifndef SAMPLE_STUDENT_H
#define SAMPLE_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    int age;
    int height;

    void print(){
        cout << "name:" << name << endl;
        cout << "age:" << age << endl;
        cout << "height:" << height << endl;
    }
};

class Student {
public:
    Student();
    ~Student();
    Student(const string& name,int age,int height);
    Student(const string& name);
    string name;
    string getName();
    string setName(const string& name);
    void testPublic();
    void print();
    void createStudentArray();
    //自定义赋值操作符
    Student& operator =(const Student &t_student){
        cout << "operator =" << endl;
        if(&t_student != this){
            name = t_student.name;
            age = t_student.age;
        }

        return *this;
    }

    string getName() const{
        return name;
    };

    string getId() const {
        return  id;
    }

protected:
    string id;
    string getId();
    void testProtected();

private:
    int age;
    int height;
    int &height2;
    Student *student;
    Student &student2;
    char* sex;
    int getAge();
    void testPrivate();
};


#endif //SAMPLE_STUDENT_H
