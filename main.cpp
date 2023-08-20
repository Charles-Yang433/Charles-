#include <bits/stdc++.h>
int a[10005],b[10005],T,n;
int main(){
	scanf("%d",&T);
    for (int t = 1;t<=T;t++){
        scanf("%d",&n);
        for (int i = 0;i<n;i++){
            scanf("%d",&a[i]);
            b[i] = a[i]>>16;
            a[i]&=(1<<16)-1;
        }
        printf("Case %d:\n",t);
        for (int i = 0;i<n;i++){
            printf("%d",a[i]);
        }
        printf("\n");
        for (int i = 0;i<n;i++){
            printf("%d ",b[i]);
        }
        printf("\n");
    }
	return 0;
}