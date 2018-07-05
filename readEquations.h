#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>
using namespace std;




void split(string e,double* n,char* f,int* fp)
{
    int l = e.length();
    fp[0]=-1;
    f[0]='?';
    int count = 1;
    for(int i = 0;i < l;++i)
    {
        if(e[i] == '+')
        {
            f[count] = '+';
            fp[count] = i;
            ++count;
            continue;
        }
        if(e[i] == '-')
        {
            f[count] = '-';
            fp[count] = i;
            ++count;
            continue;
        }
        if(e[i] == '*')
        {
            f[count] = '*';
            fp[count] = i;
            ++count;
            continue;
        }
        if(e[i] == '/')
        {
            f[count] = '/';
            fp[count] = i;
            ++count;
            continue;
        }
        if(e[i] == '(')
        {
            f[count] = '(';
            fp[count] = i;
            ++count;
            continue;
        }
        if(e[i] == ')')
        {
            f[count] = ')';
            fp[count] = i;
            ++count;
            continue;
        }
        if(e[i] == 'x')
        {
            f[count] = 'x';
            fp[count] = i;
            ++count;
            continue;
        }
        if(e[i] == '=')
        {
            f[count] = '=';
            fp[count] = i;
            ++count;
            continue;
        }
    }

        for (int i = 0;i < count;++i)
        {
            string s = e.substr((fp[i]+1),(fp[i+1]-fp[i]-1));
            if (s.length()!=0)
            n[i] = stod(s);
        }
        //for test only
        for (int i = 0;i < count;++i)
        {
            cout << n[i] << f[i+1];
        }
	cout << endl;
}



