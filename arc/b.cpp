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

char sa[200],sb[200],sc[200];
int main(){

  scanf("%s",sa);
  scanf("%s",sb);
  scanf("%s",sc);
  int alen=strlen(sa);
  int blen=strlen(sb);
  int clen=strlen(sc);
  int acur=0,bcur=0,ccur=0;

  char cha='a';
  while(1){
    if(alen==acur && cha=='a') {printf("A\n"); break;}
    if(blen==bcur && cha=='b') {printf("B\n"); break;}
    if(clen==ccur && cha=='c') {printf("C\n"); break;}

    if(cha=='a'){
      cha=sa[acur];
      acur+=1;
    }
    else if(cha=='b'){
      cha=sb[bcur];
      bcur+=1;
    }
    else if(cha=='c'){
      cha=sc[ccur];
      ccur+=1;
    }

  }


  return 0;

}
