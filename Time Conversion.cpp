#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int m=stoi(s);
  int n=static_cast<int>(s[8]);
  //int n=int(s[10]);
  if(int(s[8])==80 && m<12){
    m=m+12;
    cout<<m<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]<<s[7]<<endl;
  }
  if(int(s[8])==80 && m==12){
    m=m;
    cout<<m<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]<<s[7]<<endl;
  }
  if(int(s[8])==65 && m<=10){
    cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]<<s[7]<<endl;
  }
  if(int(s[8])==65 && m>12){
    m=m;
    cout<<m<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]<<s[7]<<endl;
  }
  if(m==12 && int(s[8])==65){
    m=0;
    cout<<m<<m<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]<<s[7]<<endl; 
  }
  return 0;
  

}
