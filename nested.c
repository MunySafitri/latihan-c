#include <stdio.h>
#include<string.h>


int main(){
	char[] username, password;

	cout<<"=== Welcome ==="<<endl;
	cout <<"Username: ";
	cin>> username;
	cout<<"Password";
	cin>> password;

	if(username == "petanikode"){
		if (password == "kopi"){
			cout<<"selamat datang boss"<<endl;
		}else{
			cout<<"Password salah, coba lagi!"<<endl;
		}
	}else{
		cout<<"anda tidak terdaftar"<<endl;
	}
	return 0;
}
