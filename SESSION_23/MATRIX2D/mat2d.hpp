#ifndef _MAT2D_H
#define _MAT2D_H

#include <iostream>

class mat2d{
    private:

    public:
    typedef long long int size_type;
    //default constructor
    mat2d();
    mat2d(int row, int col);

    size_type rows()const;
    size_type cols()const;
    void set(size_type row, size_type col, int val);

    mat2d operator+(const mat2d& rhs_object)const;
    mat2d operator-(const mat2d& rhs_object)const;
    mat2d operator*(const mat2d& rhs_object)const;

    friend std::istream& operator>>(std::istream& is, mat2d& mat2d_obj);
    friend std::ostream& operator<<(std::ostream& os,const mat2d& mat2d_obj);   
};
#endif /*_MAT2D_H*/