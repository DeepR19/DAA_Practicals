#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,a,b,num;
    int *p;
    printf("Enter 1 for malloc or 0 for calloc: ");
    scanf("%d",&num);

    if(num == 1){
         p =(int*)malloc(a*sizeof(int));
         printf("\n\tMalloc Implementation\n\n");
    }else if(num == 0){
        p =(int*)calloc(a,sizeof(int));
           printf("\n\tCalloc Implementation\n\n");
    }else{
        printf("\n \tNot Valid\n\n");
        exit(0);
    }
    printf("\tEnter the number to have to be print : ");
    scanf("%d",&a);

    if(p==NULL){
        printf("not ___________");
        exit(0);
    }else{
        for(i=0;i<a;i++){
            p[i]= i+1;
        }
        for(i=0;i<a;i++){
            printf("\tyour numbers are : %d\n",p[i]);
        }
        printf("\n\n ----------> Re-allocation <----------\n\n");
        printf("\tEnter how many numbers you want: ");
        scanf("%d",&b);

         for(i=a;i<b;i++){
            p[i]= i+1;
        }
        for(i=0;i<b;i++){
            printf("\tyour numbers are : %d\n",p[i]);
        }
    }
    return 0;
}

