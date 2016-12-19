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

    int n;
    char a[300000];
    int b[300000];

    scanf("%d",&n);
    scanf("%s",a);
    int len = strlen(a);
    int cnt_d=0;
    int cnt_r = 0;
    rep(i,len){
        if(a[i]=='D') cnt_d++;
        else cnt_r++;
        b[i]=1;
    }
    int now_d = cnt_d;
    int now_r = cnt_r;
    int p_d=0;
    int p_r=0;
    while(1){
        rep(i,len){
            if(!now_d || !now_r) break;

            if(a[i]=='D' && now_d && b[i] && !p_d){now_r--; p_r++;}
            else if(a[i]=='R' && now_r && b[i] && !p_r){now_d--; p_d++;}
            else if(a[i]=='D' && now_d && b[i] && p_d){ b[i]=0; p_d--;}
            else if(a[i]=='R' && now_r && b[i] && p_r){ b[i]=0;p_r--;}
//            printf("i:%d now_d:%d now_r:%d p_d:%d p_r:%d\n",i,now_d,now_r,p_d,p_r);
        }
        if(!now_d){ printf("R\n");break;}
        if(!now_r){ printf("D\n"); break;}
    }

    return 0;

}
