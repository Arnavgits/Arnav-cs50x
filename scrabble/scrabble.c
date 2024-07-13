#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int scrab[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int compute_value(string c);
int main(void)
{


    string a = get_string("player 1: ");
    string b = get_string("player 2: ");

    int score1 = compute_value(a);
    int score2 = compute_value(b);

    if(score1 > score2)
    {
        printf("player 1 wins\n");
    }
    else if(score2 > score1)
    {
        printf("player 2 wins\n");
    }
    else
    {
        printf("Tie!!\n");
    }
}

int compute_value(string c)
{
   int score = 0;
   for (int i = 0;i < strlen(c); i++)
   {
      if(isupper(c[i]))
      {
      score = score + scrab[c[i] - 65];
      }
      else if(islower(c[i]))
      {
      score = score + scrab[c[i] - 97];
      }
   }
   return score;
}
