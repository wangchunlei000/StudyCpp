//
// Created by dwb on 2019-07-22.
//

#include "Animal.h"

void Animal::Bird::print() {
    cout <<"Bird.print()" << endl;
}

void Animal::innerClass() {
    class Dog{
    public:
        Dog(){
            cout << "Dog()" << endl;
        }

        Dog(string& t_name,int t_age):m_name(t_name),m_age(t_age){
            cout << "Dog(...)" << endl;
        }

        ~Dog(){
            cout << "~Dog()" << endl;
        }
    private:
        string m_name;
        int m_age;
    };

    Dog dog;
}

void getAnimalInfo(Animal &animal) {
    cout << "m_name:" << animal.m_name << "  m_weight:" << animal.m_weight << "  m_height:" << animal.m_height << endl;
}

//void AnimalFactory::addAnimal(Animal &animal) {
//    animal.m_name = "Monkey";
//    animal.m_weight = 80;
//}