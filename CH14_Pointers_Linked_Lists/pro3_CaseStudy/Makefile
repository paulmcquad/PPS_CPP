pro3:  main.o  TimeOfDay.o Name.o Entry.o SortedList.o
	g++ main.o  TimeOfDay.o Name.o Entry.o SortedList.o -o pro3

main.o: main.cxx
	g++ -c main.cxx

TimeOfDay.o: TimeOfDay.cxx TimeOfDay.hxx RelationType.hxx
	g++ -c TimeOfDay.cxx

Name.o: Name.cxx Name.hxx RelationType.hxx
	g++ -c Name.cxx

Entry.o: Entry.cxx Entry.hxx
	g++ -c Entry.cxx

SortedList.o: SortedList.cxx SortedList.hxx
	g++ -c SortedList.cxx

clean:
	rm *.o pro3