Card:  main.o Deck.o Card.o Suits.o Values.o
	g++ main.o Deck.o Card.o Suits.o Values.o -o Card

main.o: main.cxx
	g++ -c main.cxx

Deck.o: Deck.cxx Deck.hxx
	g++ -c Deck.cxx

Card.o: Card.cxx Card.hxx
	g++ -c Card.cxx


Suits.o: Suits.cxx Suits.hxx
	g++ -c Suits.cxx

Values.o: Values.cxx Values.hxx
	g++ -c Values.cxx

clean:
	$(RM) *.o Card