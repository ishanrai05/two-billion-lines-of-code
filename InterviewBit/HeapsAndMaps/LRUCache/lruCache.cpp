#include <list> 
int n;
list<pair<int,int>> t;
unordered_map<int,list<pair<int,int>>::iterator> lru;
LRUCache::LRUCache(int capacity) {
    lru.clear();
    t.clear();
    n = capacity;
}

int LRUCache::get(int key) {
    auto it = lru.find(key);
    if (it==lru.end()) return -1;
    int value = it->second->second;
    t.erase(it->second);
    t.push_front({key,value});
    it->second=t.begin();
    return value;
}

void LRUCache::set(int key, int value) {
    auto it=lru.find(key);
    if (it!=lru.end()){
        t.erase(it->second);
        t.push_front({key,value});
        it->second=t.begin();
    }
    else if (lru.size()<n){
        t.push_front({key,value});
        lru[key]=t.begin();
    }
    else {
        int temp=t.back().first;
        t.pop_back();
        lru.erase(temp);
        t.push_front({key,value});
        lru[key]=t.begin();
    }
}
