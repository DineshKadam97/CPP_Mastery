#ifndef _CSTUDENT_HPP
#define _CSTUDENT_HPP

#include "IStudent.hpp"

class CStudent : public IStudent
{
    private:
        int rollNumber;
        const char* name;
        float marathiMarks;
        float sanskritMarks;
        float englishMarks;
        float mathsMarks;
        float scienceMarks;
        float socialScienceMarks;

    public:
        CStudent(int _rollNumber, const char* _name, float _marathi_marks, float _sanskrit_marks,
                                                     float _english_marks, float _maths_marks,
                                                     float _science_marks, float _social_science_marks);

        void updateMarathiMarks(float marks);
        void updateSanskritMarks(float marks);
        void updateEnglishMarks(float marks);
        void updateMathsMarks(float marks);
        void updateScienceMarks(float marks);
        void updateSocialScienceMarks(float marks);
        float calculateAvergae();
};

#endif /* _CSTUDENT_HPP */
