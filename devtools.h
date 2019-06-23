#include <iostream>
#include <fstream>
#include <string>
#define FOR(i,n) for(int i=0;i<n;i++)
using namespace std;

string space(int n){
	string temp = "";
	FOR(i,n){
		temp += " ";
	}
	return temp;
}
bool isPathExist(string path){
	
}
void save(string filename="",string data, string database =""){
	if(filename == ""){
		filename = "undefined";
	}
	string end_dot = ".txt";
	filename = database + "/" + filename + end_dot;
	fstream file;
	file = open(filename,ios::out);
	file << data;
	file.close();
	
}
void copy(double *arrayCopy, double *arrayNew){
	while(*arrayCopy){
		*arrayNew = *arrayCopy;
		*arrayNew++,*arrayCopy++;
	}
}
