#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

template <size_t s>
int selector(string (&list)[s]){
	for (int i = 0; i < s; i++){
		cout << i+1 << ": " << list[i] << endl;
	}

	int i;
	bool loop = true;

	while(loop){

		cout << "select: ";
		scanf("%d", &i);

		if(0 < i && i <= s){
			loop = false;
		
		}else{
			cout << endl << "invalid input" << endl;
		}
	}
	return i-1;
}

int main(){
	string tmp[5] = {"one", "two", "three", "four", "five"};
	cout << tmp[selector(tmp)] << endl;
}