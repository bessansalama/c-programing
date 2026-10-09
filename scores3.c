#include <stdio.h>
const int N = 3 ;
float avarage (int length , int arry[]);
 
int main (void)
{
    int scores[N];
    for (int i=0 ; i<N ; i++)
    {
        printf("score:");
        scanf("%i" , &scores[i]);
    }
    printf("Avarage:%f\n" , avarage(N , scores));
}
float avarage (int length , int arry[])
{
    int sum = 0 ;
    for (int i=0 ; i<length ; i++)
    {
        sum += arry[i];
    }
    return sum /(float) length;
}
