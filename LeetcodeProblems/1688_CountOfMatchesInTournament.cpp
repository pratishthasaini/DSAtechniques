class Solution {
public:
    int numberOfMatches(int n) {
        int totalMatches = 0;
        int totalteams = 0;
        while(n != 1){
            if(n%2 == 0){
                totalMatches += (n/2);
                totalteams += (n/2);
            }
            else{
                totalMatches += ((n-1)/2);
                totalteams += (((n-1)/2) + 1);
            }
            if(n%2 == 0){
                n/=2;
            }
            else{
                n/=2;
                n+=1;
            }
            
        }
        return totalMatches;
    }
};

//or we can use this code optimally

class Solution {
public:
    int numberOfMatches(int n) {
        int totalMatches = 0;
        int totalteams = 0;
        while(n != 1){
            if(n%2 == 0){
                totalMatches += (n/2);
                totalteams += (n/2);
                n = n/2;
            }
            else{
                totalMatches += ((n-1)/2);
                totalteams += (((n-1)/2) + 1);
                n = ((n-1)/2) + 1;
            }
        }
        return totalMatches;
    }
};
