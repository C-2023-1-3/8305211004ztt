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
	//cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:
	//cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	//cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	//cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	//cout << "output in unsigned int 1 type:" << oct << testUnint << endl;        //<<oct;
	//cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������

	//double floatingNumber = 3.14;
	//int intNumber = static_cast<int>(floatingNumber);
	//std::cout << "Original floating: " << floatingNumber << endl;
	//std::cout << "Converted integer number: " << intNumber << endl;

	//system("pause");

	//double i;
	//cout << "�����뻪���¶ȣ���F):" ;
	//cin >> i ;
	//cout << fixed << setprecision(2) << ((i - 32) * 5 / 9)  << "����C��" << endl;

	//ʵ�����һ��
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

	//ʵ����ڶ���
	//double x;
	//double y;
	//cout << "������x��ֵ��" ;
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
	//	cout << "������Ч�������������С��10������";
	//	return 0;
	//}
	//cout << "y��ֵ�ǣ�" << y;
	
	//ʵ���������
	//double a, b, c;
	//double l;
	//cout << "�����������߳���";
	//cin >> a >> b >> c;
	//if (a + b > c && a + c > b && b + c > a) {
	//	l = a + b + c;
	//	cout << "�������ε��ܳ�Ϊ��" << l<<endl;
	//	if (a == b && a != c or a == c && a != b or b == c && a != c) {
	//		cout << "���������ǵ���������";
	//	}
	//	else
	//	{
	//		cout << "�������β��ǵ���������";
	//	}
	//}
	//else
	//{
	//	cout << "�����߲����Թ���������";
	//}

	//ʵ���������
	//cout << "��������֮���+ - * / %����" << endl;
	//int num1, num2;
	//char op;
	//cout<<"�������һ����"<<endl;
	//cin >> num1 ;
	//cout << "������+ - * / %" << endl;
	//cin >> op;
	//cout << "������ڶ�����" << endl;
	//cin >> num2;
	//if (num2 == 0){
	//	cout << "Error����������Ϊ�㡣";
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
	//	cout << "Error����������ȷ�������";
	//	break;
	//}
	
	//ʵ���������
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



	//ʵ���������
	//cout << "����������������a , b:";
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
	//cout << "a �� b �����Լ������С�������ֱ�Ϊ��" << b <<" " << lcm;

	//ʵ���������
	//int i,j;
	//for (i = 1; i <= 5; i++) {
	//	for ( j = 1; j <= i; j++)
	//	{
	//		cout << "*";
	//	}
	//	if(i<5)cout << "\n";
	//	
	//}
	
	//ʵ����ڰ���
	//double a, x0, x, epson;
	//cout << "������a��ֵ��";
	//cin >> a;
	//if (a <= 0) {
	//	cout << "Error��a����С�ڵ�����";
	//	return 0;
	//}
	////cout << "������epson��ֵ��";
	////cin >> epson;
	//epson = 1e-10;
	//x0 = a / 2;
	//x = (x0 + a / x0) / 2;
	//while (fabs(x - x0) > epson)
	//{
	//	x0 = x;
	//	x = (x0 + a / x0) / 2;
	//}
	//cout << "ƽ����Ϊ��" << x << endl;


	
	//ʵ����ھ���
	//double price = 0.8;
	//int num = 2;
	//int day = 1;

	//while ((num +pow(2,day+1))<100) {
	//	num += pow(2, day+1);
	//		day++;

	//}
	//cout << "һ�������� "<<day <<" ��" << "ÿ��ƽ������ " << num * price / day<<"Ԫ";

	return 0;
	
	



	//return 0;
}