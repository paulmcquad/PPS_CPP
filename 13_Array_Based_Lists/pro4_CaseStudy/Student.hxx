#ifndef STUDENT_HXX
#define STUDENT_HXX
#include <string>
#include "RelationType.hxx"
using namespace std;

class Student
// This class represents a student name's with a grade
{
public:
  Student(float initGrade, string initName);
  Student();
  string GetName() const;
  float GetGrade() const;
  RelationType ComparedTo(Student otherStudent) const;
  // Compares using grade field
private:
  string name; // First and last name in string form
  float grade;
};
#endif