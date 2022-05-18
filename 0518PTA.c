#include<stdio.h>
#include<math.h>

//6-1 使用函数输出一个整数的逆序数

/* int reverse( int number ){

int sum=0;
while (number!=0)
{
    sum=sum*10+number%10;
    number/=10;
}
return sum;

} */

//6-2 递归计算Ackermenn函数

/* int Ack( int m, int n ){

    if (m==0)
    {
        return n+1;
    }
    else if (n==0 && m>0)
    {
        return Ack(m-1,1);
    }
    else if (m>0 && n>0)
    {
        return Ack(m-1,Ack(m,n-1));
    }
    

} */

//6-3 使用函数求余弦函数的近似值


/* double funcos( double e, double x ){

    double item=1;
    int flag=-1;

    double sum=1;
    double m=2,fenmu=1,fenzi=1;
    while (item>e)
    {
        for (int i = 1; i <=m; i++)
        {
            fenmu*=i;
        }
        
    
    fenzi=pow(x,m);
    item=fenzi/fenmu;
    sum+=item*flag;
    m+=2;
    fenmu=1;
    flag=-flag;
    }
    return sum;
    }
 */

//6-4 查找数组元素最大值

/* int indexOfMax(int *array, int size){

    int max=array[0];
    int max_=0;
    for (int i = 0; i < size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
            max_=i;
        }
        
    }
    return max_;
    

} */


//6-5 字符串比较

/* int fun(char a[],char b[]){
    int flag;
    if(strcmp(a,b)==0)
    return 0;
    else if (strcmp(a,b)>0)
    {
        return 1;
    }
    else if (strcmp(a,b)<0)
    {
        return -1;
    }
    
} */


int isPalindrome(const char* str, char* pch){
int n=strlen(str);
int i, j,flag=0;
for (i=0,j=n-1;j<n,j>=0;i++,j--)
{
if (str[i] ==str[j])
{
flag++;
}
}
*pch=str[(n-1)/2];
if (flag == n)
return 1;
else
return 0;
}


//6-6 求矩阵不靠边元素之和

 
/* void Input (float a[][N], int m ){

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%f",&a[i][j]);
        }
        
    }
    

}



float Sum ( float a[][N], int m ){

    float sum=0;
    for (int i = 1; i < m-1; i++)
    {
        for (int j = 1; j < N-1; j++)
        {
            sum+=a[i][j];
        }
            
    }
    return sum;

} 
 */

//6-7 判断回文

/* int isPalindrome(const char* str, char* pch){

    int len=strlen(str);
    int j=len/2;
    *pch=str[j];
    for (int i = 0; i < j; i++)
    {
        if (str[i]!=str[len-i])
        {
            return 0;
        }
        
    }
    
    return 1
} */


//7-1 求n以内最大的k个素数以及它们的和
/* #include<stdio.h>
int sushu(int m){

    for (int i = 2; i < m; i++)
    {
        if (m%i==0)
        {
            return 0;
        }
        
    }
    return 1;

}

int main(){
    int m,n;
    int count =0;
    int sum=0;
    scanf("%d %d",&m,&n);
    for (int i = m; i >=2; i--)
    {
        if (sushu(i) && count==0)
        {
            printf("%d",i);
            count++;
            sum+=i;
        }
        else if (sushu(i)&& count<n)
        {
            printf("+%d",i);
            count++;
            sum+=i;
        }
        
    }
    printf("=%d",sum) ;

    return 0;  

}  */


//7-2 圆形体体积计算器
/* #include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979

void dayin(){
printf("1-Ball\n");
printf("2-Cylinder\n");
printf("3-Cone\n");
printf("other-Exit\n");
printf("Please enter your command:");
   
}

int main(){

    int m;
    double v;
    double r,h;
    while (1)
    {
        dayin();
        scanf("%d",&m);
        if (m==1)
        {
            printf("Please enter the radius:");
            scanf("%lf",&r);
            v=(4/3.0)*M_PI*pow(r,3);        
            printf("%.2lf\n",v);
            
        }
        else if(m==2){
			printf("Please enter the radius and the height:\n");
			scanf("%lf %lf",&r,&h);
            v=M_PI*h*r*r;
            printf("%.2lf\n",v);
			
		}else if(m==3){
			printf("Please enter the radius and the height:\n");
			scanf("%lf %lf",&r,&h);
            v=(1/3.0)*h*M_PI*r*r;
            printf("%.2lf\n",v);
			
		}else{
			break;

        

    }
    
}
return 0;
}
 */

/* #include<stdio.h>
#include<math.h>
int main()
{
	int c;
	double pi=3.1415926535,r,h;
	while(1)
	{
		printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:{
				printf("Please enter the radius:\n");
				scanf("%lf",&r);
				printf("%.2lf\n",4.0*pi*pow(r,3)/3); 
				break;
			}
			case 2:{
				printf("Please enter the radius and the height:\n");
				scanf("%lf%lf",&r,&h);
				printf("%.2lf\n",pi*pow(r,2)*h); 
				break;
			}
			case 3:{
				printf("Please enter the radius and the height:\n");
				scanf("%lf%lf",&r,&h);
				printf("%.2lf\n",pi*pow(r,2)*h/3);
				break;
			}
			default:return 0;
		}
	}
	return 0;
 } 
 */
