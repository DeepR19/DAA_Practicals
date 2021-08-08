#include<stdio.h>
int n,start,ary[10][10],i,j,result[10],visited[10],pc=0;

void takeInput()
{
    int i,j;
    printf("Enter the number of villages: ");
    scanf("%d",&n);

    printf("\nEnter the Cost Matrix\n");

    for(i=0;i < n;i++)
    {
        printf("\nEnter Elements of Row: %d\n",i+1);
        for( j=0;j < n;j++)
            scanf("%d",&ary[i][j]);
    }
    printf("\n\nThe cost list is:");

    for( i=0;i < n;i++)
    {
        result[i]=0;
        printf("\n");
        for(j=0;j < n;j++)
            printf("\t%d",ary[i][j]);
    }
    printf("\n\n");
}
int main(){

    takeInput();

    //printf("Enter where you start from : ");
    //scanf("%d",&start);
    result[0]=0;
    for( i=0;i < n;i++){
        for( j=0;j < n;j++){
             if(ary[i][j] == 1){
               result[pc+1]=j;
               pc++;
               visited[i]=1;
            }

        }
        printf("\n");
    }

    for( i=0;i < n;i++){
        if(visited[i]==1){
            printf("%d{%d} - ",visited[i],i);
            printf("\t");
            printf("%d - ",result[i]);

        }
            printf("\n");
    }

    return 0;
}











