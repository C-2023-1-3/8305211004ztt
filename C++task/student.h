#pragma once
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
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




