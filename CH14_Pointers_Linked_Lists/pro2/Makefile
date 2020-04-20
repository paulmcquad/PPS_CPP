pro2:   list.o main.o 
	g++  list.o  main.o -o pro2

main.o: main.cxx
	g++ -c main.cxx

list.o: list.cxx list.hxx
	g++ -c list.cxx


clean:
	rm *.o pro2