/*
 * program1Functions.cpp
 * Author: Wyatt Emery
 * Date: SEP 8, 2017
 *
 * COSC 4785, Homework1
 *
 */

#include"program1.h"

extern void setToken(char* yytext, int yylineno, int column)
{
  token.value = yytext;
  token.line = yylineno;
  token.column = column;
}