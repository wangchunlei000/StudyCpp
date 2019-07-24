//
// Created by dwb on 2019-07-19.
//

#ifndef SAMPLE_CAR_H
#define SAMPLE_CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    Car(){
        cout << "Car()" << endl;
        m_name = "BMW";
        m_age = 0;
    }
    explicit Car(const char *t_name){
        cout << "Car(const char *t_name)" << endl;
        m_name=t_name;
        m_age=1;
    }
    Car(int t_age){
        cout << "Car(int t_age)" << endl;
        m_name = "BYD";
        m_age = t_age;
    }
    Car(const string &t_name,int t_age)
        :m_name(t_name),m_age(t_age){
        cout << "Car(const string &t_name,int t_age)" << endl;
    }

    ~Car(){
        cout << "~Car()" << endl;
    }

    void print(){
        cout << "name:" << m_name << "  age:" << m_age << endl;
    }
private:
    string m_name;
    int m_age;
};


#endif //SAMPLE_CAR_H
