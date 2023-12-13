#include<iostream>
#include <iomanip>
#include<vector>
#include<string>
#include<cmath>
#include "mytemperature.h"
#define pi 3.1415926
using namespace std;
//摄氏温度到华氏温度
double celsius_to_fah(double cel) {
	double fah = (cel * 9 / 5 + 32);
	
	return fah;
}
//华氏温度到摄氏温度
double fahrenheit_to_cels(double fah) {
	double cel = ((fah - 32) * 5 / 9);
	
	return cel;
}

