go build -o Print.so -buildmode=c-shared Print.go
gcc -o main main.c ./Print.so                 
./main



export LD_LIBRARY_PATH
gcc -L./ -Wall -o main main.c -lPrint
./main
