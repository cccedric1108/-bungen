#include<stdio.h>

//6-1 使用函数输出指定范围内的完数
/* int factorsum( int number ){
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum+=i;
        }
    }
    if (sum==number)
        return sum;
    
    return 0;
}


void PrintPN( int m, int n ){
    int flag=0;
    for(int i=m;i<=n;i++){
        if (factorsum(i)==i)
        {
            flag=1;
            printf("%d = 1",i);
            for (int j=2;j<i;j++){
                if(i%j==0){
                     printf(" + %d",j);
                }
            }
            
            printf("\n");
        }
    }if(flag==0){
                printf("No perfect number");}
} */



//6-2 简单实现x的n次方
/* double mypow( double x, int n ){
    
    double y;
    y=x;
    if (n==0)
    {
        x=1.0;
    }
    else if (n==1)
    {
        x=x*1.0;
    }
    else
    {
        for (int i = 0; i < n-1; i++)
        {
            x=x*y;
        }
        
    }
    
    return x;
} */


//6-5 使用函数判断完全平方数
/* int IsSquare( int n ){
    if((int)sqrt(n)*(int)sqrt(n)==n)
    return 1;

    return 0;
}
 */


//6-3 使用函数输出指定范围内的Fibonacci数

/* int fib( int n ){
    
    if (n==1 || n==2)
    
        return 1;
    
    else{
        return fib(n-1)+fib(n-2);
    }
    

}


void PrintFN( int m, int n ){
    
    int i=1,count =0;
    while (fib(i)<=n)
    {
        if (fib(i)>=m && fib(i)<=n){
            
            count++;
            if (count == 1)
                printf("%d", fib(i));
            else
                printf(" %d", fib(i));
        }
        i++;
    }
    
    if (count == 0)
        printf("No Fibonacci number\n");
} */


//6-4 递归实现顺序输出整数
/* void printdigits( int n ){
    if (n<10)
    {
        printf("%d\n",n);

    }
    else{
        printdigits(n/10);
	printf("%d\n",n%10);
    }
    
}
 */





//6-6 使用函数生成一张阶乘表
/* double fact( int n ){
    double x=1;

for (int i = 1; i <=n; i++)
{
    x*=i;
}

    return x;
    
} */


//7-1 求组合数
/* double fact( int n ){
    double x=1;

for (int i = 1; i <=n; i++)
{
    x*=i;
}

    return x;
    
}

int main(){
    double c;
    int m,n;
    scanf("%d %d",&m,&n);
    c=fact(n)/(fact(m)*fact(n-m));

    printf("result = %.f",c);

    return 0;
} */


//7-2 求幂之和
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int result=0;
    for (int i = 1; i <= n; i++)
    {
        result+=pow(2,i);
    }

    printf("result = %d",result);
    return 0;
}
