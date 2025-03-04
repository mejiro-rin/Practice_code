#include <bits/stdc++.h>
using namespace std;

char arr1[1000],arr2[2][1000]={0};

void myswap(char &x,char &y){
  char temp=x;
  x=y;
  y=temp;
}

char findkey(char x){
  switch(x){
    case 'A':
      return 'T';
    case 'C':
      return 'G';
    case 'G':
      return 'C';
    case 'T':
      return 'A';
  }
}

int main()
{
  int N;cin>>N;
  int sum=0;
  cin>>arr1;
  cin>>arr2[0];
  for(int i=0;i<N;++i){
    int key=findkey(arr1[i]);
    if(arr2[0][i]!=key && arr2[1][i]!='1'){
      bool swapped=false;
      for(int j=i+1;j<N;++j){
        if(arr2[0][j]==key && arr2[1][j]!='1' && arr2[0][j]!=findkey(arr1[j]) && arr2[0][i]==findkey(arr1[j])){
          myswap(arr2[0][i],arr2[0][j]);
          arr2[1][i]='1';
          arr2[1][j]='1';
          sum++;
          swapped=true;
          break;
        }
      }
      if(!swapped){
        arr2[0][i]=key;
        arr2[1][i]='1';
        sum++;
      }
    }
  }
  cout<<sum<<endl;
  return 0;
}