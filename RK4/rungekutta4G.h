#include "rk4general.h"

template <class T>
void rungekutta4G(string namefile,T *function,double down,double up,double to,double *uo, int size_of_uo,int N){
	double h = (up - down)/N;
	double *u;
	copy(uo,u);
	double t = to;
	string path = namefile+",a="+to_string(down)+",b="+to_string(up)+",N="+to_string(N);
	for(int i=1; i<= N; i++){ 
		RungeKutta4G <T>*rk4g = new RungeKutta4G(function,t,u,size_of_uo,h);
		rk4g->print();
		copy(rk4g->getU(),u);
		t = this->getT();
		save(path,rk4g->ToString(),"database");
		delete rk4g;
	}
}

