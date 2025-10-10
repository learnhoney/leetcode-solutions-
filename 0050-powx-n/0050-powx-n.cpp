class Solution {
public:

    double helper(double num, int pow){
        if(pow == 0){
            return 1;
        }
        return num * helper(num, pow-1);
    }
    double myPow(double num, int pow) {
        if(pow == INT_MAX) return (num == 1)? 1 : (num == -1)? -1 :0;
        if(pow == INT_MIN) return (num == 1 || num == -1)? 1: 0;
        double res = 1;
        if(pow >= 0){                   //positive int power 
            res = helper(num, pow);
        }else{                         //neg power so 1/x**n == x**-n
            pow = -pow;                 //convert neg pow to +pow by -(-pow)
            res = helper(num , pow);      //calc x**n
            res = 1.0/res;               //calc x**-n
        }
        return res;
    }
};