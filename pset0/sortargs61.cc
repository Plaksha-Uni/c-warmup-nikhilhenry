#include<strings.h>
#include<iostream>
#include<vector>
#include<algorithm>

int main(int argc,char* argv[]){
	std::vector<std::string> args;
	for(argc--;argc > 0; argc--)
		args.push_back(argv[argc]);
	std::sort(args.begin(),args.end());
	for(auto arg:args)
		std::cout << arg << std::endl;
}
