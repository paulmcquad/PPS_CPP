pro6:  test.o TimeOfDay.o
	g++ test.o TimeOfDay.o -o pro6

test.o: test.cxx
	g++ -c test.cxx


TimeOfDay.o: TimeOfDay.cxx TimeOfDay.hxx RelationType.hxx
	g++ -c TimeOfDay.cxx


clean:
	rm *.o pro6
