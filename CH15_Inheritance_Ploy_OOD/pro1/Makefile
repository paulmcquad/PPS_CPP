pro1:  main.o  TimeOfDay.o Name.o Entry.o ExpandedEntry.o
	g++ main.o  TimeOfDay.o Name.o Entry.o ExpandedEntry.o  -o pro1

main.o: main.cxx
	g++ -c main.cxx

TimeOfDay.o: TimeOfDay.cxx TimeOfDay.hxx RelationType.hxx
	g++ -c TimeOfDay.cxx

Name.o: Name.cxx Name.hxx RelationType.hxx
	g++ -c Name.cxx

Entry.o: Entry.cxx Entry.hxx
	g++ -c Entry.cxx


ExpandedEntry.o: ExpandedEntry.cxx ExpandedEntry.hxx
	g++ -c ExpandedEntry.cxx


clean:
	rm *.o pro1