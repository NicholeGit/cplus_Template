#include <iostream>
#include <gtest/gtest.h>
#include "Singleton.h"
#include "User.h"
#include "MockUser.h"
#include <gmock/gmock.h>

int add(int a,int b){
    return a + b;
}

TEST(testCase1,should_3_when_given_2_and_1){
    EXPECT_EQ(add(2,1),3);
}

TEST(testCase3,test){
    MockPeople people;
    EXPECT_CALL(people,getAge())
        .Times(::testing::AtLeast(3)) // 最少调用三次
//        .WillOnce(::testing::Return(200))  // 第一次调用返回200
//        .WillOnce(::testing::Return(300))  // 第一次调用返回300
        .WillRepeatedly(::testing::Return(500)); // 反复调用返回500

    std::cout << people.getAge() << std::endl;
    std::cout << people.getAge() << std::endl;
    std::cout << people.getAge() << std::endl;
}

int main(int argc,char **argv){
    auto *user = new User("yangwei");
    std::cout << user->get_name() << std::endl;

    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();


}

//int main() {

//
//    // 单例模式
//    auto  a = Singleton::getSingleton();
//    auto  b = Singleton::getSingleton();
//    std::cout << a << std::endl;
//    std::cout << b << std::endl;
//
//    return 0;
//}
