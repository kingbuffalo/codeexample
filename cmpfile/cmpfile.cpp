#include <iostream>
#include <fstream>


using namespace std;

int main(int argc, const char *argv[])
{
	if ( argc < 3 ){
		cout << "./cmpfile infilename outfilename" << endl;
		return 0;
	}
	const char* f1name = argv[1];
	const char* f2name = argv[2];

	ifstream file1(f1name);
	ifstream file2(f2name);

	string s1,s2;
	while(getline(file1,s1)){
		getline(file2,s2);
		if ( s1 != s2 ){
			cout << "Not Equal" <<endl;
		}
	}
	cout << "ok" << endl;

	return 0;
}
