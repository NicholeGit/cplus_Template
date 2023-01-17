//
// Created by 杨巍 on 2023/1/17.
//

#ifndef NEW_PROJECT_SINGLETON_H
#define NEW_PROJECT_SINGLETON_H


class Singleton {
private:
    Singleton();
    static Singleton* instance;
public:
    static Singleton* getSingleton();
};


#endif //NEW_PROJECT_SINGLETON_H
