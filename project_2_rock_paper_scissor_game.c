#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void element(int a)
{
    if (a==1)
    printf("STONE");
    else if (a==2)
    printf("PAPER");
    else if (a==3)
    printf("SCISSOR");
    else
    printf("---");
}
int main()
{
    int turn,score_man=0,score_comp=0;
    srand(time(0));
    printf("\n---------------------------------------------------------------------------------\n");
    printf("== CHOOSE NUMBER OF TURNS ==\n");
    printf("Number of turns --> ");
    scanf("%d",&turn);
    printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-GAME STARTS-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n\n");
    printf("1 --> ROCK\n");
    printf("2 --> PAPER\n");
    printf("3 --> SCISSOR\n\n");
    for (int i = 1,temp,input;i<=turn;i++)
    {
        temp = rand()%3+1;
        printf("Enter your choice --> ");
        scanf("%d",&input);
        printf("Your choice = ");element(input);
        printf("\ncomputers choice = ");element(temp);
        if (temp == input)
        {
            printf("\nITS A TIE FOR THIS ROUND!!\n\n");
            score_man +=0;
            score_comp +=0;
        }
        else if ((temp == 1 && input == 2)||(temp == 2 && input == 3)||(temp == 3 && input == 1))
        {
            printf("\nYOU WIN IN THIS ROUND!!\n\n");
            score_man +=1;
            score_comp +=0;
        }
        else if ((temp == 2 && input == 1)||(temp == 3 && input == 2)||(temp == 1 && input == 3))
        {
            printf("\nCOMPUTER WIN IN THIS ROUND!!\n\n");
            score_man +=0;
            score_comp +=1;
        }
        else
        {
            printf("\nEnter correct please!!\n\n");
            i-=1;
        }
    }
    printf("-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-GAME ENDS-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n\n");
    printf("YOUR SCORE  |  COMPUTER SCORE\n");
    printf("     %d      |        %d      \n",score_man,score_comp);
    if (score_man>score_comp)
    printf("YOU WON!!\n");
    else if (score_comp>score_man)
    printf("YOU LOSE!!\n");
    else
    printf("ITS A TIE!!\n");
    printf("\n---------------------------------------------------------------------------------\n\n");
    return 0;
}