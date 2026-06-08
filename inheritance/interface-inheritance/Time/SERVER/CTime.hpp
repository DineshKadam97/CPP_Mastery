#ifndef _CTIME_HPP
#define _CTIME_HPP

#include "ITime.hpp"

class CTime : public ITime
{
    private:
        int hour, minutes, seconds;

    public:
        CTime(int _hour, int _minutes, int _seconds);

        void setHour(int);
        void setMinutes(int);
        void setSeconds(int);

        int getHour() const;
        int getMinutes() const;
        int getSeconds() const;
};

#endif /* _CTIME_HPP */