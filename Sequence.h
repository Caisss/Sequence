#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

class Sequence
{
public:
	Sequence() {A=0,C=0,T=0,G=0,sum=0;}
	Sequence(string filename);
	int length();
	int numberOf(char base);
	string longestConsecutive();
	string longestRepeated(); 
private:
	int A, C, T, G;
	int sum,dnalen;
	char dna[2000000];
};
#endif
