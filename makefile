HEADERS = Histo.h
OBJECTS = lab07.o Histo.o

default: lab07

%.o: %.cpp $(HEADERS)
	g++ -c $< -o $@

lab07: $(OBJECTS)
	g++ -g $(OBJECTS) -o $@

clean:
	-rm -f $(OBJECTS)
	-rm -f lab07
	
	
