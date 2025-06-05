#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int matriz[100][100];
	int i,k,n;
	srand(time(0));
	
	do{
		cout<<"Elementos por lado de la matriz(2-10)";
		cin>>n;
	}while(n>10 or n<2);
	
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			matriz[i][k]=rand()%100;
		}
	}
	cout<<"Matriz\n";
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			printf("%3d",matriz[i][k]);
		}
		cout<<"\n";
	}
	cout<<"Diagonal\n";
	
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			if(i==k){
				printf("%3d",matriz[i][k]);
			}
			else{
				printf("    ");
			}
				
			
		}
		cout<<"\n";
	}
	
	cout<<"Subdiagonal\n";
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			if(i!=k){
				printf("%3d",matriz[i][k]);
			}
			else{
				printf("    ");
			}
				
			
		}
		cout<<"\n";
	}
/*	for(i=0;i<101;i++){
		for(k=0;k<101;k++){
			matriz[i][k]=rand()%100;
		}
	}

	
	
	
	for(i=0;i<101;i++){
		for(k=0;k<101;k++){
			printf("%3d",matriz[i][k]);
		}
		cout<<"\n";
	}*/
	
	
	return 0;
}