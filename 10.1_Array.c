/*
#__ Array in C __#

   -An array is a fundamental data structure in c.
   -An array is the collection of similar type of data items stored at contiguous memory locations.
   -An array is a variable that can store multiple values.
   -Few keynotes:
      ● If the size of an array is n, to access the last element, the n-1 index is used.
      ● Arrays have 0 as the first index.
      ● Array variable-name is a pointer variable which store the base address of array.
      ● add[i]=base-address+(index x size of data-type)
      ● No bound checking in array in c
      ● It allow to store data in multi-dimensional form.

 Advantage of C Array🙋‍♂️

    -Code Optimization: Less code to the access the data.
    -Ease of traversing: By using the for loop, we can retrieve the elements of an array easily.
    -Ease of sorting: To sort the elements of the array, we need a few lines of code only.
    -Random Access: We can access any element randomly using the array.

 One-dimensional Array🙋‍♂️

   -Syntax:
      ● Declaration:
          data-type variable-name[size];
      ● Initializing:
          data-type variable-name[N]={value1,value2,.....valueN}
         or
          variable-name[index]=value
 
*/


//Declaration with Initialization
#include<stdio.h>  
int main(){      
int i=0;    
int marks[5]={20,30,40,50,60};
for(i=0;i<5;i++){
        printf("%d \n",marks[i]); 
}   
return 0;  
}   

//Inilitization at runtime
#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=1;i<=size;i++){
        printf("Enter value of array at index %d ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=size;i++){
        printf("%d",arr[i]);
        printf("\n");
    }    
}

// Sorting of array
#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter value of array at index %d ",i);
        scanf("%d",&arr[i]);
    }
// Sorting algorithm
    for(int i=0;i<size;i++){
        for(int j=i+1;j<=size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Largest element in array is %d \n",arr[-1]);
    printf("2nd Largest element in array is %d ",arr[size-2]);
}

//Array name strore the base address
#include<stdio.h>
void main(){
    int arr[10];
    printf("%d\n",&arr);
    printf("%d\n",&arr[0]);
    printf("%d\n",&arr[9]);
}

// Sun of two array and store in third array
#include<stdio.h>
void main(){
    int arr1[5],arr2[5],ArraySum[5],i;
    printf("Enter arr1 element");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter arr2 element");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<5;i++){
        ArraySum[i]=arr1[i]+arr2[i];
        printf("SumArray element at index %d is %d\n",i,ArraySum[i]);
    }
    
    for(i=0;i<5;i++){
        printf("%d ",ArraySum[i]);
    }
}