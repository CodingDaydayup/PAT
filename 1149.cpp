#include <iostream>
#include <vector>
#include <set>
using namespace std;
int n,m,good;
void check(int dang[][2],int n){
    int num;
    scanf("%d",&num);
    set<int> goods;
    for(int i=0;i<num;i++){
        scanf("%d",&good);
        goods.insert(good);
    }
    for(int i=0;i<n;i++){
        if(goods.find(dang[i][0])!=goods.end()&&goods.find(dang[i][1])!=goods.end()){//不相容的两种货物都能在清单中找到，则不能同时运输
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}
int main(){
    scanf("%d%d",&n,&m);
    int dang[n][2];
    for(int i=0;i<n;i++){
        scanf("%d%d",&dang[i][0],&dang[i][1]);
    }
    for(int i=0;i<m;i++) check(dang,n);
    return 0;
}
