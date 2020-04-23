App:  main.o Date.o Entry.o EntryWithDate.o Name.o TimeOfDay.o AppointmentCalendar.o
	g++ main.o Date.o Entry.o EntryWithDate.o Name.o TimeOfDay.o AppointmentCalendar.o -o App

main.o: main.cxx
	g++ -c main.cxx

Date.o: Date.cxx Date.hxx
	g++ -c Date.cxx

Entry.o: Entry.cxx Entry.hxx
	g++ -c Entry.cxx

EntryWithDate.o: EntryWithDate.cxx EntryWithDate.hxx
	g++ -c EntryWithDate.cxx


Name.o: Name.cxx Name.hxx
	g++ -c Name.cxx


TimeOfDay.o: TimeOfDay.cxx TimeOfDay.hxx RelationType.hxx
	g++ -c TimeOfDay.cxx


AppointmentCalendar.o: AppointmentCalendar.cxx AppointmentCalendar.hxx
	g++ -c AppointmentCalendar.cxx


clean:
	$(RM) *.o App