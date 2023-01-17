## 加入googletest

两种方式：
1. 安装
```shell
git clone https://github.com/google/googletest.git
cd googletest
mkdir build && cd build
cmake -DCMAKE_CXX_STANDARD=17 ..
#make
sudo make install
```

2. 加入项目
```shell
git clone https://github.com/google/googletest.git
cd googletest
mkdir build && cd build
cmake -DCMAKE_CXX_STANDARD=17 ..
make
# 把lib与.h 放入项目
mv googletest/include/gtest/   项目目录/include
mv googlemock/include/gmock/   项目目录/include
mv build/lib/*   项目目录/lib  # 一共四个文件
```
