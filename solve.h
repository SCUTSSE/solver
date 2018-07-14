#ifndef SOLVE_H
#define SOLVE_H
#define EPS 0.00000001
#include <cmath>
int findequal(char* ft)
{
	for (int i = 0;i < 100;++i)
	{
		if (ft[i] == '=')
			return i;
	}
	return -1;
}

int findDataEnd(double* a)
{
    int p=49;
    for(int i=49;i>=0;--i)
        if(a[i]!=0)
        {
            p=i;
            return p;
        }
        return 0;
}

void solve(datum* d)
{
	char *ft= new char[50];
	for(int i = 0;i < 50;++i){ft[i]='+';}
	int count = 0;
	for(int i = 1;i < 50;++i)
	{
		if(functions[i]!='x')
		{
			ft[count]=functions[i];
			++count;
		}
	}
//	for (int i = 0;i<50;++i)
//	cout << ft[i] << " ";
	int equalPos = findequal(ft);
//	cout << equalPos << endl;
	if (equalPos != -1)
	{
		double s = -100;
		while (s <= 100)
		{
			double *out = new double[50]{0};
			for (int i = 0;i < 50;++i)
			{
				out[i] = d[i].a*pow(s, d[i].b);
			}
			for(int i = 0;i < equalPos;++i)
			{
				if(functions[i] == '*')
				{
					out[i+1] *= out [i];
					out[i] = 0;
				}
			}
			int e = findDataEnd(out);
//			cout << e << endl;
//			for(int i = 0;i<10;++i)
//			{
//				cout << out[i] << " ";
//				}
			double sum = out[0];
			double sum2 = 0;
			for(int i = 0;i < equalPos;++i)
			{
				if(ft[i]=='+')
				sum = sum +  out[i+1];
				else if(ft[i]=='-')
				sum = sum - out[i+1];
			}
			for(int i = equalPos;i < e;++i)
			{
				if((ft[i]=='+')||(ft[i]=='='))
				{
				sum2 = sum2 + out[i+1];
				}
				if(ft[i]=='-')
				{
				sum2 = sum2 - out[i+1];
				}
			}

//			cout << sum-sum2 << endl;
			if(abs(sum-sum2)<=EPS)
			cout << "x = " << s << endl;
			s+=0.001;
		}
	}
}

#endif



