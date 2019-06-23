#include <iostream>
#include <vector>
#define MAX 100
using namespace std;

double f1(double x,double y){return x+y;}
double f2(double x,double y){return x-y;}

double (*f[MAX])(double ,double) = {f1,f2};
void test(double (*f[])(double,double),int n){
	cout << f[0](3,4)<<endl;
	cout << f[1](3,4)<<endl;
}
int main(){
	test(f,3);
	return 0;
}
