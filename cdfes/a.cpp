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
char a[100000];

int main(){
  scanf("%s",a);
  int len=strlen(a);
  bool flag=false;
  bool res=false;
  for(int i=0;i<len;i++){
    if(a[i]=='C') flag = true;
    else if(a[i]=='F' && flag) res=true;
  }
  if(res==true) printf("Yes\n");
  else printf("No\n");


  return 0;

}
