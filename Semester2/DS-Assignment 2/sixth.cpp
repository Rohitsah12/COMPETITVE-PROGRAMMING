//submission link:- https://leetcode.com/problems/online-stock-span/submissions/1283498754/
class StockSpanner {
    stack<pair<int, int>> s;
    int index;
public:
    StockSpanner() {
        index = 0;
    }
    
    int next(int price) {
        while (!s.empty() && s.top().second <= price) {
            s.pop();
        }
        int res;
        if (s.empty()) {
            res = index + 1;
        } else {
            res = index - s.top().first;
        }
        s.push({index, price});
        index++;
        return res;

    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */