#include <cstdio>
#include <iostream>

using namespace std;

int ters(int sayi){
	int ters_sayi = 0; 
	int kalan = 0;
	while(sayi>0){
		kalan=sayi%10;
        sayi=sayi/10;
        ters_sayi=ters_sayi*10+kalan;
      }
      return ters_sayi;
}

bool isprime(int num)
{
     if (num <= 1) return false;
     if (num % 2 == 0 && num > 2) return false;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return false;
     }
     return true;
}


int main(){
	int N;
	cin>>N;
	bool x;
	if(N != ters(N)){
		x = true;
	}
	else {
		x = false;
	}
	if(x && isprime(N) && isprime(ters(N))){
		cout << "YES" << endl;
		}
	else {
		cout << "NO" << endl;
	}


	return 0;
}
