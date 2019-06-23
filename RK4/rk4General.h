#include <iostream>
#include <string>
#include <fstream>
#include "../devtools.h"
const string url = "../database/";
using namespace std;
template<class T>
class RungeKutta4G{
private:
	double *k1;
	double *k2;
	double *k3;
	double *k4;
	double t;
	double *u;
	double size_of_u;
public:
	RungeKutta4G<T>(T *f[],double t,double *un,int size_of_un;double h){
		this->size_of_u = size_of_un;
		//k1j
		FOR(j,size_of_un){
			this->k1[j] = h*f[j](t,un);
		}
		// k2j
		FOR(j,size_of_un){ un[j] += this->k1[j]/2;}
		FOR(j,size_of_un){
			this->k2[j] = h*f[j](t+h,un);
		}
		// k3j
		FOR(j,size_of_un){ un[j] += (this->k2[j]/2 - this->k1[j]) ;}
		FOR(j,size_of_un){
			this->k3[j] = h*f[j](t+h/2,un);
		}
		// k4j
		FOR(j,size_of_un){ un[j] += (this->k3[j] - this->k2[j]/2);}
		FOR(j,size_of_un){
			this->k4[j] = h*f[j](t+h,un);
		}
		//Solve Un
		FOR(j,size_of_un){
			this->u[j] = (this->k1[j] + 2 *this->k2[j] + 2* this->k3[j] + this->k4[j])/6;
			this->t = t + h;
		}
	}
	
	string ToString(){
		string string_list_u = "";
		FOR(i,this->size_of_n){
			sring_list_u += space(20) + to_string(this->u[i]);
		}
		return to_string(this->t) + string_list_u;
	}
	void print(){
		cout << this->ToString() << endl;
	}
	double *getU(){
		return this->u;
	}
	double getT(){
		return this->t;
	}
};
