#include<stdio.h>
#include<string.h>

//7-1 求平方与倒数序列的部分和 (10 分)
/*int main(){
    int m,n;
    double sum=0;
    scanf("%d %d",&m,&n);
    for(m;m<=n;m++){
        sum=sum+m*m+1.0/(m);
    }
    printf("sum = %.6lf",sum);

return 0;

}*/
//7-2 输出整数各位数字 (10 分)
/*
int main(){
    int a,t,i;
    int count=1;
    scanf("%d",&a);
    t=a;
    while (t>9)
    {
        t/=10;
        count*=10;

    }
    while(count>0){
	 	printf("%d ",a/count);      
		a%=count;
		count/=10;
	}
   
    
}
*/

//7-3 求e的近似值 (10 分)
/*int main(){
    int n,i,j;
    int a=1;
    double sum=1.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=1;

        for (j=1;j<=i;j++){
            a*=j;
        }
        sum+=1.0/a;
    }
    printf("%.8lf",sum);

    return 0;



}*/


//7-4 高空坠球 (10 分)
/*int main(){
    int a,b,i;
    double sum=0.0;
    double c,t;
    scanf("%d %d",&a,&b);
    t=a;
    if(b>0){
    
   
    for (i=0;i<b;i++){
        sum+=t+t/2.0;
        t=t/2.0;
    }
    printf("%.1lf %.1lf",sum-t,t);
    return 0;}

}*/

//7-5 人民币兑换 (10 分)

/*int main (){

    int a=100;
    int count=1;
    int n,x,y,z;
    scanf("%d",&n);
 

  
        for (x=1;x<30;x++){
            for (y=1;y<=50;y++){
                for(z=1;z<=100;z++){
                    if((x+y+z==100)&&(5*x+2*y+z==150)&&(count<=n)){
                        printf("%d %d %d\n",x,y,z);
                        count++;
                    }
                }
            }
        }
    }*/


//7-6 求整数的位数及各位数字之和 (10 分)

/*int main(){

    int a,t;
    int sum=0;
    int mark=1;
    int count=1;
    scanf("%d",&a);
    t=a;
    while (t>9)
    {
        t/=10;
        mark*=10;
        count++;
    }
    while (a>0)
    {
        sum+=a/mark;
        a%=mark;
        mark/=10;

    }
printf("%d %d",count,sum);
return 0;
    
}*/

//7-8 找完数 (10 分)
/*#include<stdio.h>
int main()
{
    int x,i,j,y,sum,c=0;
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++)
    {
    	sum=1;
        for(j=2;j<i;j++)
        {
        	if(i%j==0)
        	{
        		sum=sum+j;
			}
        }
        if(sum==i)
        {
        	c++;
        	printf("%d = 1",sum);
        	for(j=2;j<i;j++)
        	{
        		if(i%j==0)
        		{
        			printf(" + %d",j);
        		
				}
        	}
        	printf("\n");
		}
    }
    if(c==0)
    	printf("None");
    return 0;
}*/

//7-9 求整数段和 (10 分)


/*int main(){

    int a,b,count,i;
    int sum=0;
    i=a;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        count++;
        printf("%5d",i);
        sum+=i;
        if ((count%5==0)&&((b-a)!=4))
        {
            printf("\n");
        }
        
    }
    printf("\nSum = %d",sum);
    return 0;
}
*/

//7-10 验证“哥德巴赫猜想” (10 分)

int main (){

    int a,j,i;
    int k=0;
    scanf("%d",&a);
    char b[100];
    for(i=3;i<a;i++){
        for(j=3;j<i;j++){
            if(i%j==0){
                break;
            }
            else{
                b[k]=i;
                k++;
            }

        }
    }

    for(i=0;i<=k;i++){
        for(j=0;j<i;j++){
            if (i+j==a){
                printf("%d = %d + %d",a,i,j);
                break;
            
        }
    }
    return 0;
}
