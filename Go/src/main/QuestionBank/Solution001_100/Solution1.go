package main

func main() {

}

//func twoSum(nums []int, target int) []int {
//	for i := 0; i < len(nums); i++ {
//		for j := i + 1; j < len(nums); j++ {
//			if nums[i]+nums[j] == target {
//				return []int{i, j}
//			}
//		}
//	}
//	return nil
//}

func twoSum(nums []int, target int) []int {
	var hashTable = make(map[int]int)

	for i, x := range nums {
		if p, ok := hashTable[target-x]; ok {
			return []int{p, i}
		}
		hashTable[x] = i
	}

	for i, num := range nums {
		if p, ok := hashTable[target-num]; ok {
			return []int{p, i}
		}
		hashTable[num] = i
	}
	return nil
}
