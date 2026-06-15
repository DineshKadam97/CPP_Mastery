#ifndef _CTEMPRATURE_CONVERTER_HPP
#define _CTEMPRATURE_CONVERTER_HPP

#include "ITemprature_converter.hpp"

class CTemprature_Converter : public ITemprature_Converter
{
    private:
        double temprature_in_ceclius;
        double temprature_in_fahrenheit;
        double temprature_in_kelvin;

    public:
        CTemprature_Converter(double _init_celcius, double _init_fahrenheit, double _init_kelvin);
        double from_celcius_to_fahrenheit();
        double from_fahrenheit_to_celcius();
        double from_celcius_to_kelvin();
        double from_kelvin_to_celcius();
};

#endif /* _CTEMPRATURE_CONVERTER_HPP */