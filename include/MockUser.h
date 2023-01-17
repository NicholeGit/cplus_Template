//
// Created by 杨巍 on 2023/1/17.
//

#ifndef CPLUS_TEMPLATE_MOCKUSER_H
#define CPLUS_TEMPLATE_MOCKUSER_H

#include "User.h"
#include <gmock/gmock.h>

class MockPeople : public People{
public:
    MOCK_METHOD(int, getAge, (), (override));
//    MOCK_METHOD0( getAge, int());
};

#endif // CPLUS_TEMPLATE_MOCKUSER_H
