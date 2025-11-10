    package main
     
    import (
    	"bufio"
    	"fmt"
    	"math"
    	"os"
    )
     
    func main() {
    	reader := bufio.NewReader(os.Stdin)
    	writer := bufio.NewWriter(os.Stdout)
    	defer writer.Flush()
     
    	var n int
    	fmt.Fscan(reader, &n)
     
    	for i := 0; i < n; i++ {
    		var notesCount int
    		var notes []int
    		perfect := true
     
    		fmt.Fscan(reader, &notesCount)
     
    		for j := 0; j < notesCount; j++ {
    			var note int
    			fmt.Fscan(reader, &note)
    			notes = append(notes, note)
     
    			if j > 0 {
    				difference := math.Abs(float64(notes[j] - notes[j-1]))
    				if difference != 5 && difference != 7 {
    					perfect = false
    				}
    			}
    		}
     
    		if perfect {
    			fmt.Println("YES")
    		} else {
    			fmt.Println("NO")
    		}
    	}
    }