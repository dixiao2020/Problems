CFLAGS = -g

design.o:	design.h design.cpp
	g++ -c $(CFLAGS) design.cpp
main:	design.h design.o main.cpp
	g++ -o main $(CFLAGS) design.o main.cpp
clean:
	rm *.o main
