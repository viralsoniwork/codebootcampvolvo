CXX = g++
NAME = myOutput
all: Assignment1.o 
	export LD_LIBRARY_PATH=.
	$(CXX) Assignment1.o -L. -lShape -I Libraries/ -o $(NAME)

Assignment1.o: Assignment1.cpp
	$(CXX) -c Assignment1.cpp -o Assignment1.o
 