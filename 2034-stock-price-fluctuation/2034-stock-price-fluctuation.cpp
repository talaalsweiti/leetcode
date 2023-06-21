class StockPrice {
public:
    map<int,int> stock;
    priority_queue<pair<int,int>> maxHeap;
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
    int lastTime ;
    StockPrice() {
        lastTime=0;
    }
    
    void update(int timestamp, int price) {
     
        stock[timestamp] = price;
        minHeap.push({price,timestamp});
        maxHeap.push({price,timestamp});
        if(lastTime<=timestamp)lastTime = timestamp;
           // updating the max
        while (stock[maxHeap.top().second] != maxHeap.top().first)
        {
            maxHeap.pop();
        }
        // updating the min
        while (stock[minHeap.top().second] != minHeap.top().first)
        {
            minHeap.pop();
        }
    }
    
    int current() {
        return stock[lastTime];
    }
    
    int maximum() {
        return maxHeap.top().first;
    }
    
    int minimum() {
        return minHeap.top().first;
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */