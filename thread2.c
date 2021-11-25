#include <stdio.h>
#include<pthread.h>
void* PrintEvenNos(void*);
void* PrintOddNos(void*);
void main(void)
{
    unsigned int data=0;
pthread_t tid1,tid2;
    pthread_create(&tid1,0,&PrintEvenNos,&data);
    pthread_create(&tid2,0,&PrintOddNos,&data);

    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
}

void* PrintEvenNos(void *ptr)
{
    int p=*(int*)ptr;
printf("\neven numbers are:\n");
     while(p <= 100)
    {
       if(p%2 == 0)
         printf("%d,",p);
         p++;
    }
}

void* PrintOddNos(void* ptr1)
{
    int d=*(int*)ptr1;
    //printf("\n");
    printf("\nodd numbers are:\n");
    while(d <= 100)
    {
       if(d%2 != 0)
          printf("%d,",d);
          d++;
    }
printf("\n"); 
}

