//codingan salah
//#include <iostream>
//using namespace std;
//
//class fungsi{
//	public:
//		int f(int n){	
//	if (n==1){
//		return 1;
//	}else{
//		return n*f(n-1);	}
//}
//};
//
//int main(){
//	fungsi h;
//	int b;
//	cout<<"masukan angka=";
//	cin>>b;
//	cout<<endl;
//	cout<<b<<"!=";
//		for (int i=1; i<=b; i++){
//			cout<<i;
//			if(i==b){
//				cout<<"=";
//			}
//			else{
//				cout<<"*";	}}
//	cout<<h.f(b);
//}


//codingan benar
#include <iostream>
using namespace std;

class fungsi{
	public:
		int faktorial(int n){	
	if (n==1){
		return 1;
	}else{
		return n*faktorial(n-1);	}
}
};

int main(){
	fungsi hasil;
	int angka;
	cout<<"masukan angka=";
	cin>>angka;
	cout<<endl;
	cout<<angka<<"!=";
		for (int i=1; i<=angka; i++){
			cout<<i;
			if(i==angka){
				cout<<"=";
			}
			else{
				cout<<"*";	}}
	cout<<hasil.faktorial(angka);
}
