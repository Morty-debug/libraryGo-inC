
### generar libraria en go
```batch
go build -o Print.dll -buildmode=c-shared Print.go
```

### usar la libreria en c
```batch
gcc -o main.exe main.c ./Print.dll
```

