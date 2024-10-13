#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a=1;
	while (a!=0) {
		a*=1.001;
		cout<<fixed<<setprecision(0)<<a<<"\n";
	}
	return 0;
}
