CXX      = g++
CXX_FILE = $(wildcard src/*.cpp)
TARGET   = bignum
CXXFLAGS = -g -std=c++11 -Wall -Werror -pedantic-errors -fmessage-length=0
HEADERS  = include

all:
	$(CXX) $(CXXFLAGS) $(CXX_FILE) -I $(HEADERS) -o $(TARGET).out
clean:
	rm -f $(TARGET) $(TARGET).out $(TARGET).exe

BigNumTest: bignum.cpp BigNum.hh
	g++ -g -c bignum.cpp