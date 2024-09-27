class MyCalendarTwo:

    def __init__(self):
        self.events = []
        self.overlap_events = []

    def is_overlap(self, start1: int, end1: int, start2: int, end2: int) -> bool:
        return max(start1, start2) < min(end1, end2)

    def book(self, start: int, end: int) -> bool:
        # Triple overlaps
        for start2, end2 in self.overlap_events:
            if self.is_overlap(start, end, start2, end2):
                return False 
        
        # Check if overlap with some event, if so update overlap_events
        for start2, end2 in self.events:
            if self.is_overlap(start, end, start2, end2):
                self.overlap_events.append((max(start, start2), min(end, end2)))
        self.events.append((start, end))
        return True
    


# Your MyCalendarTwo object will be instantiated and called as such:
# obj = MyCalendarTwo()
# param_1 = obj.book(start,end)