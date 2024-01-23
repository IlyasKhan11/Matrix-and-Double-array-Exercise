#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int A[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int B[3][3]={
		{3,1,9},
		{7,8,0},
		{5,3,6}
	};
	
	int C[3][3];

	int transposedB[3][3];
	//taking transpose of B
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			transposedB[j][i]=B[i][j];
		}
	}
	
	//C=(A + B^T)
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			C[i][j]=A[i][j] + transposedB[i][j];
		}
	}
	
	//taking transpose C=(A + B^T)^T
	int transposedC[3][3];
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			transposedC[j][i]=C[i][j];
		}
	}
	

	cout<<"-------A----------"<<endl;
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout<<"----------B-------"<<endl;
	
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			cout << B[i][j] << " ";
		}
		cout << endl;
	}	
	
	
	cout<<"-------ANS-----------"<<endl;
	cout<<"C=(A+B^T)^T"<<endl;
	cout<<"---------------------"<<endl;
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			cout << transposedC[i][j] << " ";
		}
		cout << endl;
	}	
	
	
	return 0;
}
