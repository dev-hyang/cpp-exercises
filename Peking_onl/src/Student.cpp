#include<iostream>
#include<string>
using namespace std;
class Student{
  char* name;
  char* stuID;
  int age;
  int term1_avg, term2_avg, term3_avg, term4_avg;

public:
  void Init(char* name_, int age_,char* stuID_, int term1_avg_, int term2_avg_, int term3_avg_, int term4_avg_);
  int AvgOf4Terms();
  void PrintStudentInfo();
};

void Student::Init(char* name_, int age_,char* stuID_,int term1_avg_,int term2_avg_,int term3_avg_,int term4_avg_)
{
  name = name_;
  age = age_;
  stuID = stuID_;
  term1_avg = term1_avg_;
  term2_avg = term2_avg_;
  term3_avg = term3_avg_;
  term4_avg = term4_avg_;
}

int Student::AvgOf4Terms()
{
  return (term1_avg + term2_avg + term3_avg + term4_avg)/4;
}

void Student::PrintStudentInfo()
{
  cout<<name<<","<<age<<","<<stuID<<","<<AvgOf4Terms()<<endl;
}

int main(int argc, char const *argv[]) {
  string pch;
  char* stu_name;
  char* stu_ID;
  int stu_age,avg1,avg2,avg3,avg4;
  Student st1;
  cin>>pch;
  //split the string by separator ","
  string [my_str] = pch.split(",");
  stu_name = my_str[0];
  stu_age = my_str[1];
  stu_ID = my_str[2];
  avg1 = my_str[3];
  avg2 = my_str[4];
  avg3 = my_str[5];
  avg4 = my_str[6];
  st1.Init(stu_name,stu_age,stu_ID,avg1,avg2,avg3,avg4);
  st1.PrintStudentInfo();

  return 0;
}
