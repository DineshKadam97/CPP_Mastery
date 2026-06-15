// 8. Temperature Conversion Library

// Create a library that converts temperatures.

// Requirements:

// Celsius to Fahrenheit
// Fahrenheit to Celsius
// Celsius to Kelvin
// Kelvin to Celsius

#ifndef _ITEMPRATURE_CONVERTER_HPP
#define _ITEMPRATURE_CONVERTER_HPP

class ITemprature_Converter
{
    public:
        virtual double from_celcius_to_fahrenheit() = 0;
        virtual double from_fahrenheit_to_celcius() = 0;
        virtual double from_celcius_to_kelvin() = 0;
        virtual double from_kelvin_to_celcius() = 0;

        static ITemprature_Converter* getTempratureConverterInstance(double _init_celcius, double _init_fahrenheit, double _init_kelvin);
};

#endif /* _ITEMPRATURE_CONVERTER_HPP */
