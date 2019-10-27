package main

import "fmt"
import "time"

func main() {
    s := 1000000
    const n = 1000

    p := 0
    var ps [n]int
    start := time.Now()

    for i := s; p < n; i++ {
	is_prime := true
	for j := 2; j < i; j++ {
            if i % j == 0 {
		is_prime = false
	    }
	}

	if (is_prime) {
           ps[p] = i
	   p++;
        }
    }

    t := time.Now()
    elapsed := t.Sub(start)

    for i := 0; i < n; i++ {
       fmt.Printf("%d\n", ps[i])
    }

    fmt.Printf("Time: %v", elapsed)
}


