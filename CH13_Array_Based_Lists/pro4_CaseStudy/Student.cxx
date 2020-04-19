//******************************************
// Implementation file for class Student.
//******************************************
#include "Student.hxx"

Student::Student(float initGrade, string initName)
{
  grade = initGrade;
  name = initName;
}

//**************************************************

string Student::GetName() const
{
  return name;
}

//*************************************************

float Student::GetGrade() const
{
  return grade;
}

//*************************************************

RelationType Student::ComparedTo(Student otherStudent) const
{
  if (grade < otherStudent.grade)
    return BEFORE;
  else if (grade > otherStudent.grade)
    return AFTER;
  else
    return SAME;
}

//**************************************************

Student::Student()
{
}
