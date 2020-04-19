pro3:  main.o SortedList.o TimeOfDay.o Name.o Entry.o
	g++ main.o SortedList.o TimeOfDay.o Name.o Entry.o -o pro3

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

clean:
	rm *.o pro3