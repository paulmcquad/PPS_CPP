pro2:  main.o Date.o
	g++ main.o Date.o -o pro2

main.o: main.cxx
	g++ -c main.cxx

Date.o: Date.cxx Date.hxx
	g++ -c Date.cxx

clean:
	$(RM) *.o pro2