def FindIntersection(strArr):

  # code goes here
  l1 = strArr[0].split(", ")
  l2 = strArr[1].split(", ")
  res = [val for val in l1 if val in l2]
  return ",".join(res) if len(res) > 0 else False

# keep this function call here 
print(FindIntersection(input()))