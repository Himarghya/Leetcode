

class LRUCache {
public:
    class Node {
    public:
        int key, val;
        Node* next;
        Node* prev;

        Node(int k, int v) {
            key = k;
            val = v;
            next = prev = NULL;
        }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    unordered_map<int, Node*> m;
    int limit;

    void deleteNode(Node* DN) {
        DN->prev->next = DN->next;
        DN->next->prev = DN->prev;
    }

    void addNode(Node* NN) {
        Node* temp = head->next;

        NN->next = temp;
        NN->prev = head;

        head->next = NN;
        temp->prev = NN;
    }

    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (m.find(key) == m.end()) {
            return -1;
        }

        Node* ansNode = m[key];
        int ans = ansNode->val;

        deleteNode(ansNode);
        addNode(ansNode);

        return ans;
    }

    void put(int key, int value) {
        if (m.find(key) != m.end()) {
            Node* oldNode = m[key];
            deleteNode(oldNode);
            m.erase(key);
        }
        else if (m.size() == limit) {
            Node* LRU = tail->prev;
            m.erase(LRU->key);
            deleteNode(LRU);
            delete LRU;
        }

        Node* NewNode = new Node(key, value);
        addNode(NewNode);
        m[key] = NewNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */