#ifndef _ITIME_HPP
#define _ITIME_HPP

class ITime
{
    public:
        virtual void setHour(int) = 0;
        virtual void setMinutes(int) = 0;
        virtual void setSeconds(int) = 0;

        virtual int getHour() const = 0;
        virtual int getMinutes() const = 0;
        virtual int getSeconds() const = 0;

        static ITime* getTimeInstance(int _hour, int _minutes, int _seconds);
};

#endif /* _ITIME_HPP */