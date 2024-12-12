class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
     {
        int start=0;
        int tg=0;
        int cg=0;

        for(int i=0;i<gas.size();i++){
            int fuel=gas[i]-cost[i];
            tg+=fuel;
            cg+=fuel;

            if(cg<0){
                cg=0;
                start=i+1;
            }
        }
        return tg<0?-1:start;
     }


};