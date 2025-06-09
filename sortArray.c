#include <stdio.h>
#include <string.h>

int main(){
    printf("\nWrite the number of elements of the array: ");
    int i;
    int n;
    scanf("%d",&n);
    int array[n];
    printf("Now write what numbers you want to add to the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\nThis is the array: \n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n\nIf you want to sort the array in ascending order type 0, if in descending order 1: ");
    int f;
    int temp;
    int j;
    scanf("%d",&f);
    if(f==0){
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                if(array[j]>array[j+1]){
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
            }
        }
    }
    else if(f==1){
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                if(array[j]<array[j+1]){
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
            }
        }
    }
    else{
        printf("\nWrite only 0 or 1 !!!");
        return 0;
    }
    printf("\nThis is the new array: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}

