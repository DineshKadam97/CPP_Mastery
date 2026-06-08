#ifndef _IDATE_HPP
#define _IDATE_HPP

class IDate
{
    public:
        virtual void setDay(int new_day);
        virtual void setMonth(int new_month);
        virtual void setYear(int new_year);

        virtual int getDay();
        virtual int getMonth();
        virtual int getYear();

        static IDate* getInstance(int _init_day, int _init_month, int _init_year);
};

#endif /* _IDATE_HPP */