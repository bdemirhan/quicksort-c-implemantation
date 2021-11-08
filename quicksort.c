#include <stdio.h>
#define SIZE 100



void swap(int* c , int* b){
	
	int tmp=*c;
	*c=*b;
	*b=tmp;
}



void printarray(int a[],int n){
	int i;
	printf("Array = [  ");
	for(i=0; i<n; i++){
		printf("%d  ",a[i]);
	}
	printf("]\n");
}

int placement(int arr[],int max , int min){
	int pivot=arr[max];
	int counter=min;
	int i;
	

	
	for(i=min; i<max; i++){
		if(arr[i]<pivot){
			
			swap(&arr[counter],&arr[i]);
			counter++;
			
			
		}
	}
	
	swap(&arr[max],&arr[counter]);
	

	
	return counter;
	

	

	
	
}

void quicksort(int arr[],int rightindex,int leftindex){
	int copycounter;
		

	if(leftindex<rightindex){
	
	int copycounter;
	
	copycounter = placement(arr,rightindex,leftindex);
	
	quicksort(arr,rightindex,copycounter+1);
	quicksort(arr,copycounter-1,leftindex);
	
	
}
}



int main(void){
	
	int n,a[SIZE];
	
	int i;
	printf("Please enter number of the elements : ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Please enter %d. element of the array : ",i+1);
		scanf("%d",&a[i]);
		
	}


	
	quicksort(a,n-1,0);
	

	
	printf("sorted array : ");
	printarray(a,n);


	
		
	

	
		
	
	
	return 0;
}
