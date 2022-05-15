#include<stdio.h>

//R7-1 求最大值及其下标
/*int main()
    {
    int a,c;
    int max=0;
    scanf("%d",&a);
    int b[10];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    max=b[0];
    c=0;
    for (int j=0;j<a;j++){
        if(max<b[j]){
            max=b[j];
            c=j;
        }
    }
    printf("%d %d",max,c);
    return 0;

}*/

//R7-2 简化的插入排序
/*int main(){
    int a,b[11],c,d;
    int flage=0;
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        scanf("%d",b+i);
    }
    scanf("%d",&c);
    for (int j=0;j<a;j++){
        if (c>b[j] && c<b[j+1]){
            for (int i=a+1;i>j;i--){
                b[i]=b[i-1];
            }
            b[j+1]=c;
            flage=1;
            break;
        }

    }
    
    for (int i=0;i<a+1;i++){
            printf("%d ",b[i]);
    }
    
   
    return 0;
}*/
/*
#include "stdio.h"
int main()
{
    int s, a_[10];
    scanf("%d", &s);
    int m, x;
    for(m=0; m<s; m++)
    {
        scanf("%d", &a_[m]);
    }
    scanf("%d", &x);
    for(m=s-1; m>=0; m--)
    {
        if(x > a_[m])
        {
            a_[m+1] = x;
            break;
        }else {
            a_[m+1] = a_[m];
        }
    }
    if(m<0) a_[0] = x;
    for(m=0; m<s+1; m++)
    {
        printf("%d ", a_[m]);
    }
    return 0;
}
*/




//R7-3 交换最小值和最大值
/*
int main(){
    int m,a[10];
    int max_a,min_a,x,y;
    scanf("%d",&m);
    for (int i=0;i<m;i++){
        scanf("%d",&a[i]);

    }

    int min=a[0];
    for (int j=0;j<m;j++){
        if (min>a[j]){
            min=a[j];
            min_a=j;
        }
    }
    x=a[0];
    a[0]=min;
    a[min_a]=x;
        
    int max=a[0];
    for (int j=0;j<m;j++){
        if (max<a[j]){
            max=a[j];
            max_a=j;
        }
    }
    y=a[m-1];
    a[m-1]=max;
    a[max_a]=y;

    for (int i=0;i<m;i++){
        printf("%d ",a[i]);
    }


    return 0;
}
*/

//R7-4 删除重复的数据

/*int main(){
    int a,b[10];
    int count=0;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        int c=b[i];
        for (int j =i+1; j < a; j++)
        {
           if (c==b[j]){
               count++;
               for (int m=j;m<a;m++){
                   b[m]=b[m+1];
                   
               }          
               
            }
        }
        
    }
    for (int i = 0; i < a-count/2; i++)
    {
        printf("%d",b[i]);
        if(i<a-1-count/2)
        printf(" ");
    }
    

    return 0;
    
}*/
/*#include <stdio.h>
int main()
{
        int z,i,q;
        int arr_1[10];
        scanf("%d",&z);
        for(i=0;i<z;i++)
            scanf("%d",&arr_1[i]);
        for(q=0;q<z-1;q++)
		{
            for(i=q+1;i<z;i++)
            {
                if(arr_1[q]==arr_1[i])
				            {
                        arr_1[i]=0;
                    }
            }
    }
            int s=0,arr_2[10];
            for(i=0;i<z;i++)
                {
                  if(arr_1[i]!=0)
			       	     {
                    arr_2[s]=arr_1[i];
                    s++;
			           	}
                }
            for(i=0;i<s;i++)
                { 
                   printf("%d",arr_2[i]);
                   if(i!=s-1)
                       printf(" "); 
                }
    return 0;
}*/

//R7-5 找出不是两个数组共有的元素
#include <stdio.h>
int main()
{
    int i,j,n,m,arr[20],bcd[20],r[40],y=0,t,z=0,q=0;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    scanf("%d",&m);
    for(j=0;j<m;j++)
        {scanf("%d",&bcd[j]);}
    for(i=0,--m;i<n;i++)
    {
        for(t=0;t<y;t++)
        {   
            q=0;
            if(arr[i]==r[t])
		{
            q++;
            break;}
            }
		if(q)
            continue;
        for(t=m;t>=0;t--)
        {
            if(arr[i]==bcd[t])
            {
                z++;
                break;
            }
                
        }
        if(!z)
        {
            r[y]=arr[i];
            y++;
        }
        z=0;
    }                                
     for(i=0,--n;i<=m;i++)
    {
        for(t=0;t<y;t++)
        {
            q=0;
            if(bcd[i]==r[t])
        {
            q++;
            break;
            }
            }
		if(q)
            {
                continue;
                }
        for(t=n;t>=0;t--)
        {
            if(bcd[i]==arr[t])
            {
                z++;
                break;
            }
                
        }
        if(!z)
        {
            r[y]=bcd[i];
            y++;
            }
        z=0;
    }                              
    for(i=0;i<y-1;i++)
        printf("%d ",r[i]);
    
    printf("%d",r[y-1]);         
    
    return 0;
    
    
}



//R7-6 数组中能被5整除的数的和
/*int main(){
    int a[10];
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if(a[i]%5==0){
            sum+=a[i];
        }
    }
    printf("%d",sum);
    return 0;
    
}*/

//R7-7 求整数序列中出现次数最多的数
/*
int main(){
    int a;
    scanf("%d",&a);
    int b[1000],c[1000]={0};
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if(b[i]==b[j]){
                c[i]++;
            }
        }
        
    }
    int max=c[0];
    int t=0;
    for (int i = 0; i < a; i++)
    {
        if(max<c[i]){
            max=c[i];
            t=i;
        }
    }
    
    printf("%d %d",b[t],max);
    return 0;
}*/

//R7-8 查找整数

/*int main(){

    int a,b;
    int flag=0;
    scanf("%d %d",&a,&b);
    int c[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&c[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if(b==c[i]){
            printf("%d",i);
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("Not Found");
    }
    
    return 0;


}*/

//R7-9 一个数插入到有序数列中
/*
int main(){
    
    int a,c;
    scanf("%d",&a);
    
    int b[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    
    scanf("%d",&c);
    int flag=0;
    for (int i = a; i >=0; i--)
    {
        if (b[i]<=c)
        {
            b[i]=b[i-1];
            flag++;
        
        }
        else{
            b[i+1]=c;
            break;
        }
        
    }
        if (b[0]==0)
    {
        b[0]=c;
    }
 
    for (int i = 0; i < a+1; i++)
    {
        printf("%3d",b[i]);
    }

    return 0;
    
}*/
/*
#include <stdio.h>
int main()
{
	int c,p[10],m;
	scanf("%d",&c);
	for(int i=0;i<c;i++){
		scanf("%d",&p[i]);
	}
	scanf("%d",&p[c]);
	for(int i=0;i<c+1;i++){
		for(int j=0;j<c-i;j++){
			if(p[j]<p[j+1]){
				m=p[j];
				p[j]=p[j+1];
				p[j+1]=m;
			}
		}
	}
	for(int i=0;i<=c;i++){
		printf("%3d",p[i]);
	}
	return 0;
}*/

