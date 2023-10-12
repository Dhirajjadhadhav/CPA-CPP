#include <cstdio>
#include <cstdin>
#include <cassert>

struct C{
    int c;
    float b;
    char c;
};


struct B{
    int a;
    struct C* pC;
    double d;
};

struct A{
    int a[5];
    struct B* pB;
    short s[8];
};


int main(void){

    struct A a;

    for(int i = 0; i<5; ++i)
        a.a[i] = i;
    
    a.pB =(struct B)malloc(sizeof(struct B));
    assert(a.pB);
    
}
