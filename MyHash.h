//
// Created by zhuochao su on 11/13/22.
//

#ifndef MYHASHSET_MYHASH_H
#define MYHASHSET_MYHASH_H
#include "vector"
#include "list"
using namespace std;


class MyHash {
private:
    vector<list<int>> bucket;
    int capacity = 500;
    int hash(int key) const{
        return key % capacity;
    }

public:
    MyHash();
    void add(int key);
    void remove(int key);
    bool contains(int key);
};


#endif //MYHASHSET_MYHASH_H
