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

int main()
{
//    for(int i = 0;i<50;++i)
//        numbers[2*i] = 1;
    cout << "Please input an equation, a*x^n represented by axn" << endl;
    cin >> equation;
    split(equation,numbers,functions,fPos);
    makeDataOrganized(d);

}
