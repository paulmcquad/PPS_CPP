pro2:  main.o  TimeOfDay.o ExtTime.o
	g++ main.o  TimeOfDay.o ExtTime.o  -o pro2

main.o: main.cxx
	g++ -c main.cxx

TimeOfDay.o: TimeOfDay.cxx TimeOfDay.hxx RelationType.hxx
	g++ -c TimeOfDay.cxx

ExtTime.o: ExtTime.cxx ExtTime.hxx
	g++ -c ExtTime.cxx


clean:
	rm *.o pro2