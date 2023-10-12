#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>

class Date{
    private:
        int day, month, year;
    
    public:
        Date():day(1), month(1), year(1970){

        }
        Date(int _day, int _month, int _year): day(_day),
                                               month(_month),
                                                year(_year){

        }

        Date(const char* date_str)
        {
            size_t L = strlen(date_str);
            assert(L>0);
            char* clone_Date_str = (char*)malloc(L+1);
            clone_Date_str[L] = '\0';
            strncpy(clone_Date_str, date_str, L);

            day = atoi(strtok(clone_Date_str, "/"));
            month = atoi(strtok(NULL,  "/")) ;
            year = atoi(strtok(NULL, "/"));

            free(clone_Date_str);
            clone_Date_str = NULL;

        }

        void show(){
            printf("%d/%d/%d\n", day, month, year);
        }
};

int main(void)
{
    Date myDate;
    Date cpaDate(28, 2, 2015);

}