#include<iostream>
#include <clocale>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string passcrypt(string pass, int s) {
	int pass_len = pass.length();
	int c[50];
	string pass_crypted;


	for (int i = 0; i < pass_len; i++)
	{
		c[i] = int(pass[i]);

		if(c[i]+s<256){

            c[i]=c[i]+s;

		}
		else if(c[i]+s>255){

            c[i]=0+(c[i]+s-255);
            cout<<c[i];
		}

        pass_crypted=pass_crypted+(char)c[i];
	}

        return pass_crypted;
}

int main() {
	setlocale(LC_ALL, "Turkish");
	string pass;
	int a;
	cout<<"Şifrelenecek kelimeyi giriniz: ";
	cin>>pass;
	cout<<"Kaç basamak ileri gitmesini istediğinizi giriniz: ";
	cin>>a;
	cout<<passcrypt(pass,a);



}
