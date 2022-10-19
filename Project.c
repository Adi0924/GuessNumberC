#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguess;
    srand(time(0));
    number = rand()%100+1;
    // printf("The number is %d\n",number);
    do{
        printf("Guess the Number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
         printf("Lower number please\n");
        }
        else if(guess<number)
        {
            printf("Higher number please\n");
        }
        else{
            printf("you are it in %d attempts\n",nguess);
        }
        nguess++;
    }
    while(nguess!=number);  
    return 0;
}