//
// Created by dwb on 2019-07-22.
//

#ifndef SAMPLE_ANIMALFACTORY_H
#define SAMPLE_ANIMALFACTORY_H

#include <string>
#include <iostream>
#include "Animal.h"

using namespace std;

class Animal;

class AnimalFactory {
public:
    AnimalFactory(){
        m_factoryName = "AnimalFactory1";
        size++;
    }

    static int size;

    static int getNumber(){
        cout << "getNumber()" << endl;
        return size;
    }

    void addAnimal(Animal& animal);

    void print(){
        cout << "m_factoryName:" << m_factoryName << "   size:"<<size << endl;
    }
//    ostream&operator << (ostream &os,Animal& animal){
//
//    }
private:
    string m_factoryName;
};


#endif //SAMPLE_ANIMALFACTORY_H
