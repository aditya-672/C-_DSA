# FindIntersection(strArr) read the array of strings stored in strArr which will contain 2 elements: the first element will represent a list of comma-separated numbers sorted in ascending order, the second element will represent a second list of comma-separated numbers (also sorted). Your goal is to return a comma-separated string containing the numbers that occur in elements of strArr in sorted order. If there is no intersection, return the string false.

def FindIntersection(strArr):

  # code goes here
  l1 = strArr[0].split(", ")
  l2 = strArr[1].split(", ")
  res = [val for val in l1 if val in l2]
  return ",".join(res) if len(res) > 0 else False

# keep this function call here 
print(FindIntersection(input()))