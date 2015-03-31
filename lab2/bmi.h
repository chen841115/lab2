#ifndef BMI_H
#define BMI_H

#include <iostream>
#include <string>
using namespace std;
class BMI{
	public:
		void seth(float h);
		float geth();
		void setm(float m);
		float getm();
		float bmi();
		string category(float b);
	private:
		float height;
		float mass;
};

#endif
