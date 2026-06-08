#ifndef _CDATE_HPP
#define _CDATE_HPP

#include "IDate.hpp"

class CDate : public IDate
{
    private:
        int day;
        int month;
        int year;

    public:
        CDate(int _day, int _month, int _year);
        void setDay(int new_day);
        void setMonth(int new_month);
        void setYear(int new_year);

        int getDay();
        int getMonth();
        int getYear();
};

#endif /* _CDATE_HPP */