
#include"Sequence.h"
Sequence a("dna.txt");
int main()
{
	cout << a.length() << endl;
	cout << "A=" << a.numberOf('A') << endl;
	cout << "C=" << a.numberOf('C') << endl;
	cout << "G=" << a.numberOf('G') << endl;
	cout << "T=" << a.numberOf('T') << endl;
	cout<< "longestConsecutive:" << a.longestConsecutive() << endl;
	cout<<"longestRepeated:"<<a.longestRepeated();
    return 0;
}
