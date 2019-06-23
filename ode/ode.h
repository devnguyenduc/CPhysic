#include "../function.h"
class vidu1 : public Function {
public:
	vidu1(){}
	~vidu1(){}
	double console(double t,double y){
		return y - t*t + 1;
	}
};
