#ifndef _DATE_H
#define _DATE_H

class Date{
    private:
        int day;
        int month;
        int year;
        //auxillary (helper) function
        static bool is_valid(int day, int month, int year);
    public:
        //Constructors

        Date(); //Default
        Date(int _dd, int _mm, int _yy); //parameterized 

        //getters
        int get_day()const;
        int get_month()const;
        int get_year()const;

        //setters
        void set_day(int new_day);
        void set_month(int new_month);
        void set_year(int month);

        //Display
        void Show()const;
        
};

#endif  /*_DATE_H*/