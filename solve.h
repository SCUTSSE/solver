#ifndef SOLVE_H
#define SOLVE_H
#define EPS 0.000000005
#include <cmath>
int findequal()
{
	for (int i = 0;i < 100;++i)
	{
		if (functions[i] == '=')
			return i;
	}
	return -1;
}
void solve(datum* d)
{
	int equalPos = findequal();
	if (equalPos != -1)
	{
		double s = -100;
		while (s <= 100)
		{
			double out[50]={0};
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
//			for(int i = 0;i<50;++i)
//			{
//				cout << out[i] << " ";
//				}
			double sum = 0.0;
			int xcnt=0;
			for(int i = 0;i < equalPos;++i)
			{
				sum += out[i];
			}
			for(int i = equalPos;i < 50;++i)
			{
				sum -= out[i];
			}
			if(abs(sum)<=EPS)
				cout << "x = " << s << endl;
			s+=0.00001;
		}
	}
}

#endif 


