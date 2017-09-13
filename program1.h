/*
 * program1.h
 * Author: Wyatt Emery
 * Date: SEP 6, 2017
 *
 * COSC 4785, Homework1
 *
 */


#include<string>

#define SPACE 10
#define TAB 11
#define PUNCTUATION 12
#define OPERATOR 13
#define INT 14
#define FLOAT 15
#define SCI 16
#define WORD 17
#define NEWLINE 18
#define ERR 19

typedef struct lexeme Lexeme;

#ifndef PROGRAM1_H
#define PROGRAM1_H

extern Lexeme token;

struct lexeme
{
  std::string value;
  int column;
  int line;
};

extern void setToken(char* yytext, int yylineno, int column);
#endif