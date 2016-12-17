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

int su[6];
int main(){

    int n;
    int a[1000000];
    scanf("%d",&n);
    rep(i,n){ scanf("%d",&a[i]); su[a[i]]++;}

    int res = 0;
    while(1){
        if(su[4]>0){ res++; su[4]--;}
        else if(su[3]>0 && su[1]>0){ res++; su[3]--; su[1]--;}
        else if(su[2]>0 && su[1]>1){res++; su[2]--; su[1]=su[1]-2;}
        else if(su[2]>1){ res++; su[2]=su[2]-2;}
        else if(su[1]>3){res++; su[1]=su[1]-4;}
        else if(su[3]>0){ res++; su[3]--;}
        else if(su[2]>0 && su[1]>0) { res++; su[2]--; su[1]--;}
        else if(su[1]>2){res++; su[1]=su[1]-3;}
        else if(su[2]>0){ res++; su[2]--;}
        else if(su[1]>1){res++; su[1]-=2;}
        else if(su[1]>0){res++; su[1]--;}
        if(!su[1] && !su[2] && !su[3] && !su[4]) break;
    }
    printf("%d\n",res);


    return 0;

}
