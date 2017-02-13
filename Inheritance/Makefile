all: Mobile.o IPhone.o main.o
	g++ Mobile.o IPhone.o main.o -o application.exe

Mobile.o: Mobile.cpp
	g++ -c Mobile.cpp -I inc

IPhone.o: IPhone.cpp
	g++ -c IPhone.cpp -I inc

main.o: main.cpp
	g++ -c main.cpp -I inc

clean:
	rm -f *.o *.exe
