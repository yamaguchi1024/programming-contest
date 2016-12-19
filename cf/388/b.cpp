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
    mp t[100];

    scanf("%d %d",&t[0].first,&t[0].second);
    scanf("%d %d",&t[1].first,&t[1].second);
    scanf("%d %d",&t[2].first,&t[2].second);

    printf("3\n");

    int pohe = 3;
    rep(i,3){
        rep(j,3){
            rep(k,3){
                if(i!=j && i!=k && j!=k){
                    t[pohe].first = t[i].first + (t[j].first - t[k].first);
                    t[pohe].second = t[i].second + (t[j].second - t[k].second);
                    pohe++;
                }
            }
        }
    }

    mp r[10];
    int re = 0;
    printf("%d %d\n",t[3].first,t[3].second);
    r[0].first = t[3].first;
    r[0].second = t[3].second;
    reg(i,4,9){
        bool flg = true;
        for(int j=0;j<=re;j++){
            if(t[i].first == r[j].first && t[i].second == r[j].second){
                flg = false;
                break;
            }
        }
        if(flg){
            printf("%d %d\n",t[i].first,t[i].second);
            re++;
        }
        if(re==2) break;
    }
    return 0;

}
