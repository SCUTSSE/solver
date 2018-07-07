//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//#include <math.h>
//using namespace std;

//
//void readEquation(string& equation)
//{
//    cout << "Please input an equation ( x for unknown quantity )" << endl;
//    cin >> equation;
//    string tmp = equation;
//    for(int i = 0;i < tmp.length();i++)
//    {
//        while(tmp[i]!='+' && tmp[i]!='-' && tmp[i]!='*' && tmp[i]!='/')
//        {
//
//        }
//    }
//
//}
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
//        if(e[i] == '(')
//        {
//            f[count] = '(';
//            fp[count] = i;
//            ++count;
//            continue;
//        }
//        if(e[i] == ')')
//        {
//            f[count] = ')';
//            fp[count] = i;
//            ++count;
//            continue;
//        }
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
	int notxcount = 0;
        for (int i = 0;i < count;++i)
        {

            string s = e.substr((fp[i]+1),(fp[i+1]-fp[i]-1));
            
            if (s.length()!=0)
                n[i+notxcount] = stod(s);
            else
                n[i+notxcount] = 1.0;
			if (f[i + 1] != 'x'&&f[i] != 'x')
			{
				++notxcount;
				n[i + notxcount] = 0.0;
				
			}
			
        }
        //for test only
        for (int i = 0;i < count+notxcount;++i)
        {
            cout << n[i];
        }

        cout << endl;
}



