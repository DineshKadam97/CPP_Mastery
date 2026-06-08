#ifndef _IDATE_HPP
#define _IDATE_HPP

class IDate
{
    public:
        virtual void setDay(int new_day)=0;
        virtual void setMonth(int new_month)=0;
        virtual void setYear(int new_year)=0;

        virtual int getDay()=0;
        virtual int getMonth()=0;
        virtual int getYear()=0;

        static IDate* getInstance(int _init_day, int _init_month, int _init_year);
};

#endif /* _IDATE_HPP */