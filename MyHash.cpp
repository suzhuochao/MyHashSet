//
// Created by zhuochao su on 11/13/22.
//

#include "MyHash.h"

MyHash::MyHash():bucket(capacity){

}

void MyHash::add(int key) {
    int temp = hash(key);
    for(int & it : bucket[temp]){
        if(it == key){
            return;
        }
    }
    bucket[temp].push_back(key);
}

void MyHash::remove(int key) {
    int temp = hash(key);
    for(auto it = bucket[temp].begin(); it != bucket[temp].end(); it++) {
        if (*it == key) {
            bucket[temp].erase(it);
        }
    }
}

bool MyHash::contains(int key) {
    int temp = hash(key);
    for(int & it : bucket[temp]){
        if(it == key){
            return true;
        }
    }
    return false;
}
