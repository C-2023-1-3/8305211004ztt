//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include "student.h"            //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}

void Student::set_value(int num, const char * name, char sex) {
    this->num = num;
    strncpy_s(this->name, name, 19);  
    this->name[19] = '\0';  
     this->sex = sex;

};

void Cuboid::display() {
    cout << "�����" << length*wideth*height<< endl;
    
}

void Cuboid::set_value() {
    cout << "�����볤����ĳ���ߣ�";
    cin>>
    this->height >>
    this->length >>
    this->wideth ;
}

void Scoretable::max(Scoretable* p,int n) {
    Scoretable* max = p;    //��������ָ��   
    for (int i = 1; i < n; ++i) {
        if (p[i].score > max->score) {
            max = &p[i];
        }
    }
    cout << "ѧ��Ϊ" <<max->sno << "��ѧ��������ߣ�����Ϊ��" <<max->score << endl;
}
void Scoretable::set_value() {
    cout << "������ѧ����ѧ�źͳɼ���";
    cin >>
        this->sno >>
        this->score ;
}

 Point::Point(int x,int y)
{
     this->x = x;
     this->y = y;
}


 void  Point::setPoint(int i, int j) {
     this->x += i;
     this->y += j;
 }

 void Point::display() {
     cout << "�޸ĺ������ֵΪ��" << "(" << this->x << "," << this->y << ")";

 }