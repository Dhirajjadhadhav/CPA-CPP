#include <iostream>

class Test{
    public:
        Test operator+(const Test& second_object)const
        {
            std::cout<<"___In Test::operator+()_____"<<std::endl;
            std::cout<<"this:"<<std::hex<<this<<std::endl;
            std::cout<<"&second_object:"<<std::hex<<&second_object<<std::endl;
            std::cout<<"---Returing from Test::operator+()-----"<<std::endl;

            return Test();
        }

        bool operator*()
        {
            std::cout<<"----In Test::operator+()-----"<<std::endl;
            std::cout<<"this:"<<std::hex<<this<<std::endl;
            std::cout<<"-----------Returning from the Test::operator*()--------"<<std::endl;

            return true;
        }
};


int main(void){

    Test t1, t2, result;
    bool ret;

    std::cout<<"main:&t1:"<<std::hex<<&t1<<std::endl
             <<"main:&t2:"<<std::hex<<&t2<<std::endl;

    //address  of &t1 in main() and addressin this operator+()
    //should be indentical 
    //address of &t2 in main() and address of &second_object in 
    //opeartor+() shpuld be idetical

    result = t1+t2;
    ret = *t1;

    return 0;
}

/*
1)  A callback function is defined by programmer but almost always called by language compiler / library / OS.
2)  Prototype / declaration of a callback function is partially or fully specified by the language compiler / library or OS.
    The prototype of function includes the following decisions:
        i) name of the function
        ii) total number Of parameters Of function
        iii) type of each formal parameter of function
        iv) return type Of function.
        v) calling convention of function
3)  Constructor is an example of callback function. But in cpp, name of constructor callback function is fixed and is equal to the name of the class.However, 
    If name of callback function is not specified by the caller then it becomes important to register an address of callback function to compiler / library / OS.

*/