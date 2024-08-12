#include <cctype>
#include<cstdio>
#include<cstring>

int main(){
	unsigned long lc = 0;	
	unsigned long wc = 0;	
	unsigned long bc = 0;	

	bool in_word = false;

	while(true){
		char tmp = std::fgetc(stdin);
		if(tmp == EOF)
			break;
		if(tmp  == '\n') 
			lc++;
		if(!std::isspace(tmp)){
			if (!in_word){
				in_word = !in_word;
				wc++;
			}
		}
		else
			in_word = false;
		bc++;
	}

	std::fprintf(stdout,"%lu %lu %lu",lc,wc,bc);

}
