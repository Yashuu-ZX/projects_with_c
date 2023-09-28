#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random_num,p1,p2,chance=1;
    char player1[20],player2[20];
    srand(time(0));
    printf("\n---------------------------------------------------------------------------------\n");
    printf("\nRules :-\n");
    printf("1) Both player have to guess the number.\n");
    printf("2) Each player will get chance consecutively.\n");
    printf("3) First player who gets the number right wins.\n");
    printf("\n---------------------------------------------------------------------------------\n");
    printf("\nPlayer 1 name ---> ");
    scanf("%s",&player1);
    printf("Player 2 name ---> ");
    scanf("%s",&player2);
    printf("\n---------------------------------------------------------------------------------\n");
    printf("== CHOOSE DIFFICULTY ==\n");
    printf("Enter 1 for number between 1 to 10\n");
    printf("Enter 2 for number between 1 to 100\n");
    printf("Enter 3 for number between 1 to 1000\n");
    printf("Enter 4 for number between 1 to 10000\n");
    for (int dif;;)
    {   printf("\nDIFFICULTY LEVEL = ");
        scanf("%d",&dif);
        if (dif == 1)
        {
            random_num = rand()%10+1;break;
        }
        else if (dif == 2)
        {
            random_num = rand()%100+1;break;
        }
        else if (dif == 3)
        {
            random_num = rand()%1000+1;break;
        }
        else if (dif == 4)
        {
            random_num = rand()%10000+1;break;
        }
        else
        {
            printf("Please enter a correct number.");
        }
    }
    printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-GAME STARTS-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n\n");
    while (1)
    {
        if(chance%2 != 0)
        {
            printf("%s's turn, Guess the number --> ",player1);
            scanf("%d",&p1);
            if (p1>random_num)
            {
                printf("This is number GREATER than the actual number\n");
                chance++;
            }
            else if (p1<random_num)
            {
                printf("This is number SMALLER than the actual number\n");
                chance++;
            }
            else
            break;
        }
        else
        {
            printf("%s's turn, Guess the number --> ",player2);
            scanf("%d",&p2);
            if (p2>random_num)
            {
                printf("This is number GREATER than the actual number\n");
                chance++;
            }
            else if (p2<random_num)
            {
                printf("This is number SMALLER than the actual number\n");
                chance++;
            }
            else
            break;
        }
        printf("\n");
    }
    printf("\n---------------------------------------------------------------------------------\n\n");
    if(chance%2 != 0)
    {
        printf("CONGRATULATIONS\n");
        printf("%s WINS THE GAME \n",player1);
        printf("Right number was ---> %d\n",random_num);
    }
    else if (chance%2 == 0)
    {
        printf("CONGRATULATIONS\n");
        printf("%s WINS THE GAME \n",player2);
        printf("Right number was ---> %d\n",random_num);
    }
    printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-GAME ENDS-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n\n");
    return 0;
}