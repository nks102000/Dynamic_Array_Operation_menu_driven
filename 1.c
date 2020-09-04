//1905622 - NITISH KUMAR SONTHALIA
//DYNAMIC ARRAY
#include <stdio.h>
#include <stdlib.h>

int ins(int a[],int s,int d,int n);
int del(int a[],int s,int n);
int sort(int a[],int n);
int ser(int a[],int n,int s);
int rev(int a[],int n);
int main(){
    int i,n;  
 
    printf("Enter size of array: ");
    scanf("%d",&n);
    int *p=(int*)malloc(n * sizeof(int));

    printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }

    printf("\nElements in array are: ");
    for(i=0;i<n;i++)
 
    {
        printf("%d  ", p[i]);
    }

     int t,op,s,d;
    while(t!=0){
        printf("\nMenu");
        printf("\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Searching");
        printf("\n4. Sorting");
        printf("\n5. Reverse");
        printf("\n6. Exit");
        scanf("%d",&op);
        switch (op)
        {
            case 1:
            printf("Enter position of array you want to insert at: ");
            scanf("%d",&s);
            printf("Enter value to insert: ");
            scanf("%d",&d);
            ins(p,s,d,n);
            n=n+1;
            break;
        case 2:
            printf("Enter position to delete: ");
            scanf("%d",&s);
            del(p,s,n);
            n=n-1;
            break;
        case 3:
             printf("\nEnter the element to be searched");
            int s;
            scanf("%d",&s);
            ser(p,n,s);
            break;
        case 4:
            sort(p,n);
            break;
        case 5:
            rev(p,n);
            break;
        case 6:
            t=0;      
        default:
            t=0;
            break;
        }
    }
    
}
int ins(int a[],int s,int d,int n){
        for (int i = n; i > s; i--)
        {
            a[i]=a[i-1];
        }
        a[s]=d;
        n=n+1; 
     for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
int del(int a[],int s,int n){
     for ( int i = s; i < n; i++)
        {
            a[i]=a[i+1];
        }
        n=n-1; 
     for( int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
int sort(int a[],int n){
    for (int i = 0; i < n-1; i++)          
       for (int j = 0; j < n-i-1; j++)  
           if (a[j] > a[j+1]){
            int temp = a[j]; 
            a[j]=a[j+1]; 
            a[j+1] = temp; 
           } 

    printf("\nElements in array are: ");
    for(int i=0;i<n;i++)
 
    {
        printf("%d  ", a[i]);
    } 
    return 0;
}
int ser(int a[],int n,int s){
    int c;
     for (int i = 0; i < n; i++){
        if (a[i] == s){
            printf("Element Found ");
            c=1;
            break;
        } 
    } 
    if (c!= 1){
        printf("Element  not Found ");
    }
         
    return 0;
}
int rev(int a[],int n){
    int t=0;
    for(int i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d  ", a[i]);
    } 
    return 0;
}