#include<iostream>
using namespace std;
class person 
{
    protected:
    char name[30];
    int age;
    public:
    void getdata()
    {
        cout<<"enter name: "<<endl;
        cin>>name;
        cout<<"enter age: "<<endl;
        cin>>age;
    }
    void showdata()
    {
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
class student:public person
{
    private:
    int stdid;
    public:
    void getdata()
    {
        person::getdata();
        cout<<"enter student id:"<<endl;
        cin>>stdid;
    }
    void showdata()
    {
        person::showdata();
        cout<<"id:"<<stdid<<endl;
    }
};
class exam
{
    protected:
    int marks1,marks2,marks3;
    public:
    void getdata()
    {
        cout<<"enter marks1,marks2,marks3:"<<endl;
        cin>>marks1>>marks2>>marks3;
    }
    void showdata()
    {
        cout<<"marks1="<<marks1<<endl;
        cout<<"marks2="<<marks2<<endl;
        cout<<"marks3="<<marks3<<endl;
    }
};
class result:public student , public exam
{
    private:
    int total;
    public:
    void getdata()
    {
        cout<<"enter students details:"<<endl;
        student::getdata();
        cout<<"enter marks:"<<endl;
        exam::getdata();
    }
    void showdata()
    {
        cout<<"students details:"<<endl;
        student::showdata();
        exam::showdata();
        cout<<"total marks:"<<(exam::marks1+exam::marks2+exam::marks3)<<endl;
        cout<<"percentage:"<<(exam::marks1+exam::marks2+exam::marks3)/3<<endl;
    }
};
int main()
{
    result r;
    r.getdata();
    r.showdata();
    return 0;
}