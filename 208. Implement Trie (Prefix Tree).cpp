class Trie {
public:
    struct TrieNode {
        TrieNode* chars[26];
        bool isEnd;
    };
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node = root;
        for(char c : word){
            if(!node->chars[c-'a']){
                node->chars[c-'a'] = new TrieNode();
            }
            node = node->chars[c-'a'];
        }
        node->isEnd = true;//end of a word
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(char c : word){
            if(!node->chars[c-'a']) return false;
            node = node->chars[c-'a'];
        }
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {
       TrieNode* node = root;
        for(char c : prefix){
            if(!node->chars[c-'a']) return false;
            node = node->chars[c-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
