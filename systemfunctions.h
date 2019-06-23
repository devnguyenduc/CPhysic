#include "devtools.h"
template<class T>
class SystemFunctions{
private:
	double *aj;
	double *u;
	int _size;
	T *function;
public:
	SystemFunctions<T>(,double *a,double *uo,int N,T *ft){
		copy(a,this->aj);
		copy(uo,this->u);
		this->_size = N;
		this->function = ft;
	}
	double console(double t,double *uo){
		double result = 0;
		FOR(i,this->_size){
			result += this->aj[i]*this->u[j];
		}
		return this->function->console(t) + result;
	}
};
