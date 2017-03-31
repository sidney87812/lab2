main: Cls.o main.o
	g++ -o main main.o Cls.o

Cls.o: Cls.cpp Cls.h
	g++ -c Cls.cpp

main.o: main.cpp Cls.h
	g++ -c main.cpp

clean:
	rm Cls *.o
