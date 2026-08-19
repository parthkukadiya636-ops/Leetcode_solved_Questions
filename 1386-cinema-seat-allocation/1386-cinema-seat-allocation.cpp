 class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        
        int m = reservedSeats.size();
        int count = 0;

        unordered_map<int, vector<int>> cinema;

        // Store reserved seats row-wise
        for (int i = 0; i < m; i++) {
            
            int x = reservedSeats[i][0];
            int y = reservedSeats[i][1];

            cinema[x].push_back(y);
        }

        // Rows with no reserved seats
        count += (n - cinema.size()) * 2;

        // Check rows having reserved seats
        for (auto &p : cinema) {

            bool left = true;
            bool middle = true;
            bool right = true;

            for (int seat : p.second) {

                if (seat >= 2 && seat <= 5)
                    left = false;

                if (seat >= 4 && seat <= 7)
                    middle = false;

                if (seat >= 6 && seat <= 9)
                    right = false;
            }

            if (left && right) {
                count += 2;
            }
            else if (left || middle || right) {
                count++;
            }
        }

        return count;
    }
};