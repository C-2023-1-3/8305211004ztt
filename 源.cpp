#include<iostream>
#include <iomanip>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	/*int k = 0;*/
	//int k = k + 1;
	//cout << k++ << endl;
	//int i = 1;
	//cout << i++ << endl;
	//cout << "Welcome to C++" << endl;

	//cout << "char length:" << sizeof(char) << endl;
	//cout << "int length:" << sizeof(int) << endl;
	//return 0;

	//unsigned int testUnint = 65534;//oxfffe
	//cout << "output in unsigned int 1 type:"<< testUnint<< endl;        //<<oct;
	//
	//cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	//cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	//cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	//cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	//cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	//cout << "output in unsigned int 1 type:" << oct << testUnint << endl;        //<<oct;
	//cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出

	//double floatingNumber = 3.14;
	//int intNumber = static_cast<int>(floatingNumber);
	//std::cout << "Original floating: " << floatingNumber << endl;
	//std::cout << "Converted integer number: " << intNumber << endl;

	//system("pause");

	//double i;
	//cout << "请输入华氏温度（°F):" ;
	//cin >> i ;
	//cout << fixed << setprecision(2) << ((i - 32) * 5 / 9)  << "（°C）" << endl;

	//实验二第一题
	//char a,b;
	//cin >> a;
	////if(a >= 'A' && a <= 'Z')

	//while (a >= 'a' && a <= 'z')
	//{
	//	cout << char(a-32);
	//	return 0;
	//}
	//while (a >= 'A' && a <= 'Z')
	//{
	//	cin >> b;
	//	cout << int(b)<<endl;
	//}

	//实验二第二题
	//double x;
	//double y;
	//cout << "请输入x的值：" ;
	//cin >> x;
	//if (x > 0 && x < 1) {
	//	y = 3 - 2*x;
	//}
	//else if(x>=1 &&x<5)
	//{
	//	y = 0.5 / x + 1;
	//}
	//else if(x>=5 && x<10)
	//{
	//	y = x * x;
	//}
	//else
	//{
	//	cout << "输入无效，请输入大于零小于10的数！";
	//	return 0;
	//}
	//cout << "y的值是：" << y;
	
	//实验二第三题
	//double a, b, c;
	//double l;
	//cout << "请输入三条边长：";
	//cin >> a >> b >> c;
	//if (a + b > c && a + c > b && b + c > a) {
	//	l = a + b + c;
	//	cout << "该三角形的周长为：" << l<<endl;
	//	if (a == b && a != c or a == c && a != b or b == c && a != c) {
	//		cout << "该三角形是等腰三角形";
	//	}
	//	else
	//	{
	//		cout << "该三角形不是等腰三角形";
	//	}
	//}
	//else
	//{
	//	cout << "三条边不可以构成三角形";
	//}

	//实验二第四题
	//cout << "两个整数之间的+ - * / %运算" << endl;
	//int num1, num2;
	//char op;
	//cout<<"请输入第一个数"<<endl;
	//cin >> num1 ;
	//cout << "请输入+ - * / %" << endl;
	//cin >> op;
	//cout << "请输入第二个数" << endl;
	//cin >> num2;
	//if (num2 == 0){
	//	cout << "Error！除数不能为零。";
	//	return 0;
	//}
	//switch (op)
	//{
	//case  '+': 
	//	cout<< num1 + num2;
	//	break;
	//case '-':
	//	cout << num1 - num2;
	//	break;
	//case '*':
	//	cout << num1 * num2;
	//	break;
	//case '/':
	//	cout << num1 / num2;
	//	break;
	//case '%':
	//	cout << num1 % num2;
	//	break;
	//default:
	//	cout << "Error！请输入正确运算符。";
	//	break;
	//}
	
	//实验二第五题
	string s;
	while (getline(cin, s))
{
	int len = s.length();
	vector<char>m(len);
	for (int i = 0; i < len; i++)
	{
		m[i] = s[i];
	}
	int word = 0;
	int count = 0;
	int n = 0;
	int any = 0;
	for (int i = 0; i < len; i++)
	{
		if ((m[i] >= 'a' && m[i] <= 'z') || (m[i] >= 'A' && m[i] <= 'Z'))
		{
			word += 1;
		}
		else if (m[i] >= '0' && m[i] <= '9')
		{
			count += 1;
		}
		else if (m[i] == ' ')
		{
			n += 1;
		}
		else {
			any += 1;
		}
	}
	cout << word << " ";
	cout << count << " ";
	cout << n << " ";
	cout << any;
	break;
}



	//实验二第六题
	//cout << "请输入两个正整数a , b:";
	//int a, b,c,lcm,a0,b0;
	//cin >> a >> b;
	//a0 = a;
	//b0 = b;
	//c = a % b;
	//while (c!=0)
	//{
	//	a = b;
	//	b = c;
	//	c = a % b;
	//}
	//lcm = a0 * b0 / b;
	//cout << "a 和 b 的最大公约数与最小公倍数分别为：" << b <<" " << lcm;

	//实验二第七题
	//int i,j;
	//for (i = 1; i <= 5; i++) {
	//	for ( j = 1; j <= i; j++)
	//	{
	//		cout << "*";
	//	}
	//	if(i<5)cout << "\n";
	//	
	//}
	
	//实验二第八题
	//double a, x0, x, epson;
	//cout << "请输入a的值：";
	//cin >> a;
	//if (a <= 0) {
	//	cout << "Error！a不能小于等于零";
	//	return 0;
	//}
	////cout << "请输入epson的值：";
	////cin >> epson;
	//epson = 1e-10;
	//x0 = a / 2;
	//x = (x0 + a / x0) / 2;
	//while (fabs(x - x0) > epson)
	//{
	//	x0 = x;
	//	x = (x0 + a / x0) / 2;
	//}
	//cout << "平方根为：" << x << endl;


	
	//实验二第九题
	//double price = 0.8;
	//int num = 2;
	//int day = 1;

	//while ((num +pow(2,day+1))<100) {
	//	num += pow(2, day+1);
	//		day++;

	//}
	//cout << "一共购买了 "<<day <<" 天" << "每天平均花费 " << num * price / day<<"元";

	return 0;
	
	



	//return 0;
}