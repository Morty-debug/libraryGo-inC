
### generar libraria en go
```batch
go build -o Print.so -buildmode=c-shared Print.go
```

### usar la libreria en c
```batch
gcc -o main main.c ./Print.so
```

