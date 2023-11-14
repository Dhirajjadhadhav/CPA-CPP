#include <iostream>

void test(int num = 10);

int main(void){
    test(100);
    return 0;
}

void test(int num){
    std::cout<<"num:"<<num<<std::endl;
}