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

int main(){

    int pont[6],resp[6],i,dif[4];
    for(int i=0;i<6;i++) scanf("%d",&pont[i]);

    dif[0]=pont[0]-pont[2];
    dif[1]=pont[1]-pont[3];
    resp[0]=pont[4]+dif[0];
    resp[1]=pont[5]_dif[1];
    resp[2]=pont[4]-dif[0];
    resp[3]=pont[5]-dif[1];
    dif[2]=pont[2]-pont[4];
    dif[3]=pont[3]-pont[5];
    resp[4]=pont[0]+dif[2];
    resp[5]=pont[1]+dif[3];
    if((resp[4]==resp[0]&& resp[5]==resp[1]) || (resp[4]==resp[2]&& resp[5]==resp[3])){
        resp[4]=pont[0]-dif[2];
        resp[5]=pont[1]-dif[3];
    }
    printf("3\n");
    printf("%d %d\n",;

  return 0;

}
