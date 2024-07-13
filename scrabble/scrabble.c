#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_value(string c);
int main(void)
{

    scrab[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10}
    // get two input from user

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
        printf("Tie!!");
    }
    //print out "player 1 wins" or "player 2" wins.
}

int compute_value(string c)
{
   // operate on the two values
   int score = 0;

   score = score + 

}
