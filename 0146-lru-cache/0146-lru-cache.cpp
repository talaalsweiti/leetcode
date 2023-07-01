class LRUCache {
public:
    int cap , currentSize;
    //to store the key and its corresponding value to facilitate O(1) time complexity
    map <int,int> keyval;
    
    //one map to store the key and its corresponding position in the list
    map <int,list<int>::iterator> keypos;
    
    //A doubly linked list of keys, to keep track of the recently used key
    list <int> keys;
    
    LRUCache(int capacity) {
        cap = capacity;
        currentSize=0;
    }
    
    int get(int key) {
        //if not found return -1
        if(keyval.find(key)==keyval.end()) return -1;
        
        //if foune, we need update the doubly linked list
        auto it = keypos[key];
        keypos.erase(key);
        keys.erase(it);
        
        keys.push_front(key);
        keypos[key]=keys.begin();
        return keyval[key];
        
    }
    
    void put(int key, int value) {
        //if key already exist, delete it to update
         if(keyval.find(key)!=keyval.end()){
            auto it = keypos[key];
            keys.erase(it);
            keypos.erase(key);
            keyval.erase(key);
            currentSize--;
             
         }
        if(cap==currentSize){
            auto it = keys.back();
            keys.pop_back();
            keyval.erase(it);
            keypos.erase(it);
            currentSize--;
           
        }
        
        keys.push_front(key);
        keypos[key]=keys.begin();
        keyval[key] = value;
        currentSize++;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */