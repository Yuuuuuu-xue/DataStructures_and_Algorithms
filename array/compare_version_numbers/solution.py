class Solution:
  def compareVersion(self, version1: str, version2: str) -> int:
    v1 = version1.split('.')
    v2 = version2.split('.')
    while len(v1) < len(v2):
      v1.append('0')
    while len(v2) < len(v1):
      v2.append('0')
    
    # Same length, then convert to int and compare
    for i in range(len(v1)):
      x = int(v1[i])
      y = int(v2[i])
      if x < y:
        return -1
      if x > y:
        return 1
    return 0
