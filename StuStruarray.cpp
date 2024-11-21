#include<iostream>
#include<cstring>
using namespace std;
int main(){
struct student
{
    int roll;
    char name[20];
    int fees;
};
struct student stu[20];
int n;
cout<<"enter the number of students:-";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"enter the roll no:";
    cin>>stu[i].roll;
    cout<<"enter the Name of student:";
    cin>>stu[i].name;
    cout<<"enter the fess of student:";
    cin>>stu[i].fees;
}
for(int i=0;i<n;i++){
    cout<<"\n***STUDENTS"<<i+1<<"***";
    cout<<"\nROLL NO:"<<stu[i].roll;
    cout<<"\nNAME:"<<stu[i].name;
    cout<<"\nFEES:"<<stu[i].fees;
}
int new_roll,new_fees,num;
char new_name[20];
cout<<"enter the name of students to be edited:-";
cin>>num;
num-=1;
cout<<"enter the new roll no:";
cin>>new_roll;
cout<<"enter the new name:";
cin>>new_name;
cout<<"enter the new fees:";
cin>>new_fees;
stu[num].roll=new_roll;
strcpy(stu[num].name,new_name);
stu[num].fees=new_fees;
for(int i=0;i<n;i++){
    cout<<"\n***STUDENTS"<<i+1<<"***";
    cout<<"\nROLL NO:"<<stu[i].roll;
    cout<<"\nNAME:"<<stu[i].name;
    cout<<"\nFEES:"<<stu[i].fees;
}
return 0;
}
