//
// Created by 杨巍 on 2023/1/17.
//

#include "Singleton.h"

Singleton* Singleton::instance = new Singleton();
Singleton* Singleton::getSingleton() {
    return instance;
}

Singleton::Singleton() {}