package main

import "fmt"

func main(){
	var n int;
	fmt.Scanln(&n);
	for(n!=1){
		if n%2==0 {
			n/=2;
		}else{
			n=n*3+1;
		}
		fmt.Println(n);
	}
}
