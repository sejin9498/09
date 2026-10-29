#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int sum=0;
    int grade[SIZE];


    for(i=0; i<SIZE; i++)
    {
        printf("input score of student : ");
        scanf("%d", &grade[i]);
        sum += grade[i];
        
    }
  
    printf("score average: %d\n", sum/SIZE);
    return 0;
}
