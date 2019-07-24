//
// Created by dwb on 2019-07-19.
//

#ifndef SAMPLE_TEACHER_H
#define SAMPLE_TEACHER_H

#include <iostream>
#include <string>

using namespace std;

class Teacher {
public:
    Teacher(){
        cout << "Teacher()" << endl;
        m_name="Mike";
        m_age=20;
    }
    Teacher(const string& t_name,int t_age)
        :m_name(t_name),m_age(t_age){
        cout << "Teacher(...)" << endl;
    }

    ~Teacher(){
        cout << "~Teacher()" << endl;
    }

    void print(){
        cout << "name->" << m_name << "  age->" << m_age << endl;
    }
private:
    string m_name;
    int m_age;
};


#endif //SAMPLE_TEACHER_H
