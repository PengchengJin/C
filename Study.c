#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void menu()
{
    printf("***************\n");
    printf("****游戏开始****\n");
    printf("***1、开始游戏**\n");
    printf("***2、退出游戏**\n");
}

void game()
{
    int rec = rand()%100+1;
    int a;
    do
    {
        printf("请输入一个整数：\n");
    scanf("%d",&a);
    if (a>rec)
    {
        printf("输入的数太大了,请重新输入\n");
    }
    else if(a<rec)
    {
        printf("你输入的数太小了，请重新输入\n");
    }
    else
    {
        printf("恭喜你猜对了\n");
        break;
    }
    } while (1);
    
    
}

int main()
{
    /*for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }*/

    srand((unsigned)time(NULL));
    int input;
    do
    {
       menu();
        printf("请输入你的选择：\n");
        scanf("%d",&input);
        switch (input)
          {
           case 1:
              game();
              break;
           case 2:
              printf("退出游戏");
              break;
           default:
              printf("输入错误");
              break;
          }
    }while (input!=2);
    
    return(0);
}