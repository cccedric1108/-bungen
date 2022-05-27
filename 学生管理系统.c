#include <stdio.h>
#include<string.h>
#include<stdlib.h>

//结构体初始化
struct student
{
    char name[20];
    int number;
    int scored;

};

//创建学生信息
void CreatInfo(int *n_, struct student Stu[]){

    int number,scored;
    char name[20];
    printf("请按顺序输入%d个学生的信息：(学号_姓名_成绩)\n",*n_);
    for (int i = 0; i < *n_; i++)
    {
        scanf("%d",&Stu[i].number);
        scanf("%s",&Stu[i].name);
        scanf("%d",&Stu[i].scored);

}
}

//对学生信息进行排序
void SortedInfo(int *n_,struct student Stu[]){

    struct student temp;
    for (int i = 0; i < *n_-1;i++)
    {
        for (int j = i+1; j < *n_; j++)
        {
            if (Stu[i].scored>Stu[j].scored)
            {
                temp=Stu[j];
                Stu[j]=Stu[i];
                Stu[i]=temp;
            }
            
        }
        
    }
    
}

//输出学生信息
void OutputInfo(int *n_,struct student Stu[]){

    for (int i = 0; i < *n_; i++)
    {
        if (Stu[i].number!=0)
        {
            printf("%d\t%s\t%d\n",Stu[i].number,Stu[i].name,Stu[i].scored);
        }
        
    }
    

}

//学生信息查询
void SearchInfo(int *n_,struct student Stu[]){

    int m;
    int flag=0;
    printf("请输入查询学生的学号：\n");
    scanf("%d",&m);

    for (int i = 0; i < *n_; i++)
    {
        if (Stu[i].number==m)
        {
            printf("学号为%d的学生信息如下：\n",m);
            printf("%d\t%s\t%d\n",Stu[i].number,Stu[i].name,Stu[i].scored);
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("未查询到该学生信息！\n");
    }

}

//学生信息插入
void InsertInfo(int *n_,struct student Stu[]){

    int name[20],m;
    int number,scored;
    printf("请输入插入学生的信息：(学号_姓名_成绩)\n",*n_);
    scanf("%d",&number);
    scanf("%s",&name);
    scanf("%d",&scored);
    printf("请输入插入的位置：\n");
    scanf("%d",&m);
    if (m>*n_+1 || m<=0)
    {
        printf("超出范围！插入失败！");
    }
   
    else if (m==*n_+1)
    {
        Stu[*n_].number=number;
        Stu[*n_].scored=scored;
        strcpy(Stu[*n_].name,name);
        printf("插入成功！\n");
        *n_=*n_+1;
    }
    
    else
    {
        for (int i = *n_-1; i >=m-1 ; i--){
        Stu[i+1]=Stu[i];
    }
        Stu[m-1].number=number;
        Stu[m-1].scored=scored;
        strcpy(Stu[m-1].name,name);
        printf("插入成功！\n");
        *n_=*n_+1;


    }

}


//学生信息删除
void DeleteInfo(int *n_,struct student Stu[]){

    int m,flag=0;
    printf("请输入删除学生学号：\n");
    scanf("%d",&m);
    for (int i = 0; i < *n_; i++)
    {
        if (Stu[i].number==m)
        {
            for (int j = i; j < *n_; j++)
            {
                Stu[j]=Stu[j+1];
            }
            *n_=*n_-1;
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("未找到该学生！无法删除！\n");
    }
    else
        printf("删除成功！\n");

}

//学生成绩统计
void SammlungInfo(int *n_,struct student Stu[]){

    int a=0,b=0,c=0,d=0,e=0;
    for (int i = 0; i < 5; i++)
    {
        
            if (Stu[i].scored<=60)
            {
                e++;
            }
            else if (Stu[i].scored>60 && Stu[i].scored<=70)
            {
                d++;
            }
            else if (Stu[i].scored>70 && Stu[i].scored<=80)
            {
                c++;
            }
            else if (Stu[i].scored>80 && Stu[i].scored<=90)
            {
                b++;
            }
            else if (Stu[i].scored>90)
            {
                a++;
            }
            
        
        
    }
    printf("A等级(100-90分)有%d人\n",a);
    printf("B等级(90-80分)有%d人\n",b);
    printf("C等级(80-70分)有%d人\n",c);        
    printf("D等级(70-60分)有%d人\n",d);
    printf("E等级(低于60分)有%d人\n",e);
        


}

//提示窗口
int Start(){

    printf("1.学生信息输出\n");
    printf("2.学生信息排序\n");
    printf("3.学生信息查询\n");
    printf("4.学生信息插入\n");
    printf("5.学生信息删除\n");
    printf("6.学生信息统计\n");
    printf("请选择你需要的功能，输入对应数字编号:\n");
    
}

int read(){
    int k;
    scanf("%d",&k);
    return k;
}





int main(){


    printf("请您录入学生信息，输入学生信息的个数：\n");
    int n;
    int *n_=&n; 
    scanf("%d",&n);
    struct student Stu[100];
    CreatInfo(n_,&Stu[0]);
    while (1)
    {
        Start();
        switch (read())
        {
        case 1:
            OutputInfo(n_,&Stu[0]);
            break;
        case 2:
            SortedInfo(n_,&Stu[0]);
            break;
        case 3:
            SearchInfo(n_,&Stu[0]);
            break;
        case 4:
            InsertInfo(n_,&Stu[0]);
            break;
        case 5:
            DeleteInfo(n_,&Stu[0]);
            break;
        case 6:
            SammlungInfo(n_,&Stu[0]);
            break;
        default:
            printf("输入错误，请重新输入！\n");
            break;
        }
    }

}

