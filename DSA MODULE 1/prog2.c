#include<stdio.h>
int main(){
    int arr[100],n,pos,element,i;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position to insert:",n+1);
    scanf("%d",&pos);
    printf("Enter the element : ");
    scanf("%d",&element);

    if(pos>n+1 || pos<1){
        printf("Invalid position\n");
    }
    //shift elements to the right
    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    //insert element 
    arr[pos-1]=element;
    n++;
    printf("Updated array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}