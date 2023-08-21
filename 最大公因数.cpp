/*#include<bits/stdc++.h>
int main(){
     int a,b,c,d,e,f;
     scanf("%d %d",&a,&b);
     e = a;
     f = b;
     c = a%b;
     while (c!=0){
         if (c ==0){
             break;
         }
         d = b%c;
         b = c;
         c = d;
     }
     printf("%d和%d的最大公因数是%d。",e,f,b);
}*/







#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d和%d的最大公因数是%d。",a,b,__gcd(a,b));
    return 0;
}