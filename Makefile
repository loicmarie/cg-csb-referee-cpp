.PHONY: all test clean
NAME=cgout
MNAME=merged_$(NAME)
CC=g++
CFLAGS=-pg -g -Wall -pedantic -std=c++11 -DNPROD
LDFLAGS=-lm
SRC=Referee.cc AI.cc BasicAI.cc
HFL=Referee.h AI.h BasicAI.h
TOT=$(SRC) $(HFL)
 
all: merged $(NAME) $(MNAME) test clean_test
 
$(MNAME): $(TOT)
	@echo "=============> Compiling the merged $(NAME) <=============="
	$(CC) $(CFLAGS) -o $(MNAME) $(MNAME).cc $(LDFLAGS)
	del $(MNAME).exe
 
$(NAME): $(TOT) CGMain.cc
	@echo "========> Compiling $(NAME) distributed in files <========="
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) CGMain.cc $(LDFLAGS)
 
merged: $(SRC)
	@echo "===========> Building merged file for CG <============="
	python merge.py
 
test: $(TOT)
	@echo "========> Compiling tests <========="
	$(CC) $(CFLAGS) -o tests/prog $(SRC) test.cc $(LDFLAGS)
	@echo "========> Running tests <========="
	tests\prog.exe
 
clean:
	del *.pyc *~ *o $(MNAME).cc $(MNAME).exe $(NAME).exe

clean_test:
	del tests\prog.exe