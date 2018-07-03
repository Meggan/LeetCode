import "math"

//TIL: Log is kinda the opposite of powers..

func isPowerOfFour(num int) bool {
	var log1 int
	var log2 float64
	log1 = int(math.Log(float64(num)) / math.Log(4))
	log2 = math.Log(float64(num)) / math.Log(4)

	return (float64(log1) == log2)

}