#include "CTemprature_Converter.hpp"

CTemprature_Converter::CTemprature_Converter(double _init_celcius, double _init_fahrenheit, double _init_kelvin)
{
    temprature_in_ceclius = _init_celcius;
    temprature_in_fahrenheit = _init_fahrenheit;
    temprature_in_kelvin = _init_kelvin;
}

double CTemprature_Converter::from_celcius_to_fahrenheit()
{
    return (temprature_in_ceclius * ((double)9/(double)5)) + (double)32;
}

double CTemprature_Converter::from_fahrenheit_to_celcius()
{
    return ((temprature_in_ceclius - (double)32) *((double)5/(double)9));
}

double CTemprature_Converter::from_celcius_to_kelvin()
{
    return temprature_in_ceclius + 273;
}

double CTemprature_Converter::from_kelvin_to_celcius()
{
    return temprature_in_kelvin - 273;
}

ITemprature_Converter* ITemprature_Converter::getTempratureConverterInstance(double _init_celcius, double _init_fahrenheit, double _init_kelvin)
{
    return new CTemprature_Converter(_init_celcius, _init_fahrenheit, _init_kelvin);
}