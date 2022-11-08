pro2:  main.o SortedList.o
	g++ main.o SortedList.o -o pro2

main.o: main.cxx
	g++ -c main.cxx

SortedList.o: SortedList.cxx SortedList.hxx
	g++ -c SortedList.cxx


clean:
	rm *.o pro2
