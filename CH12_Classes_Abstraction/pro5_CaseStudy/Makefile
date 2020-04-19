pro5: NameByTime.o Name.o
	g++ NameByTime.o Name.o -o pro5


NameByTime.o: NameByTime.cxx
	g++ -c NameByTime.cxx

main.o: main.cxx
	g++ -c main.cxx

Name.o: Name.cxx Name.hxx RelationType.hxx
	g++ -c Name.cxx

clean:
	rm *.o pro5