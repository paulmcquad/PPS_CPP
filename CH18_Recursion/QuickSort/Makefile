Sort:  Name.o main.o
	g++ Name.o main.o -o Sort

main.o: main.cxx RelationType.hxx QuickSort.hxx
	g++ -c main.cxx


Name.o: Name.cxx Name.hxx RelationType.hxx
	g++ -c Name.cxx


clean:
	$(RM) *.o Sort