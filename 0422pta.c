#include<stdio.h>

//7-1 百鸡问题扩展-N鸡问题 (15 分)
/*int main(){

    int a,i,j,k;;
    int c=0;
    int s=0;
    scanf("%d",&a);
    for (i=0;i<a/5;i++){
        for (j=0;j<a/3;j++){
            for (k=0;k<3*a;k+=3){
                if((i+j+k==a)&&(5*i+3*j+k/3==a)){
                    c++;
                    s+=i;
                }
            }
        }
    }
    if(c==0){
        printf("0 -1");
    }
    else if(c>0){
        printf("%d %d",c,s);
    }
    return 0;
}*/

//7-2 编程打印空心字符菱形 (20 分)

/*int main()
{
	int nm,iq,jk;
	char c;
	scanf("%c%d",&c,&nm);
	
	for(iq=1;iq<=nm/2+1;iq++)
	{
		
		for(jk=nm/2;jk>=iq;jk--)
			printf(" ");
		
		for(jk=0;jk<iq*2-1;jk++)
		{
			
			if(jk==0 || jk==iq*2-2) 
				printf("%c",c);
			else 
				printf(" ");
		}
		c+=1;
		printf("\n");
	}
	c-=1; 
	
	for(iq=1;iq<=nm/2;iq++)
	{
		c-=1;
		
		for(jk=1;jk<=iq;jk++)
			printf(" ");
		
		for(jk=nm-2;jk>=iq*2-1;jk--)
		{
			if(jk==nm-2 || jk==iq*2-1) 
				printf("%c",c);
			else 
				printf(" ");
		} 
		printf("\n");
	}
}
*/

//7-4 水仙花数 (20 分)
/*#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int ac,bd;
	ac=pow(10,n-1);
	bd=pow(10,n)-1;
	int i;
	for(i=ac;i<=bd;i++)
	{
		int jk=i;
		int suum=0;
		while(jk>0)
		{
			suum=suum+pow(jk%10,n);
			jk /=10;
		}
		if(suum==i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}*/


//7-5 小于m的最大的10个素数 (15 分)

/*int sushu(int x){
    
        
        for (int j=2;j<x;j++){
            if(x%j==0)
        {
            return 0;
        }
            
        
    }
    return 1;
}

int main(){

    int n;
    int count=1;
    scanf("%d",&n);
    for (int q=n-1;q>=3;q--){
        if(sushu(q) && count<=10){
            
            
            printf("%6d",q);
            count++;

        }
    }
    return 0;
}*/


//7-6 1000以内所有各位数字之和为n的正整数 (10 分)

/*int zhengshu(int x,int y){//y是输入的整数
    int sum=0;
    while (x>0)
    {
        sum+=x%10;
        x=x/10;
    }
    if (sum==y){
        return 1;
    }
    else
        return 0;


}

int main(){

    int count=0;
    int n;
    scanf("%d",&n);
    for (int i=1;i<=1000;i++){
        if (zhengshu(i,n))
        {
            printf("%8d",i);
            count++;
             if (count%6==0 )
        {
            printf("\n");
        }

        }
    }    
    if (count%6!=0)
    {
        printf("\n");
    }
    
    
    return 0;
}*/

//7-3 N个数求和 (20 分)

#include<stdio.h>
typedef long long ll;
int gggy(ll x,ll y)
{
	int ttemp = (x%y == 0) ? y : gggy(y, x % y);
	return ttemp;
}
int main()
{
	ll ad = 0, b = 0,zzi=0,pmu=1,maxxgy=0;
	int n = 0,i=0;
	scanf("%d", &n);
	do
	{
		scanf("%lld/%lld", &ad, &b);
		zzi =zzi*b;
		zzi = zzi + ad * pmu;
		pmu =pmu *b;
		maxxgy = gggy(zzi, pmu);
		zzi /= maxxgy;
		pmu /= maxxgy;
		i++;
	} while (i < n);
	if (zzi % pmu == 0)
		printf("%lld", zzi / pmu);
	else if (zzi && (zzi / pmu == 0))
		printf("%lld/%lld", zzi, pmu);
	else
		printf("%lld %lld/%lld", zzi / pmu, zzi%pmu, pmu);
	return 0;
}
