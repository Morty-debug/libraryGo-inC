
### compilar codigo
```batch
go build -o Print.so -buildmode=c-shared Print.go
gcc -o main main.c ./Print.so
```
