//fork example
#include<stdio.h>
#include<unistd.h>
int main()
{
    int loc = 6;
    int pid = fork();
    if(pid==0){
            printf("Child pid: %d\n", getpid());
            printf("Its parent pid: %d\n", getppid());
            loc++;
    }
    else{
        sleep(2);
        printf("Parent pid: %d\n", getpid());
        printf("Its parent pid: %d\n", getppid());
    }
    printf("loc = %d\n", loc);
}