CXX = g++
CXXFLAGS = -std=c++17 -g -Wall
OS_NAME = $(shell uname -o)

ifeq ($(OS_NAME), Msys)
LIBS = -lfltk -mwindows -DWIN32 -lole32 -luuid -lcomctl32
EXT = .exe
endif
ifeq ($(OS_NAME), GNU/Linux)
LIBS = -lfltk
EXT = 
endif

TAR = SimpleWidgets

$(TAR)$(EXT): $(TAR).cpp
	$(CXX) $< -o $@ $(CXXFLAGS) $(LIBS);./$@

clean:
	-rm $(TAR)$(EXT)