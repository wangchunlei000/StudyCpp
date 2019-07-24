//
// Created by dwb on 2019-07-22.
//

#include "AnimalFactory.h"

int AnimalFactory::size = 0;

void AnimalFactory::addAnimal(Animal &animal) {
    animal.m_name = "Monkey";
    animal.m_weight = 80;
}
