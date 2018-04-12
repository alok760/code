package main

import "fmt"

func main(){
    var inp int
    fmt.Scan(&inp)
    sum := 0
    var numbers [1000]int
    for i:=0 ; i<inp ; i++ {
        fmt.Scan(&numbers[i])
        sum = sum + numbers[i]
    }
    fmt.Println(sum)
}
