#include<iostream>
#include <iomanip>
#include<vector>
#include<string>
#include<cmath>
#include<iostream>
#include "mytemperature.h"
#include "stdio.h"
#define pi0 3.1415926
using namespace std;
std::pair<int, int> gcd_lcm(int a, int b);
void getgcd_lcm(int a ,int b, int& gcd, int& lcm);
bool is_prime(int num);
int getPeachNumber(int n);
void merge(const int list1[], int size1, const int list2[], int size2, int list3[],int size3);
int indexOf(const char s1[], const char s2[]);
void count(const char s[], int counts[]);
void f(char* st, int i);
int* f();
int indexof(const char* s1, const char* s2);
int parseHex(const char* const hexString);
void bubbleSort(int list[], int size);
int main()
{
	//实验一第一题
	/*int k = 0;*/
	//int k = k + 1;
	//cout << k++ << endl;
	//int i = 1;
	//cout << i++ << endl;
	//cout << "Welcome to C++" << endl;

	//实验一第二题
	//     cout << "请输入圆锥底的半径、锥高:\n";
	//double r, h, w;
	//cin >> r >> h;
	//double V = 0;
	//V = pi0 * r * r * h / 3;
	//cout << "该圆锥体积为：" << V << endl;


	//return 0;
	//实验一第三题
	//cout << "char length:" << sizeof(char) << endl;
	//cout << "int length:" << sizeof(int) << endl;
	//return 0;
	// 
	//实验一第四题
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

	//实验一第五题
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
//	string s;
//	while (getline(cin, s))
//{
//	int len = s.length();
//	vector<char>m(len);
//	for (int i = 0; i < len; i++)
//	{
//		m[i] = s[i];
//	}
//	int word = 0;
//	int count = 0;
//	int n = 0;
//	int any = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if ((m[i] >= 'a' && m[i] <= 'z') || (m[i] >= 'A' && m[i] <= 'Z'))
//		{
//			word += 1;
//		}
//		else if (m[i] >= '0' && m[i] <= '9')
//		{
//			count += 1;
//		}
//		else if (m[i] == ' ')
//		{
//			n += 1;
//		}
//		else {
//			any += 1;
//		}
//	}
//	cout << word << " ";
//	cout << count << " ";
//	cout << n << " ";
//	cout << any;
//	break;
//}



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

	//实验三第一题
	//(1)
	//cout << "请输入两个正整数m , n:" << endl;
	//int m, n;
	//cout << "m = ";
	//cin >> m;
	//cout << "n = ";
	//cin >> n;
	//std::pair<int, int> result = gcd_lcm(m, n);
	//cout << "a 和 b 的最大公约数与最小公倍数分别为：" << result.first << " " << result.second;
	//(2)
	//cout << "请输入两个正整数m , n:" << endl;
	//int m, n,gcd,lcm;
	////gcd= 0;
	////lcm =0;
	//cout << "m = ";
	//cin >> m;
	//cout << "n = ";
	//cin >> n;
	//getgcd_lcm(m, n,gcd,lcm);
	//cout << "a 和 b 的最大公约数与最小公倍数分别为：" << gcd << " " << lcm;

	//实验三第二题
	//int count=0;
	//int i = 2;
	//while (count < 200) {
	//	if (is_prime(i)) {
	//		count++;
	//		cout <<"\t" << i;
	//		if (count % 10 == 0) {
	//			cout << endl;
	//		}
	//	}
	//		i++;
	//}
	//实验三第三题
	//cout << "Celsius\tFahrenheit" << "\t|\t" << "Fahrenheit\tCelsius"<<endl;
	//double cels= 40.0;
	//double fahs= 120.0;
	//while (cels>30.0&&fahs>20.0)
	//{
	//	cout << cels << "\t"<< fixed << setprecision(1) <<  celsius_to_fah(cels)<<"\t\t|\t"<< fahs << "\t\t" << fixed << setprecision(2) <<  fahrenheit_to_cels(fahs)<<endl;
	//	cels = cels-1;
	//	fahs = fahs - 10;
	//}

	//实验三第五题
	//int num = getPeachNumber(1);
	//cout << "猴子第1天摘了" << num << "个桃子"<<endl;

	//实验四数组第一题
	//const int size = 10;
	//int a[size];
	//cout << "Please enter ten numbers : " ;
	//for (int i = 0; i < size; i++)
	//	cin >> a[i];
	//cout << "The distinct numbers are : " ;
	//cout << a[0] << " ";
	//for (int m = 1; m < size; m++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		if (a[m] != a[j])
	//		{
	//			if (j == m - 1)
	//				cout << a[m] << " ";
	//			else
	//				continue;
	//		}
	//		else
	//			break;
	//	}
	//}
	//cout << endl;
	// 
	//实验四数组第二题
	//const int listSize = 10;
	//int list[listSize];
	//int temp;
	//bool changed = true;
	//cout << "Please enter ten numbers : " ;
	//for (int i = 0; i < listSize; i++)
	//	cin >> list[i];
	//do
	//{
	//	changed = false;
	//	for (int j = 0;j < listSize-1; j++)
	//		if (list[j] > list[j + 1])
	//		{
	//			temp = list[j];
	//			list[j] = list[j + 1];
	//			list[j + 1] = temp;
	//			changed = true;
	//		}
	//} while (changed);

	//for (int k = 0; k < listSize; k++)
	//	cout << list[k] << " ";
	//cout << endl;

	//实验四数组第三题
	//const int listSize = 100;
	//bool list[listSize];
	//for (int i = 0; i < listSize; i++)
	// list[i]=0;
	//for (int i = 0; i < listSize; i++)
	//{
	//	for (int j = i; j < listSize; j+= i+1) {
	//		/*list[j] = ~list[j];*/
	//		//cout << "第" <<i<< "个同学" <<"第"<<j<<"个箱子"<< list[j];
	//		if (list[j])
	//			list[j] = false;
	//		else
	//			list[j] = true;
	//	}
	//	//cout << endl;
	//}
	//for (int i = 0; i < listSize; i++) {
	//	if (list[i]&&i<listSize-1) {
	//		cout << i+1 << " ";
	//	}
	//	else if(list[i])
	//	{
	//		cout << i+1;
	//	}
	//}
	
	//实验四数组第四题
	//int size1, size2, size3;
	//cout << "Enter list1: ";
	//cin >> size1;
	//int list1[80];
	//for (int i = 0; i < size1; i++)
	//	cin >> list1[i];

	//cout << "Enter list2: ";
	//cin >> size2;
	//int list2[80];
	//for (int i = 0; i < size2; i++)
	//	cin >> list2[i];

	//size3 = size1 + size2;
	//int list3[160];
	//merge(list1, size1, list2, size2, list3,size3);
	//cout << endl;

	//实验四数组第五题
	//const int size = 999;
	//char s1[size], s2[size];
	//cout << "Enter the first string : ";
	//cin.getline(s1, size);
	//cout << "Enter the second string: ";
	//cin.getline(s2, size);
	//cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;

	//实验四数组第六题
	//const int size = 999;
	//const int sum = 26;
	//char s1[size];
	//int counts[sum];
	//for (int m = 0; m < sum; m++)
	//	counts[m] = 0;
	//cout << "Enter a string : ";
	//cin.getline(s1, size);
	//count(s1, counts);

	//实验四指针第一题
	//int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符
	//pi = &i;
	//pj = &j;
	//i = 5; j = 7;
	//cout << i << '\t' << j << '\t' << pi << '\t'  << pj<<endl;
	//cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;

	//实验四指针第二题
	//int a[] = { 1,2,3 };
	//int* p, i;
	//p = a;    //将数组a首地址送给p
	//for (i = 0; i < 3; i++)
	//	printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //与cout功能差不多

	//实验四指针第三题
	//char st[] = "abcd";
	//f(st, 4);

	//实验四指针第四题
	//int* p = f();
	//cout << p[0] << endl;
	//cout << p[1] << endl;
	//delete p;

	//实验四程序设计第一题
	//const int size = 999;
	//char s1[size], s2[size];
	//cout << "Enter the first string : ";
	//cin.getline(s1, size);
	//cout << "Enter the second string: ";
	//cin.getline(s2, size);
	//cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;

	//实验四程序设计第二题
	//const int size = 999;
	//char s[size];
	//cout << "Please enter a number in hexChar : \n";
	//cin.getline(s, size);
	//cout << "Tne number " << s << " in hexChar is " << parseHex(s) << " in decimal\n";

	//实验四程序设计第四题
	int size=0;
	cout << "请输入元素个数:";
	cin >> size;
	int* list = new int[size];
	int* p = list;
	cout << "请输入数组元素:";
	for (int i = 0; i < size; i++, p++) {
		cin >> *p;  //利用指针读取数据   
		cout << "指针指向的地址：" << p;
		cout << "\t指针指向的元素：" << *p << endl;
	}
	bubbleSort(list, size);
	cout << "The list is : ";
	p = list;
	for (int a = 0; a < size; a++,p++)
		cout << *p << "  ";
	cout << endl;
	p = list;
	for (int i = 0; i < size; i++, p++) {
		cout << "指针指向的地址：" << p;
		cout << "\t指针指向的元素：" << *p << endl;
	}
	delete [] list;
	return 0;
	}
	void bubbleSort(int list[], int size) {
		int temp;
		for (int m = 0; m < size - 1; m++)
			for (int b = 0; b < size - 1; b++)
				if (list[b] > list[b + 1])
				{
					temp = list[b];
					list[b] = list[b + 1];
					list[b + 1] = temp;
				}
		//int size = sizeof(list) / sizeof(list[0]) 计算不了数组大小
		/*cout << size;*/
	}

	int parseHex(const char* const hexString) {
		unsigned i, num = 0;
		for (i = 0; hexString[i]; ++i) {
			if (hexString[i] >= 'a' && hexString[i] <= 'f')
				num = 16 * num + hexString[i] - 'a' + 10;
			else if (hexString[i] >= 'A' && hexString[i] <= 'F')
				num = 16 * num + hexString[i] - 'A' + 10;
			else if (hexString[i] >= '0' && hexString[i] <= '9')
				num = 16 * num + hexString[i] - '0';
		}
		return num;
	}

	int indexof(const char* s1, const char* s2) {
		int a, b, index, j, k;
		a = strlen(s1);
		b = strlen(s2);
		bool s3[999];
		for (int m = 0; m < a; m++)
			s3[m] = false;
		for (int i = 0; i < b - a + 1; i++)      //控制s2的首字母
		{
			for (j = 0, k = i; (j < a) && (k < i + a); j++, k++)      //控制s2的总输出数
				if (s1[j] == s2[k])
				{
					index = i;
					s3[j] = true;
				}
			int h = 0;
			for (int n = 0; n < a; n++)
			{
				if (s3[n] == false && i == b - a)
				{
					return -1; break;
				}
				if (s3[n])
					h++;
			}
			if (h == a)
			{
				return index;
			}
		}
	}
	int* f()
	{
		int* list = new int[4];
		for (int i = 0, j = 1; i < 4; i++, j++)
			list[i] = j;
		return list;
	}

	void f(char* st, int i)
	{
		st[i] = '\0';
		cout << st <<endl;   // printf(“%s\n”,st);
		if (i > 1) f(st, i - 1);
	}

	void count(const char s[], int counts[]) {
		//s的第一个开始
		for (int i = 0; i < strlen(s); i++)
		{
			//遍历a-z 是否为a   如果是其中的则 ++ 否则下一个b  直到z 然后下一个字符 char(0+97)='a'
			for (int j = 0; j +97< 123; j++) {
				if (s[i] == char(j + 97) or s[i] == char(j + 65)) {
					counts[j]++;
				}
			}
		}
		for (int a = 0; a < 26; a++)
			if (counts[a]) {
				cout << char(a + 97) << ":" << counts[a] << " times" << endl;
			}
	}

	int indexOf(const char s1[], const char s2[]) {
	int a, b, index, j, k;
	a = strlen(s1);
	b = strlen(s2);
	bool s3[999];
	for (int m = 0; m < a; m++)
		s3[m] = false;
	for (int i = 0; i < b - a + 1; i++)      //控制s2的首字母
	{
		for (j = 0, k = i; (j < a) && (k < i + a); j++, k++)      //控制s2的总输出数
			if (s1[j] == s2[k])
			{
				index = i;
				s3[j] = true;
			}
		int h = 0;
		for (int n = 0; n < a; n++)
		{
			if (s3[n] == false && i == b - a)
			{
				return -1; break;
			}
			if (s3[n])
				h++;
		}
		if (h == a)
		{
			return index;
		}
	}
}

void merge(const int list1[], int size1, const int list2[], int size2, int list3[],int size3) {
	//int temp;
	for (int j = 0; j < size1; j++)
		list3[j] = list1[j];
	for (int k = 0; k < size2; k++)
		list3[size1 + k] = list2[k];
	//bubbleSort
	//for (int m = 0; m < (size1 + size2) - 1; m++)
	//	for (int b = 0; b < (size1 + size2) - 1; b++)
	//		if (list3[b] > list3[b + 1])
	//		{
	//			temp = list3[b];
	//			list3[b] = list3[b + 1];
	//			list3[b + 1] = temp;
	//		}
	bubbleSort(list3,size3);
	cout << "The merged list is : ";
	for (int a = 0; a < (size1 + size2); a++)
		cout << list3[a] << "  ";
	}
int getPeachNumber(int n)
{
	//n-天数,num-剩余的桃子数
	int num;
	if (n == 10) //递归函数的结束条件 
	{
		num = 1;//第十天只剩下一个桃子； 
		cout << "第"<<n<<"天所剩桃子"<<num<<"个"<<endl ;
	}
	else
	{
		num = 2 * (getPeachNumber(n + 1) + 1);//从9倒序到1重复调用该函数
		cout << "第" << n << "天所剩桃子" << num << "个"<<endl;
	}
	return num;//将返回值传给主函数
	//函数名+括号：fn1()==return后面的值
}



bool is_prime(int num) {
	int m;
	bool prime = true;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) {
			prime = false;
			break;
		}
	}
	return prime;
}

void getgcd_lcm(int a, int b, int& gcd, int& lcm) {
	int a0 = a;
	int b0 = b;
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	gcd = b;
	lcm = a0 * b0 / b;
	//result = std::make_pair(b, lcm);

}

std::pair<int, int> gcd_lcm(int a, int b) {
	std::pair<int, int> result;
	int a0 = a;
	int b0 = b;
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	int lcm = a0 * b0 / b;
	result = std::make_pair(b, lcm);
	return result;
}





//实验五第一题
//实验五第二题
//实验五第三题
//实验五第四题
//实验五第五题
//实验五第六题
//实验五第七题