BIN  = ql
CC   = g++
SRCS = $(BIN).cpp mat.h mat.cpp # rand.h rand.cpp
LIBS = -lm $(BIN).cpp mat.cpp # rand.cpp
CCFLAGS = -g -std=gnu++11 # -Wall

$(BIN): $(SRCS)
	$(CC) $(CCFLAGS) $(OBJS) $(LIBS) -o $(BIN)

all:    
	touch $(SRCS)
	make

clean:
	rm -f $(BIN) $(BIN).tar *~ $(BIN).output

tar:
	tar -cvf $(BIN).tar $(SRCS) makefile
