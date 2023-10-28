#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int n;printf("For n x n square enter n :- ");scanf("%d",&n);
    int player;printf("Player --> ");scanf("%d",&player);
    int bingo[n][n],fill = 1,i,j,win = 0,check=0;
    for (int i=0; i<=n-1; i++)
    {
        for (int j=0; j<=n-1; j++)
        {
            bingo[i][j]=0;
        }
    }
    srand(time(0)*player);
    while(1)
    {
        i = rand()%n; 
        j = rand()%n;
        if (bingo[i][j]==0)
        {
            bingo[i][j]=fill;
            fill++;
        }
        else
        continue;
        if (fill==n*n+1)
        break;
    }
    while (1)
    {
        system("cls");
        printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-GAME STARTS-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n\n");
        for (int i=0; i<=n-1; i++)
        {
            for (int j=0; j<=n-1;j++)
            {
                if(bingo[i][j]==0)
                printf(" x ");
                else if (bingo[i][j]/10<1)
                printf("0%d ",bingo[i][j]);
                else
                printf("%d ",bingo[i][j]);
            }
            printf("\n");
        }
        int value;printf("enter choice --> ");scanf("%d",&value);
        for (int i=0; i<=n-1; i++)
        {
            for (int j=0; j<=n-1; j++)
            {
                if (bingo[i][j] == value)
                bingo[i][j] = 0;
            }
        }

        win=0;
        //row check
        for (int i=0; i<=n-1; i++)
        {
            check = 0;
            for (int j=0; j<=n-1; j++)
            {
                if (bingo[i][j] == 0)
                check++;
                if (check == n)
                win++;
                if (win >= 5)break;
            }
            if (win >= 5)break;
        }
        if (win >= 5)break;

        //collumn check
        for (int i=0; i<=n-1; i++)
        {
            check = 0;
            for (int j=0; j<=n-1; j++)
            {
                if (bingo[j][i] == 0)
                check++;
                if (check == n)
                win++;
                if (win >= 5)break;
            }
            if (win >= 5)break;
        }
        if (win >= 5)break;

        //diag check
        check=0;
        for (int i=0; i<=n-1; i++)
        {
            
            if (bingo[i][i] == 0)
            check++;
            if (check == n)
            win++;
            if (win >= 5)break;
        }
        if (win >= 5)break;

        check=0;
        for (int i=0; i<=n-1; i++)
        {
            
            if (bingo[i][n-i-1] == 0)
            check++;
            if (check == n)
            win++;
            if (win >= 5)break;
        }
        if (win >= 5)break;
        }
    printf("\n---------------------------------------------------------------------------------\n\n");
    printf("YOU WIN!!!");
    printf("\n\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-GAME ENDS-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n");
    char exit[5];
    scanf("%s",&exit);
    return 0;
}