class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int i = 0; int j = 0; int diff = 0;
        while(i<students.size() || j < seats.size()){
            diff += abs(seats[j]-students[i]);
            i++; j++;
        }
        return diff;
    }
};