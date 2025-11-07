from typing import List

class Solution:
    def binary_search(self, total_stations, r, k, x):
        # Return true if every city has at least x after building k power stations
        power_station_added = [0] * len(total_stations)

        for i in range(len(total_stations)):
            if i > 0:
                power_station_added[i] += power_station_added[i-1]
            stations = total_stations[i] + power_station_added[i]
            if stations >= x:
                continue

            # We need to add stations
            # Add stations at power_station_added at index i
            stations_needed = x - stations
            if k < stations_needed:
                return False
            k -= stations_needed
            power_station_added[i] += stations_needed
            # The actual station is build at i + r, it can covers [i, i + r + r], hence remove it from i + r + r + 1
            if i + 2 * r + 1 < len(total_stations):
                power_station_added[i + 2 * r + 1] -= stations_needed
        
        return True

    def maxPower(self, stations: List[int], r: int, k: int) -> int:
        total_stations = []

        window = 0
        for i in range(r + 1):
            window += stations[i]
        total_stations.append(window)

        for i in range(1, len(stations)):
            if i - r - 1 >= 0:
                window -= stations[i - r - 1]

            if i + r < len(stations):
                window += stations[i + r]
            total_stations.append(window)
        
        # Finish updating the total_stations
        # Now, we need to apply for the binary search
        left = 0
        right = max(total_stations) + k
        o = 0

        while left <= right:
            mid = (left + right) // 2

            # Apply binary search
            if self.binary_search(total_stations, r, k, mid):
                left = mid + 1
                o = max(o, mid)
            else:
                right = mid - 1
        
        return o
