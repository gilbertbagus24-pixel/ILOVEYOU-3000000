#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream file("iloveyou.txt");
	for(int i=0; i < 300000; i++){
		file << "I LOVE YOU\n";
		}
	
	file.close();
	
	cout << "File berhasil dibuat luv\n";
	return 0;
	}
