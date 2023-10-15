bin/testListArray: testListArray.cpp ListArray.h List.h
	mkdir -p bin
	g++ -o bin/testListArray testListArray.cpp ListArray.h
bin/testListLinked: testListLinked.cpp ListLinked.h Node.h
	mkdir -p bin
	g++ -o bin/testListLinked testListLinked.cpp ListLinked.h

clean:
	rm -r *.o *.gch bin
