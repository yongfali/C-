#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

/**
������ ��֧�����߼������ 
**/

int main(){

cout << "-----------������ ��֧�����߼������  ------------------" << endl;
	//�ַ�������cctypeλ��ͷ�ļ�<cctype>
	cout << "cctype �⺯����ʹ�ã�" << endl; 
	cout << "6.1 cctype �⺯��isalpha()ʹ��,�ж��Ƿ�Ϊ��ĸ��" << endl; 
	cout << "a is alpha:" << isalpha('a') << endl;	
	cout << "1 is number:" << isdigit('1') << endl; 
	cout << "ch is space:" << isdigit(' ') << endl;
	cout << ", �Ƿ�Ϊ������:" << isdigit(',') << endl;
	cout << "The using of tolower() " << tolower('A') << endl;
	//�ļ����������������<fstream>
	
	/**char automobile[50];
	int year;
	double a_price, b_price;
	ofstream outFile; //����һ���ļ�������� 
	outFile.open("file_test.txt"); //����������ļ� 
	if(!outFile.is_open()){
		cout << "open file error" << endl;
		exit(1);
	}
	
	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	b_price = 0.93 * a_price;
	
	cout << fixed;
	cout.precision(2); //�ú������ڿ�������������ľ��� 
	cout.setf(ios_base::showpoint); //��ʽ����� 
	cout << "make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $: " << a_price << endl;
	cout << "Now asking $: " << b_price << endl;
	
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint); 
	outFile << "make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $: " << a_price << endl;
	outFile << "Now asking $: " << b_price << endl;
	
	outFile.close();**/
	
	// �ļ���ȡ����,��eof()\fail()�ж��Ƿ��ȡ�ɹ� 
	ifstream inFile;
	inFile.open("file_test.txt"); 
	char buffer[250];
	if(!inFile.is_open()){
		cout << "open file failed" << endl;
		exit(1);
	}
	while(!inFile.eof()){
		inFile.getline(buffer, 100);
		cout << buffer << endl;
	}

	 
	return 0;
}