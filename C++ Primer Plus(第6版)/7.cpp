#include<iostream>
#include<string>

using namespace std;

/** 
	������ C++�ı��ģ��
**/ 

void countDown(	int n){
	cout << "countDown..." << n << endl;
	if(n > 0)
		countDown(n-1);
	
	cout << n << ": kaboom" << endl;
} 
int main(){
	countDown(5);
	string list[5];
	
	cout << "Enter you list:" << endl;
	for(int i = 0; i < 5; ++i){
		cout << i << "+1��" << endl;
		getline(cin, list[i]); 
	} 
	
	cout << "Show you list:" << endl;
	for(int i = 0; i < 5; ++i){
		cout << list[i] << endl;
	}
	
	//�ݹ��ʹ��
	 
	return 0;
}