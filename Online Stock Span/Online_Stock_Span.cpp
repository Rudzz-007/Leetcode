class StockSpanner {
    vector<int> prices;
    stack<int> st;   
public:
    StockSpanner() {
    }
    int next(int price) {
        prices.push_back(price);
        int i = prices.size() - 1;
        while (!st.empty() && prices[st.top()] <= price) {
            st.pop();
        }
        int pgi;
        if (st.empty())
            pgi = -1;
        else
            pgi = st.top();

        st.push(i);
        return i - pgi;
    }
};
