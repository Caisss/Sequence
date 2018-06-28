#include "sequence.h"
char *dna2[2000000]; 
int cmpl(const void* p,const void* q)
{
	return strcmp(*(char **)p, *(char **)q);
}
Sequence::Sequence(string filename)
{
	char tem;
	A=0,C=0,T=0,G=0,sum=0;
	ifstream fin("dna.txt");
	int i=0;
	while (fin >> tem)
		if (tem == 'A' || tem == 'C' || tem == 'T' || tem == 'G')
		{
			dna[i]= tem;
			i ++;
			if (tem == 'A')A++;
			else if (tem == 'C')C++;
			else if (tem == 'G')G++;
			else if (tem == 'T')T++;
		}

}
int Sequence::length() 
{
	dnalen=strlen(dna);
	return dnalen;
}
int Sequence::numberOf(char base)
{
	if (base == 'A') return A;
	if (base == 'T') return T;
	if (base == 'G') return G;
	if (base == 'C') return C;
	return 0;
}
string Sequence::longestConsecutive() 
{
	int len = 0, i = 1, teml = 1; char letter;
	for (;i <dnalen;i++)
	{
		if (dna[i] == dna[i - 1])
		{
			teml++;
			if (teml > len)
			{
				len = teml;
				letter = dna[i];
			}
		}
		else teml=1;
	}
	string line;
	for (int j = 0; j < len; j++)
		line += letter;
	return line;
}
string Sequence::longestRepeated()
{
	char *l1,*l2;
	int teml=0,maxl=0,start;
	for(int i=0;i<dnalen;i++)
	dna2[i]=&dna[i];
	qsort(dna2,dnalen,sizeof(char*),cmpl);
	for(int i=0;i<dnalen-1;i++)
	{
		 l1=dna2[i];l2=dna2[i+1];
		while((*l1)==(*l2))
		{
			teml++;
			l1++;
			l2++;
		}
		if(teml>maxl)
		{
			maxl=teml;
			start=i;
		}
		teml=0;
	}
		char str[10000];
		strncpy(str,dna2[start],maxl);
		str[maxl]='\0';
		string line=str;
		return line;
}
































