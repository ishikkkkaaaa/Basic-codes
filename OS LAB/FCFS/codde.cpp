#include<stdio.h>
int main(){
	int n,wait=0;
	printf("Enter the no. of processes: ");
	scanf("%d",&n);
	int burst[n];
	for(int i=0;i<n;i++){
		printf("Enter the burst time of process %d: ",i+1);
		scanf("%d",&bt[i]);
	}
	for(int j=0;j<n;j++){
		if(j==0){
			printf("The waiting time of process %d is: %d",j+1,wait);
			printf("\n");
	    }
		else{
			wait=wait+burst[j-1];
			printf("The waiting time of process %d is: %d",j+1,wait);
			printf("\n");
			}
	}
}
