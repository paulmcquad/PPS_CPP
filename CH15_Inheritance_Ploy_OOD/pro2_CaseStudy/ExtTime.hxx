//*****************************************************
// SPECIFICATION FILE for class ExtTime derived from
// class TimeOfDay.  Contains an additional data
// member zone, for time zone in US.
//*****************************************************
#include "ZoneType.hxx"
#include "RelationType.hxx"
#include "TimeOfDay.hxx"
using namespace std;

class ExtTime : public TimeOfDay
{
public:
  // Constructors
  ExtTime(int newHours, int newMinutes, int newSeconds,
          ZoneType newZone);
  ExtTime(); //   setting time to 0:0:0 EST

  // Knowledge responsibilities
  ZoneType GetZone() const;
  // Returns the time zone
  RelationType ComparedTo(ExtTime otherTime) const;
  // Post: Returns
  //       BEFORE if instance is earlier than otherTime
  //       SAME if they are identical
  //       AFTER if instance is later than otherTime
private:
  ZoneType zone;
};
