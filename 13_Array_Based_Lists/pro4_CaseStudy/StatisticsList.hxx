//*************************************************
// This class bundles a list of student name/grade
// data together with operations that process it.
//*************************************************
#include <fstream>
#include "Student.hxx"
#include "SortedList.hxx"

typedef Student ItemType;
class StatisticsList
{
public:
  StatisticsList(ifstream &inFile);
  // Constructs list of students
  // Calculates aerage, maxGrade, number below the average
  float GetAverage() const;
  // Returns average of the grades
  float GetMaxGrade() const;
  // Returns maximum grade
  int GetAboveAverage() const;
  // Returns the number of students whose grade was above the average
  int GetBelowAverage() const;
  // Returns the number of students whose grade was below the average
  float GetMinGrade();
  // Returns the minimum grade
  void StudentsMaxGrade(ofstream &outFile);
  // Prints the student(s) with the maximum grade on file outFile
  void StudentsAbove(ofstream &outFile);
  // Prints the students whose grades were average or above
  void StudentsBelow(ofstream &outFile);
  // Prints the students whose grades were below average
private:
  float average;
  float maxGrade;
  int numBelow;
  SortedList list; // list of grade/name pairs
};
