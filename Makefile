#	Author: John Gibbons modified by Alex Bardas modiied by Anna Seib
#	Date: 2016.10.26


#Add needed Test.o

prog: main.o Test.o
	g++ -g -Wall -std=c++11 main.o Test.o LinkedListOfInts.o -o prog

main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp

#Add needed Test.o recipe and compiler command
Test.o: Test.h Test.cpp
	g++ -Wall -std=c++11 -c Test.h Test.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o Test.o *.*~ prog
	
	#added Test.o
