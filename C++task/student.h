#pragma once
//student.h                (这是头文件，在此文件中进行类的声明)
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int num,const char * name,char sex);
private:
	int num;
	char name[20];
	char sex;
};

class Cuboid {
public:
	void set_value();
	void display();
private:
	int length;
	int wideth;
	int height;

};
class Scoretable {
public:
	void max(Scoretable* p,int n);
	void set_value();
private:
	int sno;
	int score;
	
};

class Point
{
public:
	Point(int x,int y);
	void setPoint(int i, int j);
	void display();
private:
	int x;
	int y;
};




