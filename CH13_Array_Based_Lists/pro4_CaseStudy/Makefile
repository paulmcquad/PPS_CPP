pro4:  main.o SortedList.o TimeOfDay.o Name.o Entry.o Student.o StatisticsList.o
	g++ main.o SortedList.o TimeOfDay.o Name.o Entry.o Student.o StatisticsList.o -o pro4

main.o: main.cxx
	g++ -c main.cxx

SortedList.o: SortedList.cxx SortedList.hxx
	g++ -c SortedList.cxx

TimeOfDay.o: TimeOfDay.cxx TimeOfDay.hxx RelationType.hxx
	g++ -c TimeOfDay.cxx

Name.o: Name.cxx Name.hxx RelationType.hxx
	g++ -c Name.cxx

Entry.o: Entry.cxx Entry.hxx
	g++ -c Entry.cxx

Student.o: Student.cxx Student.hxx
	g++ -c Student.cxx

StatisticsList.o: StatisticsList.cxx StatisticsList.hxx
	g++ -c StatisticsList.cxx

clean:
	rm *.o pro4