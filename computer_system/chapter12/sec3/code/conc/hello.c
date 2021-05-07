/* 
 * hello.c - Pthreads "hello, world" program 
 */
/* $begin hello */
#include "../include/csapp.h"
#include <stdio.h>
void *thread(void *vargp);                    //line:conc:hello:prototype

int main()                                    //line:conc:hello:main
{
    pthread_t tid;                            //line:conc:hello:tid
    Pthread_create(&tid, NULL, thread, NULL); //line:conc:hello:create
    // 如果不join，主线程结束了，对等线程也跟着结束了
    // Pthread_join(tid, NULL);                  //line:conc:hello:join
    exit(0);                                  //line:conc:hello:exit
}

void *thread(void *vargp) /* thread routine */  //line:conc:hello:beginthread
{
    Sleep(1);
    printf("Hello, world!\n");                 
    FILE *fp = NULL;
 
   fp = fopen("test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);

    return NULL;                               //line:conc:hello:return
}                                              //line:conc:hello:endthread
/* $end hello */
