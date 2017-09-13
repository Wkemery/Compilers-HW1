/*
 * program1.cpp
 * Author: Wyatt Emery
 * Date: SEP 6, 2017
 *
 * COSC 4785, Homework1
 *
 */

#include<iostream>
#include<FlexLexer.h>
#include<string>
#include"program1.h"
using namespace std;

int main()
{
    yyFlexLexer myScanner;
    int rtn = 0;
    
    bool firstScan = true;
    
    
    while((rtn=myScanner.yylex()) != 0)
    {
        if(firstScan)
        {
            firstScan = false;
            cout << "Line" << "\t" << "Column" << "\t" << "Type" << "\t" << "Length" 
            << "\t" << "Value" << endl;
        }
        
        cout << token.line << "\t";
        cout << token.column << "\t";
        cout << (rtn - 10) << "\t";
        cout << token.value.length() << "\t";
        if((rtn != SPACE) && (rtn != TAB) && (rtn != NEWLINE))
            cout << token.value;
        cout << endl;   
        
    }
  
    return 0;
  
}
