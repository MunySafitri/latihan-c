#include<iostream>
using namespace std;
int main(){

	int x=0;
	for(int i=0;i<500;i++){
		cout<<"kelipatan 11 ke-"<<i<<"=";
		cout<<x<<endl;
		x++;
		if(x%7==5 && x%11==7){
			cout<<"angka dibawh ini adalah menyisakan 5 jika dibagi 7 dan minyisakan 7 saat dibagi 11"<<endl;
		}else if (x%11==7){
			cout<<"angka dibawah ini adalah menyisakan 7 saat dibagi 11"<<endl;
		}else if (x%5==3){
			cout<<"angka dibawah ini adalah menyisakan 3 saat dibagi 5"<<endl;
		}	
	}
	
}


