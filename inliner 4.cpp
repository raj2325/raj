#include<iostream>
using namespace std;

main()
{
	
	int a,mul;
	cout<<"ENTER A NO. TO GET IT'S MUL. TABLE : ";
	cin>>mul;
	
	for(a=1 ; a<=10 ; a++){
		cout<<mul<<" * "<<a<<" = "<<a*mul<<endl;
	}
}
