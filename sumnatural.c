//Sum of first n natural numbers using while loop

# include <stdio.h>
int main( )
{
    int num,sum=0;
    printf("Enter a natural number : ");
    scanf("%d",&num);

    while (num>0){
        sum+=num;
        --num;
    }
    printf("Sum of natural numbers till n =%d",sum);
    return 0;
} 