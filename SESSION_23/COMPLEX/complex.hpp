#ifndef _COMPLEX_H
#define _COMPLEX_H

#include <iostream>

class complex
{
    public:
        //default comstructor
        complex();

        //addition operator overload
        complex operator+(const complex& rhs_object)const;
        complex operator-(const complex& rhs_object)const;
        complex operator*(const complex& rhs_object)const;
        complex operator/(const complex& rhs_object)const;
    
}