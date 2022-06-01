#include <stdio.h>
#include<string.h>
#include<stdlib.h>

//结构体初始化
struct student
{
    char name[20];
    int number;
    int scored;
    struct student *next;
};


//学生信息录入
struct student *CreatInfo(int n){               //输入n个学生的信息

    struct student *p,*q,*head;                 //p是指向每个结点的指针 q是指向尾结点的指针
    head=(struct student*)malloc(sizeof(struct student));       //创建头结点
    q=head;                                     //q是指向最后一个结点的指针
    int number,scored;
    char name[20];
    printf("请按顺序输入%d个学生的信息：\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&number);
        scanf("%s",&name);
        scanf("%d",&scored);
        p=(struct student*)malloc(sizeof(struct student));
        p->number=number;
        p->scored=scored;
        strcpy(p->name,name);
        q->next=p;
        q=p;                                    //q指向最后一个结点

    }   
    q->next=NULL;                               //尾结点指针域为NULL
    return head;                                        
}


//输出学生信息
void PrintInfo(struct student *head){

    struct student *p;
    p=head->next;       //利用指针p的移动遍历整个链表
    while (p)
    {
        printf("%d\t%s\t%d\n",p->number,p->name,p->scored);     
        p=p->next;                      //更新指针p
    }

}

//学生信息排序
void Sorted(struct student *head){

    struct student temp;                        //创建临时变量存放交换的数据信息
    struct student *p,*q;                       //创建指针p遍历链表
    p=head->next;
    q=p->next;
    int count=0;                                //创建计数器，获得结点数，方便冒泡排序
    while (p!=NULL)
    {
        count++;
        p=p->next;
    }
    p=head->next;                               //p指针返回头指针下一结点
   for (int i = 0; i < count-1; i++)            //冒泡排序
   {
       
       for (int j = i+1; j < count; j++)
       {
           if (p->scored>q->scored)             //交换位置
            {
                strcpy(temp.name,q->name);
                temp.number=q->number;
                temp.scored=q->scored;

                strcpy(q->name,p->name);
                q->number=p->number;
                q->scored=p->scored;

                strcpy(p->name,temp.name);
                p->number=temp.number;
                p->scored=temp.scored;
                
            }
            q=q->next;
       }
       p=p->next;
       q=p->next;                                //指针后移
   }
    printf("排序成功！\n");

}

//学生信息查询
void SearchInfo(struct student *head){

    int n;
    int flag=0;                             //查询成功标志
    printf("请输入查询学生的学号：\n");
    scanf("%d",&n);
    struct student *p;
    p=head->next;
    while (p->next)
    {
        if (p->number==n)
        {
            printf("学号为%d的学生信息如下：\n");
            printf("%d\t%s\t%d\n",p->number,p->name,p->scored);
            flag=1;                         //更新查询状态
            break;
        }
        p=p->next;
    }
    if (flag==0)
    {
        printf("未查询到该学生信息！\n");
    }
    

}

//学生信息插入
void InsertInfo(struct student *head){
 
    printf("请输入学生的信息（学号_姓名_成绩）：\n");
    int number,scored,temp;
    int flag=0;                             //插入成功标志
    char name[20];
    scanf("%d %s %d",&number,&name,&scored);
    printf("请输入需要插入的位置：\n");
    scanf("%d",&temp);
    struct student *p,*t;
    p=head;

    for (int i = 1; i < temp; i++)
    {
        p=p->next;
        if (p->next==NULL)
        {
            flag=1;                 //超出范围
            break;
        }
        
    }
    
    if (flag==0)
    {
        t=(struct student*)malloc(sizeof(struct student));
        strcpy(t->name,name);
        t->number=number;
        t->scored=scored;
        t->next=p->next;
        p->next=t;
        printf("插入成功！\n");
        
    }
    else{
        printf("超出范围，插入失败！\n");
    }
    
    
}

//学生信息删除
void DeleteInfo(struct student *head){

    int number,flag=0;
    printf("请输入删除学生的学号：\n");
    scanf("%d",&number);
    struct student *p,*q;                       //p，q分别是指向头结点和首结点的指针
    q=head;
    p=head->next;
    if (q->number==number)                      //删除信息存储在首结点的情况
    {
        head=q->next;
        free(q);
        flag==1;
    }
    else{                                       //其他情况

        while (p)
        {
            if (p->number==number)
            {
                q->next=p->next;
                free(p);
                flag=1;
            }
            p=p->next;
            q=q->next;
        }
        

    }
    
    if (flag==1)
    {
        printf("删除成功！\n");
    }
    else 
        printf("查无此人，删除失败！");
    
}


//学生成绩统计
void SammlungInfo(struct student *head){

    int a=0,b=0,c=0,d=0,e=0;
    struct student *p;
    p=head->next;
    while (p)
    {
        if (p->scored<=60)
            {
                e++;
            }
            else if (p->scored>60 && p->scored<=70)
            {
                d++;
            }
            else if (p->scored>70 && p->scored<=80)
            {
                c++;
            }
            else if (p->scored>80 && p->scored<=90)
            {
                b++;
            }
            else if (p->scored>90)
            {
                a++;
            }
            p=p->next;
    }
    printf("A等级(100-90分)有%d人\n",a);
    printf("B等级(90-80分)有%d人\n",b);
    printf("C等级(80-70分)有%d人\n",c);        
    printf("D等级(70-60分)有%d人\n",d);
    printf("E等级(低于60分)有%d人\n",e);
    
}

//提示窗口
int Start(){

    printf("\n1.学生信息输出\n");
    printf("2.学生信息排序\n");
    printf("3.学生信息查询\n");
    printf("4.学生信息插入\n");
    printf("5.学生信息删除\n");
    printf("6.学生信息统计\n\n");
    printf("请选择你需要的功能，输入对应数字编号:\n");
    
}

//获取用户输入数字
int read(){
    int k;
    scanf("%d",&k);
    return k;
}



int main(){

    int n;
    struct student *head=NULL;      //创建头指针
    printf("请输入创建学生信息的个数：\n");
    scanf("%d",&n);
    head=CreatInfo(n);
    while (1)
    {
        Start();                                
        switch (read())                         //获取输入数字，选择相应的函数
        {
        case 1:
            PrintInfo(head);
            break;
        case 2:
            Sorted(head);
            break;
        case 3:
            SearchInfo(head);
            break;
        case 4:
            InsertInfo(head);
            break;
        case 5:
            DeleteInfo(head);
            break;
        case 6:
            SammlungInfo(head);
            break;
        default:
            printf("输入错误，请重新输入！\n");
            break;
        }
    }

}
