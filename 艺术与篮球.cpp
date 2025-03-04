#include <bits/stdc++.h>
using namespace std;

bool isleapyear(int year){
  return((year%4==0&&year%100!=0)||year%400==0);
}

bool isok(int num){
  int day=num%100;
  int month=num/100%100;
  int year=num/10000;
  int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  if(isleapyear(year)) days[2]=29;
  return(day<=days[month]);
}

int main()
{
  int data=20000101,Sum=0;
  while(data<=20240413){
    if(!isok(data)){
      data++;
      continue;
    }
    vector<int> arr;
    int temp,d=data;
    while(d){
      temp=d%10;
      arr.push_back(temp);
      d/=10;
    }
    int score=0;
    for(const auto& num:arr){
      if(num==0) score+=13;
      else if(num==1) score+=1;
      else if(num==2||num==7||num==8||num==9) score+=2;
      else if(num==3) score+=3;
      else if(num==4) score+=5;
      else score+=4;
    }
    if(score>50) Sum++;
    data++;
  }
  cout<<Sum<<endl;
  return 0;
}