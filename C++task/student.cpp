//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include "student.h"            //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}

void Student::set_value(int num, const char * name, char sex) {
    this->num = num;
    strncpy_s(this->name, name, 19);  
    this->name[19] = '\0';  
     this->sex = sex;

};

void Cuboid::display() {
    cout << "体积：" << length*wideth*height<< endl;
    
}

void Cuboid::set_value() {
    cout << "请输入长方体的长宽高：";
    cin>>
    this->height >>
    this->length >>
    this->wideth ;
}

void Scoretable::max(Scoretable* p,int n) {
    Scoretable* max = p;    //创建对象指针   
    for (int i = 1; i < n; ++i) {
        if (p[i].score > max->score) {
            max = &p[i];
        }
    }
    cout << "学号为" <<max->sno << "的学生分数最高，分数为：" <<max->score << endl;
}
void Scoretable::set_value() {
    cout << "请输入学生的学号和成绩：";
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
     cout << "修改后的坐标值为：" << "(" << this->x << "," << this->y << ")";

 }