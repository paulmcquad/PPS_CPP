pro7: money.o classmoney.o
	g++ money.o classmoney.o -o pro7

classmoney.o: classmoney.cxx classmoney.hxx 
	g++ -c classmoney.cxx

money.o: money.cxx
	g++ -c money.cxx

clean:
	rm *.o pro7