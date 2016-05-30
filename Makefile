CC = g++
CFLAGS  = -std=c++11 -g -Wall

byteotia2: byteotia2.o 
	$(CC) $(CFLAGS) byteotia2.o -o byteotia2

byteotia2.o: byteotia2.cpp
	$(CC) $(CFLAGS) -c byteotia2.cpp

clean:
	rm -f *.o
	rm -f byteotia2
