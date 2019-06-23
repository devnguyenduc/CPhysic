#include "rk4.h"
#include "../devtools.h"
template<class T>
double rungekutta4(string namedata,T *function,double down,double up,int N,double t0, double y0){
	double h = (up-down)/N;
	double y = y0;
	double t = t0;
	string path =namedata+",a="+to_string(down)+",b="+to_string(up)+",N="+to_string(N)+",t0="+to_string(t0)+",y0="+to_string(y0);
	for(int i=1;i<=N;i++){
		RungeKutta4 <T>*rk4 = new RungeKutta4<T>(function,t,y,h);
		y = rk4->getY();
		t = rk4->getT();
		save(path,rk4->ToString(),"database");
		delete rk4;
	}
	return y;
}
