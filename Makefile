##############################
# Makefile
# Author: Wyatt Emery
# Date: SEP 6, 2017
#
# COSC 4785, Homework 1
# 
# this will compile and generate an executable from program1.cpp
##############################

CC=g++
CFLAGS=-ggdb -Wall

.PHONY: clean


all: flex program1

flex: program1.lpp
	flex++ --warn program1.lpp

program1: program1.cpp program1_lex.cpp program1Functions.cpp 
	${CC} ${CFLAGS} program1.cpp program1_lex.cpp program1Functions.cpp -o program1

clean: 
	/bin/rm -f *.o program1 program1_lex.cpp
