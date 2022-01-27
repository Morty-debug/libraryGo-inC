package main

import "C"
import "fmt"

//export Print
func Print(argumento string){
	fmt.Println(argumento)
}


func main() {}
