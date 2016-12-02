#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<map>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<((int)(n));i++)
#define reg(i,a,b) for(int i=((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=((int)(b));i>=((int)(a));i--)
typedef long long int lli;
typedef pair<int,int> mp;

char s[20];
int main(){
  scanf("%s",s);
  int len=strlen(s);

  vector<char> vec;
  rep(i,len){
    if(s[i]=='0') vec.push_back('0');
    if(s[i]=='1') vec.push_back('1');
    if(s[i]=='B' && (vec.size() !=0)) vec.erase(vec.begin()+vec.size()-1);
  }

  rep(i,vec.size()) printf("%c",vec[i]);
  printf("\n");

  return 0;

}
