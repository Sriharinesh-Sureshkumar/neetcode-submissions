class MyHashSet {
public:
    vector<vector<int>> buckets;
    int size = 10007;
    MyHashSet() {
        buckets.resize(size);
    }
    
    void add(int key) {
        int i = key % size;
        if (find(buckets[i].begin(), buckets[i].end(), key) == buckets[i].end()){
            buckets[i].push_back(key);
        }
    }
    
    void remove(int key) {
        int i = key % size;
        auto it = find(buckets[i].begin(), buckets[i].end(), key);
        if (it != buckets[i].end()){
            buckets[i].erase(it);
        }
    }
    
    bool contains(int key) {
        int i = key % size;
        return find(buckets[i].begin(), buckets[i].end(), key) != buckets[i].end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */