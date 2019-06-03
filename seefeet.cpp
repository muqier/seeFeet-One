// 2.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "iostream" 
using namespace std;
class CSeeFeet
{
private:
	int foot;
	int inch;
	int check();
public:
	CSeeFeet();
	CSeeFeet(int f, int i);
	int setFoot(int f, int i);
	void displayFoot();
	void addOneFoot();
	int getFoot();
	int getInch();
	CSeeFeet addFoot(CSeeFeet &od);
	CSeeFeet operator + (CSeeFeet&otemp);
};
CSeeFeet CSeeFeet::operator + (CSeeFeet&otemp)
{
	CSeeFeet temp;
	temp.setFoot(foot + otemp.foot, inch + otemp.inch);
	return temp;
}
CSeeFeet CSeeFeet::addFoot(CSeeFeet &od)
{
	CSeeFeet temp;
	temp.setFoot(foot + od.foot, inch + od.inch);
	return temp;
}
CSeeFeet::CSeeFeet()
{
	foot = 12;
	inch = 12;
}
CSeeFeet::CSeeFeet(int f, int i)
{
	foot = f;
	inch = i;
	check();
}
int CSeeFeet::setFoot(int f, int i)
{
	foot = f;
	inch = i;
	check();
	return 0;
}
void CSeeFeet::displayFoot()
{
	cout << foot << "英尺" << inch << "英寸" << endl;
}
int CSeeFeet::check()
{
	foot = 12 * inch;
	if (inch / 12 >= 1)
	{
		foot++;
		return foot;
	}
	else;
}
int CSeeFeet::getFoot()
{
	return foot;
}
int CSeeFeet::getInch()
{
	return inch;
}
void CSeeFeet::addOneFoot()
{
}
int main()
{
	CSeeFeet od1(5, 27), od2(18, 100), od3;
	//od3 = od1.addFoot(od2); 

	od1.displayFoot();
	od2.displayFoot();
	od3.displayFoot();
	return 0;
}