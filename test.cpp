#include "RK4/rungekutta4.h"
#include "ode/ode.h"
int main(){
	vidu1 *function = new vidu1();
	cout << rungekutta4(function,0,2,100,0,0.5) << endl;
	delete function;
	return 0;
}
