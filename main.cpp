#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstdio>
#include <program.hpp>
#include <experimental/filesystem>

using namespace std;
namespace fs = std::experimental::filesystem::v1;

program selector(vector<program> list){
	for (int i = 0; i < list.size(); i++){
		cout << i+1 << ": " << list[i].getName() << endl;
	}

	int i;
	bool loop = true;

	while(loop){

		cout << "select: ";
		scanf("%d", &i);

		if(0 < i && i <= list.size()){
			loop = false;
		
		}else{
			cout << endl << "invalid input" << endl;
		}
	}
	return list[i-1];
}

int main(){
	ifstream inFile;

	vector<program> applications;

	for (auto & p: fs::directory_iterator("/usr/share/applications")){
		string exec, name, line;
		
		inFile.open(p.path());
		while(getline(inFile, line)){
			if(line.length() >= 5){
				string id = line.substr(0,5);
				string val = line.substr(5);
				if(id == "Name="){
					name = val;
			
				}else if (id == "Exec="){
					exec = val;
				}

				if(!name.empty() && !exec.empty()){
					applications.push_back(program(name, exec));
					break;
				}
			}
		}
		inFile.close();
	}
	
	selector(applications).call();

}