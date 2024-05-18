/***************************************************
> Copyright (C) 2024 ==LENA== All rights reserved.
> File Name: student.cpp
> Author: lena
> Mail:lena_li@126.com
> Created Time: 2024年05月17日 星期五 00时35分59秒
***************************************************/

#include <iostream>
#include <cstring>
using namespace std;
//类
class student{
	//数据
	private:
		float score[2];
		char id[10];
		float tatol;
		float avg;
		char name[20];
	//处理函数，类内声明
	public:
		char*	getName();
		char*	getId();
		float	getTatol();
		float   getAvg();
		void	setStudent(char*,char*,float*);
		void	setCalculat(float*);

};
//类外定义
char*	student::getName()
{
	return name;
}
char*	student::getId()
{
	return id;
}
float	student::getTatol()
{
	return tatol;
}
float   student::getAvg()
{
	return avg;
}
void student::setStudent(char* na,char* sid,float* sc)
{
	strcpy(name,na);	
	strcpy(id,sid);
	memcpy(score,sc,sizeof(float)*2);
	tatol = 0;
	avg = 0;
}
void student ::setCalculat(float*score)
{
	tatol = score[1] +  score[0];
	avg = tatol / 2;
}
int main(int argc,const char* argv[])
{
	student yjd;//对象
	cout<<"请输入学生id，学生姓名，两门课成绩"<<endl;
	char id[10] = {0};
	cin>>id;
	char name[20] ={0};
	cin>>name;
	float score[2] = {0};
	for(int i = 0;i < 2;i++)
	{
		cin>>score[i];
	}
	
	

	yjd.setStudent(name,id,score);
	yjd.setCalculat(score);
	cout<<yjd.getId()<<","<<yjd.getName()<<","<<yjd.getTatol()<<","<<yjd.getAvg();
	return 0;
}
