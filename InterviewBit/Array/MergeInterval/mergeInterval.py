# Definition for an interval.
# class Interval:
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e
import operator

class Solution:
    # @param intervals, a list of Intervals
    # @param new_interval, a Interval
    # @return a list of Interval
    def insert(self, intervals, new_interval):
        if new_interval.start>new_interval.end:
            new_interval.start, new_interval.end = new_interval.end, new_interval.start

        intervals.append(new_interval)        
        intervals.sort(key=operator.attrgetter('start','end'))
        
        n=len(intervals)
        if n==1:
            return intervals
        
        start = None
        end = None
        end_idx = start_idx = 0
        
        for i in range(n):
            if not start:
                if new_interval.end > intervals[i].start:
                    start_idx = i
                    start = min(new_interval.start, intervals[i].start)
            
            if new_interval.end < intervals[i].start:
                end_idx = i
                end = max(new_interval.end, intervals[i].end)
                    

        if not start:
            return intervals
        if not end_idx:
            return intervals[:start_idx] + [Interval(start,end)]
        
        return intervals[:start_idx] + [Interval(start,end)] + intervals[end_idx:]
    
        
        
        