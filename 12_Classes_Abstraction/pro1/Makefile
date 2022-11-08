
TimeOfDay: client.o TimeOfDay.o
	g++ client.o TimeOfDay.o -o TimeOfDay

client.o: client.cxx
	g++ -c client.cxx

TimeOfDay.o: TimeOfDay.cxx TimeOfDay.hxx RelationType.hxx
	g++ -c TimeOfDay.cxx


clean:
	rm *.o TimeOfDay