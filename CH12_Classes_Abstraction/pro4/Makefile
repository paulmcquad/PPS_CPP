pro4: Entry.o main.o Name.o TimeOfDay.o
	g++ Entry.o main.o Name.o TimeOfDay.o -o pro4

main.o: main.cxx
	g++ -c main.cxx

Name.o: Name.cxx Name.hxx RelationType.hxx
	g++ -c Name.cxx


TimeOfDay.o: TimeOfDay.cxx TimeOfDay.hxx RelationType.hxx
	g++ -c TimeOfDay.cxx

Entry.o: Entry.cxx Entry.hxx
	g++ -c Entry.cxx

clean:
	rm *.o pro4