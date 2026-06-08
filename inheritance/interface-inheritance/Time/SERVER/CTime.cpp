#include <stdexcept>
#include "CTime.hpp"

CTime::CTime(int _hour, int _minutes, int _seconds)
{
    if(_hour < 0 || _minutes < 0 || seconds < 0)
    {
        throw std::domain_error("INVALID TIME...");
    }
    
    if(_seconds >= 60)
    {
        _minutes = _minutes + ((_seconds)/60);
        _seconds = _seconds % 60;
    }

    if(_minutes >= 60)
    {
        _hour = _hour + ((_minutes)/60);
        _minutes = _minutes % 60;
    }

    if(_hour >= 24)
    {
        throw std::domain_error("INVALID TIME...");
    }
    hour = _hour;
    minutes = _minutes;
    seconds = _seconds;
}

void CTime::setHour(int _hour)
{
    hour = _hour;
}

void CTime::setMinutes(int _minutes)
{
    minutes = _minutes;
}

void CTime::setSeconds(int _seconds)
{
    seconds = _seconds;
}

int CTime::getHour() const
{
    return hour;
}

int CTime::getMinutes() const
{
    return minutes;
}

int CTime::getSeconds() const
{
    return seconds;
}

ITime* ITime::getTimeInstance(int _hour, int _minutes, int _seconds)
{
    return new CTime(_hour, _minutes, _seconds);
}
