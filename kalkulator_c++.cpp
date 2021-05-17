#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	char aritmatika;
	int hasil;

	cout<<"Masukkan nilai pertama: ";
	cin>>a;

	cout<<"pilih operator +,-,*,/: ";
	cin>>aritmatika;

	cout<<"Masukkan nilai kedua: ";
	cin>>b;

	cout<<"Hasil perhitungan: \n";
	cout<<a<<aritmatika<<b<<"= ";

	if (aritmatika== '+'){ //untik character memakai '' bukan ""
		hasil = a+b;
	}else if (aritmatika== '-'){
		hasil=a-b;
	}else if (aritmatika=='/'){
		hasil=a/b;
	}else if(aritmatika=='*'){
		hasil=a*b;
	}else{
		cout<<"Operator anda salah";
	}
	cout<<hasil;
	cin.get();
	return 0;

}
