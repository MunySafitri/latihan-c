#include<iostream>
using namespace std;

int main(){
	int a;
	int i;
	int j;
	int k;
	int b;
	int c;
	cout<<"masukkan nilai baris sgitiga pertama: ";
	cin>>a;
	cout<<"segitiga pertama"<<endl;
	for (int i= 1; i<=a;i++){
		for (j=i; j<a;j++){
			cout<<" ";
		}
		for (k=1; k<=i ; k++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	cout<<"untuk segitiga 2 \n";
	cout<<"berapa baris segitiga siku-siku yang anda inginkan: ";
	cin>> b;
	for (int i=1; i<=b; i++){
		for(j=b; j>=i; j-- ){
		cout<<"*";
		}
		cout<<endl;
		
	}
	cout<<"untuk segitiga 3 \n";
	cin >> c;
	for (int i=1; i<=c; i++){
		for(int j=1; j<=c; j++){
			cout<<"*";
		}
		cout<<endl;}
	
	cout<<"*";
	cin.get();
	return 0;
}
