#include<iostream>
#include <iomanip>
#include<vector>
#include<string>
#include<cmath>
#include "mytemperature.h"
#define pi 3.1415926
using namespace std;
//�����¶ȵ������¶�
double celsius_to_fah(double cel) {
	double fah = (cel * 9 / 5 + 32);
	
	return fah;
}
//�����¶ȵ������¶�
double fahrenheit_to_cels(double fah) {
	double cel = ((fah - 32) * 5 / 9);
	
	return cel;
}

