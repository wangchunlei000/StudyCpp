//
// Created by dwb on 2019-07-22.
//

#ifndef SAMPLE_ANIMAL_H
#define SAMPLE_ANIMAL_H


#include <iostream>
#include "AnimalFactory.h"

using namespace std;

class AnimalFactory;

class Animal {
public:
    Animal():m_name("Tiger"),m_weight(70),m_height(180){
        cout << "Animal()" << endl;
    }
    Animal(const string& t_name,int t_weight,int t_height)
        :m_name(t_name),m_weight(t_weight),m_height(t_height){
        cout << "Animal(...)" << endl;
    }

    ~Animal(){
        cout << "~Animal()" << endl;
    }

    void print(){
        cout << "m_name:" << m_name << "  m_weight:" << m_weight << "  m_height:" << m_height << endl;
    }

    void innerClass();

    friend void getAnimalInfo(Animal &animal);

    friend class AnimalFactory;

//    friend void AnimalFactory::addAnimal(Animal& animal);

    class Bird{
    public:
        Bird(){
            cout << "Bird()" << endl;
            m_name= "Bird";
            m_color="white";
        }

        Bird(const string& t_name,const string& t_color):m_name(t_name),m_color(t_color){
            cout << "Bird(...)" << endl;
        }

        ~Bird(){
            cout << "~Bird()" << endl;
        }

        void print();
    private:
        string m_name;
        string m_color;
    };
private:
    string m_name;
    int m_weight;
    int m_height;
};


#endif //SAMPLE_ANIMAL_H
