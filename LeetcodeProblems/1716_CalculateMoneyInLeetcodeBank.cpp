class Solution {
public:
    int totalMoney(int n) {
        int j = 1;
        int i = j;
        int add = 0;
        while(n != 0){
            add += i;
            i++;
            if(i == j+7){
                j++;
                i = j;
            }
            n--;
        }
        return add;
    }
};

/* implementation is so simple 
for exa :-
n = 23
so for this = 
----------------------------------
j = 1 and i = 1 
mon to sun = 1+2+3+4+5+6+7
n = 16
if condition will hit because i = 8
-----------------------------------
now, j = 2 and value of i is changed/reseted to 2 so ,i = 2
mon to sun = 2+3+4+5+6+7+8
n = 9
------------------------------------
now j = 3 and i = 3
mon to sun = 3+4+5+6+7+8+9
n = 2
------------------------------------
now j = 4 and i = 4
mon to tue =  4+5
n = 0
----------------------------------------------------------------------------
final answer is  (1+2+3+4+5+6+7)+(2+3+4+5+6+7+8)+(3+4+5+6+7+8+9)+(4+5) = 114
*/
