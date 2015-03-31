#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "bmi.h"
using namespace std;

int main()
{
	float h,m;
	BMI value;
	ifstream inf("file.in",ios::in);
	ofstream outf("file.out",ios::out);
	while(inf>>h>>m)
	{
		value.seth(h);
		value.setm(m);
		if(value.geth()!=0&&value.getm()!=0)
		outf<<value.bmi()<<" "<<value.category(value.bmi())<<"\n";
	}
return 0;
}
