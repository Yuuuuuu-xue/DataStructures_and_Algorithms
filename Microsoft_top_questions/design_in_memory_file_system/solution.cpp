#include <bits/stdc++.h>

using namespace std;

struct TrieNode {
  bool isFile;
  string fileName;
  string content;
  unordered_map<string, TrieNode *> children;

  TrieNode(string fileName): isFile(false), fileName(fileName) {};
  TrieNode(): isFile(false) {};
};


class FileSystem {
private:
  TrieNode root;

  TrieNode *getNode(string path) {
    stringstream ss(path);
    string pathName;
    TrieNode* curr = &root;
    while(getline(ss, pathName, '/')) {
      // Not exist
      if (curr->children.find(pathName) == curr->children.end()) {
        curr->children[pathName] = new TrieNode(pathName);
      }
      curr = curr->children[pathName];
    }
    return curr;
  }

public:
  FileSystem() {
    
  }
  
  vector<string> ls(string path) {
    TrieNode *curr = getNode(path);
    // file
    if (curr->isFile) {
      return {curr->fileName };
    }
    // directory
    vector<string> o;
    for (auto p : curr->children) {
      o.push_back(p.second->fileName);
    }
    sort(o.begin(), o.end());
    return o;
  }
  
  void mkdir(string path) {
    getNode(path);
  }
  
  void addContentToFile(string filePath, string content) {
    TrieNode *curr = getNode(filePath);
    // If first created, then set isFile to true
    curr->isFile = true;
    curr->content += content;
  }
  
  string readContentFromFile(string filePath) {
    TrieNode *curr = getNode(filePath);
    return curr->content;
  }
};

/**
 * Your FileSystem object will be instantiated and called as such:
 * FileSystem* obj = new FileSystem();
 * vector<string> param_1 = obj->ls(path);
 * obj->mkdir(path);
 * obj->addContentToFile(filePath,content);
 * string param_4 = obj->readContentFromFile(filePath);
 */
