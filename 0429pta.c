#include<stdio.h>

//7-1 螺旋方阵

/*
#include <stdio.h>
#define N 10
int main()
{
	int  n, a[N][N] = { 0 }, value = 1;
	scanf("%d", &n);
	
	int flag, kaishi, jieshu;
	flag = n;
	kaishi = 0;
	jieshu = n;

	while (flag > 1) {
		
		for (int j = kaishi; j < jieshu; j++)
		{
			a[kaishi][j] = value++;
		}
		
		for (int i = kaishi + 1; i < jieshu; i++)
		{
			a[i][jieshu - 1] = value++;
		}
		
		for (int j = jieshu - 2; j >= kaishi; j--)
		{
			a[jieshu - 1][j] = value++;
		}
		
		for (int i = jieshu - 2; i > kaishi; i--)
		{
			a[i][kaishi] = value++;
		}

		
		flag = flag - 2;
		
		kaishi = kaishi + 1; 
		jieshu = jieshu - 1;  
	}
	
	if (n % 2)
		a[kaishi][jieshu - 1] = value;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%3d", a[i][j]);
		printf("\n");

	}

	return 0;
}
*/

//7-2 找最小的字符串
/*
#include<string.h>
int main(){
	int a;
	scanf("%d\n",&a);
	char b[1000][80],*c;
	for (int i = 0; i < a; i++)
	{
		gets(b[i]);

	}
	c=b[0];
	for (int i = 1; i < a; i++)
	{
		if(strcmp(c,b[i])>0){
			c=b[i];
		}
	}
	
	printf("Min is: %s",c);
}*/

//7-3 英文单词排序
/*#include<string.h>

int main(){
	char a[20][10],flag[20],compre[20];
	int i=0,j;
	while (1)
	{
		scanf("%s",&compre);
		if (compre[0]!='#'){
			strcpy(a[i],compre);
			i++;
		}
		else{
			break;
		}
	}
	int m=i;
	for ( i = 0; i < m-1; i++)
	{
		for ( j = 0; j < m-i-1; j++)
		{
			if (strlen(a[j])>strlen(a[j+1]))
			{
				strcpy(flag,a[i]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],flag);
			}
			
		}
		
		
	}
	for ( i = 0; i < m; i++)
		{
			printf("%s ",a[i]);
		}
}*/

//7-4 矩阵A乘以B

/*#include<string.h>
int main(){
	int a,b,c,d,x[100][100],y[100][100],z[100][100];
	scanf("%d %d",&a,&b);
	
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d",&x[i][j]);
		}
		
	}

	scanf("%d %d",&c,&d);
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < d; j++)
		{
			scanf("%d",&y[i][j]);
		}
		
	}

	
	
	if (b!=c){
		printf("Error: %d != %d",b,c);

	}
	else{
		printf("%d %d\n",a,d);
		int sum=0;
		
		for (int i = 0; i < a; i++){
			for (int j = 0; j < d; j++){
				for (int k = 0; k < b; k++)
				{
					z[i][j]+=x[i][k]*y[k][j];
				}
				if(j==d-1)
				printf("%d",z[i][j]);
				else 
				printf("%d ",z[i][j]);			
		}
			printf("\n");		
	}
	}
	

	return 0;
}*/

/*#include <stdio.h>
int main ()
{
	
	int x[100][100],y[100][100],z[100][100]={0};
	int a1,a2,b1,b2;
	scanf("%d%d",&a1,&a2);


	for(int i=0;i<a1;i++)
	{
		for(int j=0;j<a2;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}

	scanf("%d%d",&b1,&b2);
	for(int i=0;i<b1;i++)
	{
		for(int j=0;j<b2;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}

	if(a2==b1)
	{
		printf("%d %d\n",a1,b2);
		for(int i=0;i<a1;i++)
		{
			for(int j=0;j<b2;j++)
			{
				for(int k=0;k<a2;k++)
				{
					z[i][j]+=x[i][k]*y[k][j];
				} 
				if(j==b2-1)
				printf("%d",z[i][j]);
				else 
				printf("%d ",z[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("Error: %d != %d",a2,b1);
	return 0;
}
*/

//7-5 找鞍点
/*
int main(){
	int i,j,m,a[6][6]={0},max_h,max_l,h,l,flag=0;
	scanf("%d",&m);
	for ( i = 0; i < m; i++)
	{
		for ( j = 0; j < m; j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}



	for ( i = 0; i < m; i++)
	{
		max_h=a[i][0];
		for ( j = 0; j < m; j++)
		{
			if (max_h<=a[i][j])
			{
				max_h=a[i][j];
				h=j;
			}
			
		}
		max_l=a[0][h];
		for ( j = 0; j < m; j++)
		{
			if (max_l>=a[j][h])
			{
				max_l=a[j][h];
				l=j;
			}
			
		}
		if (max_h==max_l)
		{
			printf("%d %d",l,h);
			flag=1;
			break;
		}
		
	}
	if (flag==0)
	{
		printf("NONE");
	}
	
	return 0;

}*/


//7-6 求矩阵各行元素之和

/*int main(){

	int a,b,c[6][6];
	scanf("%d %d",&a,&b);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d",&c[i][j]);
		}
		
	}

	for (int i = 0; i < a; i++)
	{
		int sum=0;
		for (int j = 0; j < b; j++)
		{
			sum+=c[i][j];
		}
		printf("%d\n",sum);
	}
	
	return 0;
}*/

//7-7 删除重复字符
/*
int main(){
    int haxi[128]={0};
    char a[81];
    gets(a);
    for(int i=0;a[i]!='\0';i++){
    	haxi[(int)a[i]]=1;
	}
	for(int i=0;i<128;i++){
		if(haxi[i]==1){
			printf("%c",i);
		}
	}
    return 0;
}*/

