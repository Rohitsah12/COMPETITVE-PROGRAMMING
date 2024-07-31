#include <bits/stdc++.h>
using namespace std;

class Entry {
public:
    int key;
    int data;
    int hash;
    Entry(int key, int data, int hash = 0) {
        this->data = data;
        this->key = key;
        this->hash = hash;
    }
};

class Hashmap {
    int cap;
    int size;
    float load_factor;
    vector<vector<vector<int>>> v;

public:
    hash<int> hash_fn;

    Hashmap() {
        cap = 1;
        size = 0;
        load_factor = 0.0;
        v.resize(cap);
    }

    void resize() {
        cap = cap * 2;
        vector<vector<vector<int>>> vnew(cap);

        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].size(); j++) {
                size_t new_hash = hash_fn(v[i][j][0]) % cap;
                v[i][j][2] = new_hash;
                vnew[new_hash].push_back(v[i][j]);
            }
        }
        v = vnew;
    }

    void insert(int key, int val) {
        if (float(size) / cap >= 0.6) {
            resize();
        }

        size_t hash1 = hash_fn(key);
        int hashval = hash1 % cap;

        for (auto &entry : v[hashval]) {
            if (entry[0] == key) {
                entry[1] = val;
                return;
            }
        }

        vector<int> entry = {key, val, hashval};
        v[hashval].push_back(entry);
        size++;
        load_factor = float(size) / cap;
    }

    void show_map() {
        cout << "showing map:\n";
        for (int i = 0; i < v.size(); i++) {
            cout << "Bucket " << i << ": ";
            for (int j = 0; j < v[i].size(); j++) {
                cout << "(" << v[i][j][0] << ", " << v[i][j][1] << ") ";
            }
            cout << endl;
        }
    }

    void find(int key) {
        size_t hash1 = hash_fn(key);
        int hashval = hash1 % cap;

        for (auto &entry : v[hashval]) {
            if (entry[0] == key) {
                cout << "value for this key is: " << entry[1] << "\n";
                return;
            }
        }
        cout << "KEY " << key << " NOT FOUND\n";
    }

    void remove(int key) {
        size_t hash1 = hash_fn(key);
        int hashval = hash1 % cap;

        for (auto it = v[hashval].begin(); it != v[hashval].end(); ++it) {
            if ((*it)[0] == key) {
                v[hashval].erase(it);
                size--;
                load_factor = float(size) / cap;
                return;
            }
        }
        cout << "KEY " << key << " NOT FOUND\n";
    }
};

int main() {
    Hashmap* a = new Hashmap();
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        int key = rand() % 100;
        int value = rand() % 100;
        a->insert(key, value);
        a->show_map();
    }
    cout << "......................\n";
    a->remove(1);  
    a->show_map();
    a->find(3);        
    a->find(8);        
    a->find(1);        
    a->find(4);  
    a->find(23); 

    delete a;
    return 0;
}
