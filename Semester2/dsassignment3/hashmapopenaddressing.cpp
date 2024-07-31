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
    int cap = 7;
    int size = 0;
    float load_factor = 0;

public:
    hash<int> hash_fn;
    vector<vector<int>> v;

    Hashmap() {
        sizing();
    }

    void sizing() {
        v.resize(cap, vector<int>(3, -1));
    }

    int probe(int x) {
        return 5 * x;
    }

    void resize() {
        int old_cap = cap;
        cap *= 2;
        vector<vector<int>> old_v = v;
        v.clear();
        size = 0;
        sizing();
        for (int i = 0; i < old_cap; i++) {
            if (old_v[i][0] != -1) {
                insert(old_v[i][0], old_v[i][1]);
            }
        }
    }

    void insert(int key, int val) {
        Entry* e = new Entry(key, val);
        e->hash = probe(e->key) % cap;
        if (size == cap) this->resize();
        int x = 0;
        while (true) {
            int idx = (e->hash + x) % cap;
            if (v[idx][0] == e->key) {
                v[idx][1] = e->data;
                break;
            } else if (v[idx][0] == -1) {
                size++;
                v[idx][0] = e->key;
                v[idx][1] = e->data;
                v[idx][2] = e->hash;
                break;
            }
            x++;
        }
    }

    void show_map() {
        for (int i = 0; i < v.size(); i++) {
            for (int k = 0; k < 3; k++) {
                cout << v[i][k] << " ";
            }
            cout << endl;
        }
    }

    void find(int key) {
        int hash1 = probe(key) % cap;
        int x = 0;
        while (true) {
            int idx = (hash1 + x) % cap;
            if (v[idx][0] == key) {
                cout << "value at key " << key << " is: " << v[idx][1] << endl;
                return;
            } else if (v[idx][0] == -1) {
                cout << "KEY " << key << " NOT FOUND" << endl;
                return;
            }
            x++;
        }
    }

    void remove(int key) {
        int hash1 = probe(key) % cap;
        int x = 0;
        while (true) {
            int idx = (hash1 + x) % cap;
            if (v[idx][0] == key) {
                v[idx][0] = -1;
                v[idx][1] = -1;
                v[idx][2] = -1;
                size--;
                load_factor = float(size) / cap;
                return;
            } else if (v[idx][0] == -1) {
                cout << "KEY " << key << " NOT FOUND" << endl;
                return;
            }
            x++;
        }
    }
};

int main() {
    Hashmap* a = new Hashmap();
    a->insert(2, 15);
    a->insert(6, 25);
    a->insert(6, 30);
    a->insert(2, 18);
    a->insert(10, 22);
    a->insert(2, 35);
    a->remove(2);
    a->insert(12, 28);
    a->insert(24, 40);
    a->insert(18, 9);
    a->show_map();
    a->find(6);
    a->find(12);
    a->find(2);
    a->find(5);

    return 0;
}
