#include <bits/stdc++.h>
using namespace std;

void maxArea(int arr1[],int xo,int arr2[],int xx,int arr3[],int yo,int arr4[],int yy,int a,int b){

    int maxA=INT_MIN;
    
    int a1=arr1[0];
    int b1=arr1[xo-1];
    int area1=  (b1-a1)*b;
    if(area1>maxA){
        maxA=area1;
    }

    int a2=arr2[0];
    int b2=arr2[xx-1];
    int area2=   (b2-a2)*b;
    if(area2>maxA){
        maxA=area2;
    }

    int a3=arr3[0];
    int b3=arr3[yo-1];
    int area3=  (b3-a3)*a;
    if(area3>maxA){
        maxA=area3;
    }

    int a4=arr4[0];
    int b4=arr4[yy-1];
    int area4= (b4-a4)*a;
    if(area4>maxA){
        maxA=area4;
    }
    cout<<maxA<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t!=0){
        int a,b;
        cin>>a>>b;
        int xo;
        cin>>xo;
        int arr1[xo];
        for(int i=0;i<xo;i++){
            cin>>arr1[i];
        }
        int xx;
        cin>>xx;
        int arr2[xx];
        for(int i=0;i<xx;i++){
            cin>>arr2[i];
        }
        int yo;
        cin>>yo;
        int arr3[yo];
        for(int i=0;i<yo;i++){
            cin>>arr3[i];
        }
        int yy;
        cin>>yy;
        int arr4[yy];
        for(int i=0;i<yy;i++){
            cin>>arr4[i];
        }
        maxArea(arr1,xo,arr2,xx,arr3,yo,arr4,yy,a,b);
        t--;
    }
}