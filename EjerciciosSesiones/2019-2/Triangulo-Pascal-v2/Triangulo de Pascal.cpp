#include <bits/stdc++.h>
using namespace std; 

uint64_t C(uint64_t n, uint64_t k){
	
	/*Aqu� hace la resta, que permite 
	un n�mero de n y k m�s grande por 
	simetr�a */
	if(k>n/2) k = n-k; 
	uint64_t res = 1; 
	
	for(int i = 0; i<k; i++ ) res=res*(n-i)/(1+i);
	
	return res; 
}

int main(){
	/*Esta l�nea s�lo es para que la consola en windows
	no se vea tan peque�a e imprima todas las salidas*/
	/**/system("mode con: cols=200 lines=200");/**/
	//--------------------------------------------

	int n; 
	cin>>n; 
	for(int i = 0; i<=n;i++){
		for(int j = 0; j<=i; j++){
			cout<<C(i,j)<<" "; 
		}
		cout<<"\n"; 
	}	
	
	return 0; 
}
