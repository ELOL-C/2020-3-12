#include <iostream>
#include <cstdlib>   
using namespace std;

int main()
{
	double a,c,b  ;
	string str ;
	rep_in:	
	cout << "�п�J���W-";
	cin >> str ;
	if (str == "�G�L" ){
		cout << str<<"���ݭn30��";
	}
	else if (str == "�˴�"){
		cout << str<<"���ݭn45��";
	}
	else if (str == "����"){
		cout << str<<"���ݭn50��";
	}
	else if (str == "���L"){
		cout << str<<"���ݭn60��";
	}
	else {
		cout << "�䤣��" << str <<"�o�ӯ��W\n" ; 
		system("Pause");
		goto rep_in;
	}
	
return 0;	
}
