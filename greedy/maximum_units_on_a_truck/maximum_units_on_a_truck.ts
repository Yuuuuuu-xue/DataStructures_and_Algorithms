function maximumUnits(boxTypes: number[][], truckSize: number): number {
  let o = 0;
  boxTypes.sort((a, b) => b[1] - a[1]);
  for(const box of boxTypes) {
    if (box[0] >= truckSize) {
      return o + box[1] * truckSize;
    }
    o += box[1] * box[0];
    truckSize -= box[0];
  }
  return o;
};