CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++11 -g

BIN = BinaryTree
SRCS = main.cpp BinaryTree.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(BIN)

$(BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

run:
	./$(BIN)

clean:
	rm -f $(OBJS) $(BIN)

BinaryTree.o: BinaryTree.cpp BinaryTree.h
	$(CXX) $(CXXFLAGS) -c BinaryTree.cpp -o BinaryTree.o