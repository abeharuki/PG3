#include <stdio.h>
#include <list>
#include <iostream>
using namespace std;


int main() {
	
	list<const char*> JY; 
	list<const char*>::iterator itr;

	JY = {
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome","Sugamo"
		,"Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanda","Osaki"
		,"Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho"
	};

	cout << "1970" << endl;
	for (itr = JY.begin(); itr != JY.end(); ++itr) {
		cout << *itr << endl;
	}

	
	cout << "\n2019" << endl;
	for (itr = JY.begin(); itr != JY.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = JY.insert(itr, "Nishi-Nippori");
			cout << *itr << endl;
			++itr;
		}
		cout << *itr << endl;
	}


	cout << "\n2022" << endl;
	for (itr = JY.begin(); itr != JY.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = JY.insert(itr, "Takanawa Gateway");
			cout << *itr << endl;
			++itr;
		}
		cout << *itr << endl;
	}

	return 0;
}