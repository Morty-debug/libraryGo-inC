#include <string.h>
#include "Print.h"

int main(int argc, char *argv[]){
	int i;
	for(i=0; i<argc; i++){
		GoString msg = {argv[i], strlen(argv[i])};
		Print(msg);
	}
}
