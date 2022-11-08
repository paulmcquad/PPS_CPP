pro1:  main.o list.o
	g++ main.o list.o -o pro1

main.o: main.cxx
	g++ -c main.cxx



list.o: list.cxx list.hxx
	g++ -c list.cxx


clean:
	rm *.o pro1
