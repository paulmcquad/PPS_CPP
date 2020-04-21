pro3:  main.o Name.o TimeOfDay.o EntryWithDate.o List.o Entry.o Date.o AppointmentCalendar.o
	g++ main.o Name.o TimeOfDay.o EntryWithDate.o List.o Entry.o Date.o AppointmentCalendar.o -o pro3

main.o: main.cxx
	g++ -c main.cxx

TimeOfDay.o: TimeOfDay.cxx TimeOfDay.hxx RelationType.hxx
	g++ -c TimeOfDay.cxx

EntryWithDate.o: EntryWithDate.cxx EntryWithDate.hxx
	g++ -c EntryWithDate.cxx


Entry.o: Entry.cxx Entry.hxx
	g++ -c Entry.cxx


Name.o: Name.cxx Name.hxx
	g++ -c Name.cxx

List.o: List.cxx List.hxx
	g++ -c List.cxx


Date.o: Date.cxx Date.hxx
	g++ -c Date.cxx


AppointmentCalendar.o: AppointmentCalendar.cxx AppointmentCalendar.hxx
	g++ -c AppointmentCalendar.cxx


clean:
	$(RM) *.o pro3