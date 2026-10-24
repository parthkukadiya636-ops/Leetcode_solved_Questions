class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {

        int days[] = {0, 31, 59, 90, 120, 151,
                      181, 212, 243, 273, 304, 334};

        int a1 = stoi(arriveAlice.substr(0, 2));
        int a2 = stoi(arriveAlice.substr(3, 2));

        int l1 = stoi(leaveAlice.substr(0, 2));
        int l2 = stoi(leaveAlice.substr(3, 2));

        int b1 = stoi(arriveBob.substr(0, 2));
        int b2 = stoi(arriveBob.substr(3, 2));

        int bl1 = stoi(leaveBob.substr(0, 2));
        int bl2 = stoi(leaveBob.substr(3, 2));

        int startAlice = days[a1 - 1] + a2;
        int endAlice = days[l1 - 1] + l2;

        int startBob = days[b1 - 1] + b2;
        int endBob = days[bl1 - 1] + bl2;

        int start = max(startAlice, startBob);
        int end = min(endAlice, endBob);

        if (start > end) {
            return 0;
        }

        return end - start + 1;
    }
};