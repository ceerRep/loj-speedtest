CXX = clang++

SRC = loj-speedtest.cpp loop.cpp eular.cpp floyd.cpp stdset.cpp stdnew.cpp memory-cache.cpp integer.cpp floattest.cpp pipeline.cpp

OBJ = ${patsubst %.cpp, %.o, $(SRC)}

CXXFLAGS = -Ofast -march=native

all : loj-speedtest

$(OBJ) : %.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

loj-speedtest : $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean :
	$(RM) loj-speedtest *.o

.PHONY : clean
