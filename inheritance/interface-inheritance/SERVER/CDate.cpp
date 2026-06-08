#include "CDate.hpp"

CDate::CDate(int _day, int _month, int _year)
{
    this->day = _day;
    this->month = _month;
    this->year = _year;
}

void CDate::setDay(int new_day)
{
    this->day = new_day;
}

void CDate::setMonth(int new_month)
{
    this->month = new_month;
}

void CDate::setYear(int new_year)
{
    this->year = new_year;
}

int CDate::getDay()
{
    return day;
}

int CDate::getMonth()
{
    return month;
}

int CDate::getYear()
{
    return year;
}

IDate* IDate::getInstance(int _init_day, int _init_month, int _init_year)
{
    return new CDate(_init_day, _init_month, _init_year);
}