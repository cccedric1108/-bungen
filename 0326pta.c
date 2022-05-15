//7-1 阶梯电价 (10 分)
#include<stdio.h>

/*int main(){
    int x;
    float y;
    scanf("%d",&x);

    if (x<=50 && x>0){
        y=x*0.53;
        printf("cost = %.2f",y);
    }
    else if (x>50){
        y=50*0.53+(x-50)*0.58;
        printf("cost = %.2f",y);
    }
    else if (x<=0){
        printf("Invalid Value!");
    }

    return 0;
}*/


//7-2 成绩转换 
/*#include<stdio.h>
int main()
{
    int score;
    scanf("%d",&score);
    score=score/10;

    switch (score)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    printf("E");
    break;
    case 6:
    printf("D");
    break;
    case 7:
    printf("C");
    break;
    case 8:
    printf("B");
    break;
    case 9:
    case 10:
    printf("A");
    break;
        
        break;
    
    default:
        break;
    }
    return 0;
}
*/

//7-3 分段函数1
#include<stdio.h>
#include<math.h>
int main(){

    float x,y;
    scanf("%f",&x);
    if (x<0){
        y=fabs(x+1);
    }
    else if (x>=0 && x<=5){
        y=2*x+1;
    }
    else if (x>5){
        y=sin(x)+5;
    }
    printf("x=%.2f,y=%.2f",x,y);
    return 0;
}

//7-4 判断是否构成三角形 (10 分)
/*#include<stdio.h>
int main(){
    int x,y,z,a;
    scanf("%d %d %d",&x,&y,&z);
    
 
    if (x<y)
        {
            a=x;
            x=y;
            y=a;
        }
    if (x<z)
        {
            a=x;
            x=z;
            z=a;
        }
    if (y<z)
        {
            a=y;
            y=z;
            z=a;
        }

    if ((x<y+z)&&(x-y<z) )
    {
        printf("YES");
    }
    else 
    {
        printf("NO");

    }
    return 0;
}*/

//7-5 简单计算器 (10 分)
/*#include<stdio.h>
int main(){

    int a,b;
    char c;
    scanf("%d",&a);
    while (scanf("%c",&c))
    {
        switch (c)
        {
        case '+':
            scanf("%d",&b);
            a+=b;
            break;
        case '-':
            scanf("%d",&b);
            a-=b;
            break;
        case '*':
            scanf("%d",&b);
            a*=b;
            break;
        case '/':
            scanf("%d",&b);
            if (b==0)
            {printf("ERROR");return 0;  }
            else 
           { a/=b;
            break;}
        case '=':
        printf("%d",a);return 0;  
        default:
            printf("ERROR");
            return 0;  
        }
    }
  
}*/

//7-6 求一元二次方程的根 (14 分)

/*#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x,y,f;
    scanf("%f %f %f",&a,&b,&c);
    f=b*b-4*a*c;
    if (a==0 && b==0 && c==0)
    {
        printf("Zero Equation");
    }
    else if (a==0&&b==0&&c!=0)
    {
        printf("Not An Equation");
    }
    else if (f>0 &&a!=0)
    {
      	x=1.0*(-b+sqrt(f))/(2*a);
		y=1.0*(-b-sqrt(f))/(2*a);
		printf("%.2f\n",x);
		printf("%.2f\n",y);

    }
    else if (f==0 && a!=0)
    {
        x=(-b)/(2*a);
		printf("%.2f",x);
    }
    else if (f<0 && a!=0)
    {
       	x=1.0*(-b)/(2*a);
		y=1.0*sqrt(-f)/(2*a);
		   if( x!= 0){
		printf("%.2f+%.2fi\n",x,y);
		printf("%.2f-%.2fi\n",x,y);
	      }
           else{
	      	printf("0.00+%.2fi\n",y);
		    printf("0.00-%.2fi\n",y);
		  }

    }
    else{
		x=-1.0*(c/b);
		printf("%.2f",x);
    }

    return 0;
}*/


//7-7 计算工资 (10 分)
/*#include<stdio.h>
int main(){
    int a,b;
    float c;
    scanf("%d %d",&a,&b);
    if (a>=5)
    {
        if (b>=40){
            c=40*50+(b-40)*50*1.5;
        }
        else if (b>=0 && b<40)
        {
            c=b*50;
        }
        
    }
    else if (a<5)
    {  
        if (b>=40){
            c=40*30+(b-40)*30*1.5;
        }
        else if (b>=0 && b<40)
        {
            c=b*30;
        }
        
    }
    printf("%.2f",c);
    return 0;

}*/

//7-8 三天打鱼两天晒网 (10 分)

/*#include<stdio.h>
int main(){
   
    int day,day2;
    scanf("%d",&day);
    day2=day%5;
    switch (day2)
    {case 0:
    printf("Drying in day %d",day);
    break;
    case 1:
    case 2:
    case 3:
    printf("Fishing in day %d",day);
        break;
    case 4:
    case 5:
    printf("Drying in day %d",day);
    break;
    default:
        break;
    }
    return 0;
}*/

//7-9 大笨钟 (10 分)

/*#include<stdio.h>
int main(){

    int h,m,i,j;
    scanf("%d:%d",&h,&m);
    if(h < 12 || (h == 12 && m == 0))
    {
        printf("Only 0%d:0%d.  Too early to Dang.",h,m);
    }
    
    
  else
   
    {
        if (m==0)
        {
            for (i = 0; i < h-12; i++)
            {
                printf("Dang");
            }
            
        }
        else if (m>0)
        {
            for (j= 0; j < h-11; j++)
            {
                printf("Dang");
            }
            
        }
        
    }
    
    return 0;
}*/


//7-10 念数字 (10 分)
/*#include <stdio.h>
int count(int x);
int main()
{
  int nn;
  if(scanf("%d",&nn)){};
  int cc;
  if(nn<0)
  {
  	printf("fu ");
  	nn=-nn;
  }
  cc=count(nn);
  for(int i=0;cc>0;i++)
  {
    int mm;
    mm=nn/cc;
    nn%=cc;
    switch (mm)
	{ 
    case 0:
        printf("ling");
        break;
    case 1:
        printf("yi");
        break;
    case 2:
        printf("er");
        break;
    case 3:
        printf("san");
        break;
    case 4:
        printf("si");
        break;
    case 5:
        printf("wu");
        break;
    case 6:
        printf("liu");
        break;
    case 7:
        printf("qi");
        break;
    case 8:
        printf("ba");
        break;
    case 9:
        printf("jiu");
    }
        if(cc>9)
		{
        	printf(" ");
		}
    cc/=10;
  }
  return 0;
}
int count(int x){
	int cnt=1;
	while(x>9)
	{
	    x/=10;
	    cnt*=10;
	}
	return cnt;
}*/


