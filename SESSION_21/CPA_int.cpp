#include <iostream>
#include <typeinfo>

class CPA_int{
    private:
        int N;
    public:
        CPA_int(int _n = 10):N(_n){}
        
        CPA_int operator+(const CPA_int& other)const{
            std::cout<<"In CPA_int::operator+():" << std::endl;
            int result  = this->N + other.N;
            CPA_int sum_obj(result);
            return sum_obj;
        }

        CPA_int operator-(const CPA_int& other)const{
            
        }
        void show(const char* msg)const{
            if(msg)
                std::cout<<msg;
            std::cout << this->N << std::endl;
        }
};

int main(void){
    CPA_int n1(10),n2(3);
    CPA_int result;

    n1.show("n1:");
    n2.show("n2:");
    result = n1 + n2;   
    result.show("Summation:");

    std::cout<< "type(n1):" <<typeid(n1).name()<<std::endl;
    std::cout<< "type(n2):" <<typeid(n2).name()<<std::endl;
    std::cout<< "type(result)"<<typeid(result).name()<<std::endl;



    return EXIT_SUCCESS;
}


