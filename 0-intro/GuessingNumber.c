//guessing_number
//课堂示例
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    int high=100;
    int chance=7;
/*
 * print the rule of the game
 */
    printf("this is a game of guessing number\n");
    printf("computer will generate a random number between 1 and %d\n"
           "you have %d chance\n",high,chance);
/*
* generate a random number and restore as secret
*/
    int secret;
    srand(time(NULL));
    //0...rand_max to 1...high
    secret = rand() % high + 1;
    while (chance>0) {


/*
 * let the player enter his guessing number
 */

/*
 * store the guessing number
 * compare the guessing number with the random number
 * and inform the player of the result
 */
        int guessing;
        scanf("%d", &guessing);
/*
 * loop: repeat until the player wins or loses
 */
        if (guessing == secret) {
            printf("you win\n");
            break;
        }
        else if (guessing < secret) {
            printf("too small\n");
        }
        else {
            printf("too big\n");
        }
        chance-=1; //chance--
    }
    return  0;
}
