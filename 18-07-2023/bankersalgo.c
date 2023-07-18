#include<stdio.h>
#include<conio.h>
void main()
{
    int k=0,output[10],d=0,t=0,ins[5],i,avail[5],allocated[10][5],need[10][5],max[10][5],pno,j,rz,count=0;
    printf("\n Enter the number of resources : ");
    scanf("%d", &rz);
    printf("\n Enter the max instances of each resources\n");
    for (i=0;i<rz;i++)
    {
        avail[i]=0;
        printf("%c= ",(i+97));
        scanf("%d",&ins[i]);
    }
    printf("\n Enter the number of processes : ");
    scanf("%d", &pno);
    printf("\n Enter the allocation matrix \n     ");
    for (i=0;i<rz;i++)
        printf(" %c",(i+97));

}
