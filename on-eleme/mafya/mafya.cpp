#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int max(int a, int b){
	if(a>b){
		return a;
	}
	else {
		return b;
	}
}	

int main(){
	int N;
	cin>>N;
	int a[N];
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	int ind = N/2;
	if(N%2 == 0){
		cout << max(a[ind-1], a[ind]) << endl;
	}
	else {
		
		cout << a[ind] << endl;
	}
	


	return 0;
}
