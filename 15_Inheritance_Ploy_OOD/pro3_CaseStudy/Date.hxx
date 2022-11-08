//****************************************
// SPECIFICATION File for a Date ADT
//****************************************

#include "RelationType.hxx"
class Date
{
public:
  Date();
  Date(int initMonth, int initDay, int initYear);
  // Knowledge Responsibilities
  int GetMonth() const;
  int GetDay() const;
  int GetYear() const;
  RelationType ComparedTo(Date otherDate) const;
  // Post: Returns BEFORE if instance comes before otherdEntry;
  //       Returns SAME if instance and otherEntry are the same;
  //       Returns AFTER if instance comes after otherEntry;

private:
  int month;
  int day;
  int year;
};
