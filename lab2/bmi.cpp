#include <iostream>
#include <string>
#include <cstdlib>
#include "bmi.h"
using namespace std;

void BMI::seth(float h){height=h;}
float BMI::geth(){return height;}
void BMI::setm(float m){mass=m;}
float BMI::getm(){return mass;}
float BMI::bmi(){
	float b;
	b=mass/(height*height*0.0001);
	return b;
}
string BMI::category(float b){
if(b<15)
return "Very severely underweight";
if(b>=15&&b<16)
return "Severely underweight";
if(b>=16&&b<18.5)
return "Underweight";
if(b>=18.5&&b<25)
return "Normal";
if(b>=25&&b<30)
return "Overweight";
if(b>=30&&b<35)
return "Obese Class I(Moderately obese)";
if(b>=35&&b<40)
return "Obese Class II(Severely obese)";
if(b>=40)
return "Obese Class III(Very severely obese)";
}





