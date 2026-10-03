class TrieNode {
public:
    TrieNode* children[26];
    int cnt;

    TrieNode() {
        for (int i = 0; i < 26; i++) children[i] = nullptr;
        cnt = 0;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insertSuffixes(const string& word) {
        for (int i = 0; i < word.size(); i++) {
            TrieNode* node = root;
            for (int j = i; j < word.size(); j++) {
                int idx = word[j] - 'a';
                if (!node->children[idx]) {
                    node->children[idx] = new TrieNode();
                }

                node = node->children[idx];
                node->cnt++;
            }
        }
    }

    bool search(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            node = node->children[idx];
        }
        return node->cnt > 1;
    }
};

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        Trie trie;

        for (const string& word : words) {
            trie.insertSuffixes(word);
        }

        for (const string& word : words) {
            if (trie.search(word)) {
                res.push_back(word);
            }
        }

        return res;
    }
};