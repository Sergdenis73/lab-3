#include <stdio.h>
#include <stdlib.h> 

int countIdenticalPairs(int A[], int N)
 {
    int count=0;
    
    if (N%2 !=0) 
    {
        printf("Помилка: довжина масиву не є парною.\n");
        return -1;
    }
    
    for (int i=0; i<N; i+=2)
     {
        if (A[i]==A[i+1])
         {
            count+=1;
        }
    }
    
    return count;
}

int main() 
{
    int N;    
    printf("Введіть розмір масиву (парне число): ");
    scanf("%d", &N);
    
    if (N%2 !=0) 
    {
        printf("Розмір масиву повинен бути парним числом.\n");
        return 1;
    }
    
    int *A=(int *)malloc(N *sizeof(int));
    if (A==NULL) 
    {
        printf("Помилка виділення пам'яті!\n");
        return 1;
    }
    
    printf("Введіть елементи масиву:\n");
    for (int i=0; i<N; i+=1) 
    {
        scanf("%d", &A[i]);
    }
    
    int result = countIdenticalPairs(A, N);
    printf("Кількість однакових пар: %d\n", result);
    
     free(A);
    
    return 0;
}