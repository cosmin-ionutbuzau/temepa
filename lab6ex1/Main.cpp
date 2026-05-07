#include <iostream>
using namespace std;


struct Obiect{
   double w;
   double p;
   double r;
   int index;
};


void bubblesort(Obiect a[], int n){
   for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(a[i].r < a[j].r){
               Obiect aux = a[i];
               a[i] = a[j];
               a[j] = aux;
           }
       }
   }
}


void rucscac (int w[],int p[],int n,int M,double X[]){
   Obiect a[100];
   int c=0;
   for(int i=0;i<n;i++){
       X[i]=0;
   }
   for(int i=0;i<n;i++){
       a[i].w=w[i];
       a[i].p=p[i];
       a[i].r=a[i].p/a[i].w;
       a[i].index=i;
   }
   bubblesort(a,n);
   for(int i=0;i<n && c<M;i++){


       if(c + a[i].w <= M)
       {
           c += a[i].w;
           X[a[i].index]=1;
       }
       else
       {
           X[a[i].index]=(double)(M-c)/a[i].w;
           c = M;
       }
   }
}


int main(){


   int w[] = {10,20,30};
   int p[] = {60,100,120};
   int n = 3;
   int M = 50;
   double X[100];
   rucscac(w,p,n,M,X);
   double val=0;
   for(int i=0;i<n;i++){
       val += p[i] * X[i];
   }
   cout<<val<<endl;
   for(int i=0;i<n;i++){
       cout<<X[i]<<" ";
   }


}
