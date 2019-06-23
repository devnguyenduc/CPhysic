#include <iostream>
#include <string>
#include <fstream>
using namespace std;
template <class T>
class RungeKutta4{
private:
	double k1;
	double k2;
	double k3;
	double k4;
	double y;
	double t;
	
public:
	RungeKutta4<T>(T *f,double t0,double y0,double h){
		for(int j=0;j < N; j++){
			this->k1 = h*f->console(t0,y0);
			this->k2 = h*f->console(t0 + h/2, y0 + k1/2);
	        	this->k3 = h*f->console(t0 + h/2, y0 + k2/2);
			this->k4 = h*f->console(t0 + h, y0 + k3);
			this->y = y0 + (this->k1 + 2*this->k2 + 2*this->k3 + this->k4)/6;
			this->t = t0 + h;
		}
	}
	~RungeKutta4<T>(){}
	void print(){
		cout << "t: " << to_string(this->t) << "     y: " << to_string(this->y) << endl;
	}
	string ToString(){
		string convertTToString = to_string(this->t);
	        string convertYToString = to_string(this->y);	
		return convertTToString + "      " + convertYToString;
	}
	double getT(){
		return this->t;
	}
	double getY(){
		return this->y;
	}
};
