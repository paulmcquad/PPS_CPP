Name: client3.o Name.o
	g++ client3.o Name.o -o Name

client3.o: client3.cxx
	g++ -c client3.cxx

Name.o: Name.cxx Name.hxx RelationType.hxx
	g++ -c Name.cxx


clean:
	rm *.o Name