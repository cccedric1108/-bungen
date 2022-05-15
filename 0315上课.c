/*输入分数 输出等级*/
#include<stdio.h>
int main(){

    int score;
    scanf("%d",&score);
    score=score/10;

    switch (score)

    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
       { printf("E");
        break;}
    
    case 6:
        {printf("D");
        break;}
        
    case 7:
        {printf("C");
        break;}
    case 8:
        {printf("B");
        break;}

    case 9:
        {printf("A");
        break;}
    default:
        {printf("错误\n");
        break;}
    }

    return 0;
}
