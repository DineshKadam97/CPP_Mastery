#include <iostream>
#include "ITemprature_converter.hpp"

void testTempratureConverter(void);

int main(void)
{
    testTempratureConverter();
    return 0;
}

void testTempratureConverter(void)
{
    ITemprature_Converter* myConverter = ITemprature_Converter::getTempratureConverterInstance(45, 110, 22);
    std::cout << "Celcius to Farenheit: " << myConverter->from_celcius_to_fahrenheit() << std::endl;
    std::cout << "Farenheit to Celcius: " << myConverter->from_fahrenheit_to_celcius() << std::endl;
    std::cout << "Celcius to Kelvin: " << myConverter->from_celcius_to_kelvin() << std::endl;
    std::cout << "Kelvin to Celcius: " << myConverter->from_kelvin_to_celcius() << std::endl;
}