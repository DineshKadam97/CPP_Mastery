#ifndef _STUDENT_HPP
#define _STUDENT_HPP

class IStudent
{
    public:
        virtual void updateMarathiMarks(float marks) = 0;
        virtual void updateSanskritMarks(float marks) = 0;
        virtual void updateEnglishMarks(float marks) = 0;
        virtual void updateMathsMarks(float marks) = 0;
        virtual void updateScienceMarks(float marks) = 0;
        virtual void updateSocialScienceMarks(float marks) = 0;
        virtual float calculateAvergae() = 0;

        static IStudent* getStudentInstance(int _rollNumber, const char* _name, float _marathi_marks, float _sanskrit_marks,
                                                                                float _english_marks, float _maths_marks,
                                                                                float _science_marks, float _social_science_marks);
};

#endif /*_STUDENT_HPP */
