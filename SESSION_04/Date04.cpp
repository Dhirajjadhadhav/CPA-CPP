#include <cstdio>
#include <cstdlib>
#include <cstring>

class Date{
    private:
        int day, month,year;
    public:
        Date(const char* str_date){
            size_t L = strlen(str_date);
            char* cc_strdate = (char*)malloc(L+1);
            if(cc_strdate = NULL){
                puts("error in allocating memory");
                exit(EXIT_FAILURE);
            }

            *(cc_strdate+L) = '\0';
            strncpy(cc_strdate, str_date, L);

            

        }
};