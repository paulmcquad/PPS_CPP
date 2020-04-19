
TimeOfDay2: client2.o TimeOfDay2.o
	g++ client2.o TimeOfDay2.o -o TimeOfDay2

client2.o: client2.cxx
	g++ -c client2.cxx

TimeOfDay2.o: TimeOfDay2.cxx TimeOfDay2.hxx RelationType.hxx
	g++ -c TimeOfDay2.cxx


clean:
	rm *.o TimeOfDay2