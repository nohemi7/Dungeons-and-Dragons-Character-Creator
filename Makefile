CXX = g++ -std=c++11 -g

CharCreator: CharCreator.cpp
	${CXX} CharCreator.cpp -o CharCreator

clean:
	rm -f *.o CharCreator