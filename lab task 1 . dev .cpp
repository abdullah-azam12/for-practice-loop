#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int age ;
	cout<<"enter age:"<<endl;
	cin>>age;
	if (age>18) {
	cout<<"result:eligible for vote" <<endl;
} else {
cout<<"result: not eligible for vote" <<endl;
}
return 0;
}
