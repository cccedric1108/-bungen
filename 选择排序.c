#include<stdio.h>
#define N 10
int main(){\
    int i,j,a[N],q,k;
    for (i=0;i<N;i++){                                  //数组序列初始化
        scanf("%d",&a[i]);
    }    
    for (i=0;i<N;i++){   
        k=i;                                            //第一层循环
        for (j=i+1;j<N;j++){
                if (a[k]<a[j]){
                    k=j;                                //记录最大元素下标
                }

        }
        q=a[i];                                         //将每轮最大元素换到首位
        a[i]=a[k];
        a[k]=q;
    }
    for(i=0;i<N;i++){
        printf("%5d",a[i]);
    }

    return 0;
}
