/* Enter your solutions in this file */
#include <stdio.h>
int max(int number[] , int size){
 int max = number[0];
  For(int i=1;i<=1;i++)
    If(number[i]>max)
      {
        number[i]=max;
      }
     Return max;
}
int min(int number[] , int size){
 int min = number[0];
  For(int i=1;i<=1;i++)
    If(number[i]<min)
      {
        number[i]=min;
      }
     Return min;
}
float Average(int a[], int n){
   float avg=0.0;
   int sum=0;
   for (int i=0;i<n;++i){
      sum+=a[i];
     }
   avg =(float)(sum)/n;
  return avg;
}

int mode(int a[],int n) {
   int mode = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         mode = a[i];
      }
   }

   return mode;
}
int Factors(int n, int a[]){
   int x=0,y=0,fac=0;
   while (n>1){
     for (int i=2;i<=n;++i){
        for(int j=1;j<i;j++){
          if(i%j==0){
            x++;
          }
        }
       if(x==1 && n%i==0){
         fac++;
         a[y]=i;
         y++;
         n=n/i;
         i=i-1;
       }
         x=0;
         
     }
   }
 return fac;
}
