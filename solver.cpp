#include <iostream>
#include "readEquations.h"
using namespace std;
//Global variables
string equation;
double numbers[100] = {0};
char functions[100];
int fPos[100] = {0};

int main()
{
    cout << "Please input an equation with the format \" axn+bxn+cxn+dxn=exn \" ( x for unknown quantity )" << endl;
    cin >> equation;
    split(equation,numbers,functions,fPos);

}

