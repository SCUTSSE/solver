#ifndef MAKE_DATA_ORGANIZED_H
#define MAKE_DATA_ORGANIZED_H

void makeDataOrganized(datum* data)
{
	for (int i = 0;i < 50;++i)
	{
		data[i].a = numbers[i * 2];
		data[i].b = numbers[i * 2 + 1];
	}
	//just for test
//	for (int i = 0;i < 50;++i)
//		cout << data[i].a << " " << data[i].b << " ";
}
#endif
