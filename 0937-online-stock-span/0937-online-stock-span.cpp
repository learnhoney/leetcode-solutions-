class StockSpanner {
public:
    StockSpanner() {
    }
    
    stack<pair<int,int>> st; //global declaration of the stack for both the functions

    int next(int price) {

        
        int count = 1;
        while(!st.empty() && st.top().first <= price){
            count += st.top().second;
            st.pop();
        }
        st.emplace(price, count);

        return count; 
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */