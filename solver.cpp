#include <iostream>
#include "readEquations.h"

using namespace std;

struct datum
{
	double a;
	double b;
};
//Global variables
string equation;
double numbers[100] = {0};
char functions[100];
int fPos[100] = {0};
datum* d = new datum[50];
#include "makeDataOrganized.h"
#include "solve.h"
int main()
{
    for(int i=0;i<100;++i)
    functions[i]='+';
    cout << "Please input an equation, a*x^n represented by axn" << endl;
    cin >> equation;
    split(equation,numbers,functions,fPos);
    makeDataOrganized(d);
    solve(d);
    return 0;

}

