//
// Created by 杨巍 on 2023/1/16.
//

#ifndef NEW_PROJECT_USER_H
#define NEW_PROJECT_USER_H

#include <string>

class User{
private:
    int age;
    std::string name;
public:
    User(std::string name_):name(name_){}
    User();
    std::string get_name();
};

class People{
public:
    virtual int getAge() = 0;
};

#endif //NEW_PROJECT_USER_H
