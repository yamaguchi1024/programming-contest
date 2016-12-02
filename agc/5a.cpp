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
#include<stack>
using namespace std;
#define rep(i,n) for(int i=0;i<((int)(n));i++)
#define reg(i,a,b) for(int i=((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=((int)(b));i>=((int)(a));i--)
typedef long long int lli;
typedef pair<int,int> mp;

char s[300000];
int a[300000];

int main(){

  scanf("%s",s);
  int len=strlen(s);
/*
  int res=len;
  while(1){
    int flg=1;
    rep(i,len-1){
      if(s[i]=='S' && s[i+1]=='T' && a[i]!=1 && a[i+1]!=1){
        a[i]=1; a[i+1]=1;
        res-=2;
        flg=0;
        break;
      }
    }
    if(flg) break;
  }
  */
  stack<int> st;
  int res=len;
  rep(i,len){
    if(s[i]=='S') st.push(1);
    else if(s[i]=='T' && !st.empty()){
      st.pop();
      res-=2;
    }
  }

  printf("%d\n",res);


  return 0;

}
