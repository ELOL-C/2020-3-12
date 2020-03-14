#include <iostream>
#include <cstdlib>   
using namespace std;

int main()
{
	string str ;
	rep_in:	
	cout << "請輸入站名-";
	cin >> str ;
	if (str == "二林" ){
		cout << str<<"站需要30元";
	}
	else if (str == "溪湖"){
		cout << str<<"站需要45元";
	}
	else if (str == "彰化"){
		cout << str<<"站需要50元";
	}
	else if (str == "員林"){
		cout << str<<"站需要60元";
	}
	else {
		cout << "找不到" << str <<"這個站名\n" ; 
		system("Pause");
		goto rep_in;
	}
	
return 0;	
}
