#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
	int a,b;
	srand(time(NULL));
	a= rand() %10;
	
	 int maxChances = 3;
    int remainingChances = maxChances;
	
	printf("I have a number in my mind (0-9)....Can anyone guess this number?\n");
	while(1){
	
	printf("Enter this guess :");
	scanf("%d",&b);
	if(a==b){
		
		printf("Yes the guessed the correct number");
		break;
	} else if(a>b){
		printf("My Number is greater than %d..Again Try it!\n\n",b);
	}else{
		printf("My Number is smaller than %d..Again Try it!\n\n",b);
	}
  
  	remainingChances--;

            
            if (remainingChances == 0) {
              printf( "Sorry, you've run out of chances. The correct number was: \n",b);
                break;
            }

            printf("You have chances remaining.\n\n");
        }
};






