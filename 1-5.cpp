#include<iostream>
#include<stdio.h>
#include<string>
#include<cctype>
#include<fstream>
using namespace std;  

int main()
{
/**
�ڶ���  ��ʼѧϰC++ 
**/
cout << "-----------�ڶ���  ��ʼѧϰC++------------------" << endl;	
//2.1��C++����������ֵ 
	int a, b, c;
    a = b = c = 10;
    printf("%d\n%d\n%d\n", a,b,c);
    printf("\n");	 
    cout << a << " " << b << " "<< c << endl; 
 //2.4 function_name(void)��ʾ��˵�������������κβ�����Ҳ����ʡ��void���ʾ��ʽ
 	int randNum = rand(); 
 	cout << "rand = " << randNum <<endl;
 	
/**
������ C++������������
**/
cout << "-----------������ C++������������------------------" << endl;
//4.1 ����������������ʹ�õ��±��Ƿ���Ч���������arr[100],�����ͨ���������������п��ܻ��ƻ����� 
 	int arr[10] = {0};
 	cout << "the size of arr = " << sizeof(arr) << endl; 
	
/**
������ ѭ���͹�ϵ���ʽ 
**/
cout << "-----------������ ѭ���͹�ϵ���ʽ ------------------" << endl;	
	//cin.get()������ʹ��
	char ch;
	int count = 0;
	cout << "Enter Characters; Enter # to quit:" << endl;
	cin.get(ch);
	while(ch != '#'){
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read" << endl;
		
   	return 0; 
}
