#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << " Student Subject Score: ";
	cin >> n;


	if(n<0){
        cout << "Math error";
	}
	else{
    if(n>100){
        cout << "Math error";
	}
	else{
	if(n<30){
		cout << "F";
	}

		else{
                if(n<40){
		cout << "E";
	}
	else{
		if(n<55){
		cout << "D";
	}
	else{
		if(n<60){
		cout << "D+";
	}
	else{
		if(n<65){
		cout << "C+";
	}
	else{
		if(n<70){
		cout << "C";
	}
	else{
		if(n<75){
		cout << "B";
	}
	else{
		if(n<80){
		cout << "B+";
	}
	else{
		cout <<"A";
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	return 0;
}
