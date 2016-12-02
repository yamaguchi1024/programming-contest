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

char s[30],ans[30];
int main(){
  scanf("%s",s);
  int len=strlen(s);
  rep(i,len) ans[s[i]-'a']++;
  bool res=true;
  rep(i,'z'-'a'){
    if(ans[i]%2!=0){
      res=false;
      break;
    }
  }
  if(res) printf("Yes\n");
  else printf("No\n");


  return 0;

}
