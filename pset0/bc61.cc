#include <cstdio>

int main(){
	int size = 0;
	while (std::fgetc(stdin) != EOF){
		size++;
	}
	std::fprintf(stdout,"%d",size);

}
