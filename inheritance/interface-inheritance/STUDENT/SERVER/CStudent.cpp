#include "CStudent.hpp"
#include <iostream>

CStudent::CStudent(int _rollNumber, const char* _name, float _marathi_marks, float _sanskrit_marks,
                                             float _english_marks, float _maths_marks,
                                             float _science_marks, float _social_science_marks)
{
    if(_rollNumber <= 0 || _marathi_marks < 0 || _sanskrit_marks <0 || _english_marks < 0 
        || _maths_marks < 0 || _science_marks < 0 || _social_science_marks < 0)
       {
            throw std::domain_error("Invalid Marks");
       }

    rollNumber = _rollNumber;
    marathiMarks = _marathi_marks;
    sanskritMarks = _sanskrit_marks;
    englishMarks = _english_marks;
    mathsMarks = _maths_marks;
    scienceMarks = _science_marks;
    socialScienceMarks = _social_science_marks;
}

void CStudent::updateMarathiMarks(float marks)
{
    marathiMarks = marks;
}

void CStudent::updateSanskritMarks(float marks)
{
    sanskritMarks = marks;
}

void CStudent::updateEnglishMarks(float marks)
{
    englishMarks = marks;
}

void CStudent::updateMathsMarks(float marks)
{
    mathsMarks = marks;
}

void CStudent::updateScienceMarks(float marks)
{
    scienceMarks = marks;
}

void CStudent::updateSocialScienceMarks(float marks)
{
    socialScienceMarks = marks;
}

float CStudent::calculateAvergae()
{
    return (((float)(marathiMarks + sanskritMarks + englishMarks + mathsMarks + scienceMarks + socialScienceMarks))/ 6);
}

IStudent* IStudent::getStudentInstance(int _rollNumber, const char* _name, float _marathi_marks, float _sanskrit_marks,
                                                                                float _english_marks, float _maths_marks,
                                                                                float _science_marks, float _social_science_marks)
{
    return new CStudent(_rollNumber, _name,_marathi_marks, _sanskrit_marks, _english_marks, _maths_marks,
                                                                                _science_marks, _social_science_marks); 
}