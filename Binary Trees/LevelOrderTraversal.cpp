#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
 int data;
 Node *left;
 Node *right;
 Node(int val)
 {
  data = val;
  left = nullptr;
  right = nullptr;
 }
};
void levelOrderTraversal(Node *root, vector<vector<int>> &ans)
{
 queue<Node *> q;
 q.push(root);
 while (q.size())
 {
  int size = q.size();
  vector<int> level;
  for (int i = 0; i < size; i++)
  {
   Node *node = q.front();
   q.pop();
   if (node->left != NULL)
    q.push(node->left);
   if (node->right != NULL)
    q.push(node->right);
   level.push_back(node->data);
  }
  ans.push_back(level);
 }
}
int main()
{
 int n;
 cin >> n;
 vector<int> arr;
 for (int i = 0; i < n; i++)
 {
  arr.push_back(i);
 }
 Node *root = new Node(arr[0]);
 root->left = new Node(arr[1]);
 root->right = new Node(arr[2]);
 vector<vector<int>> LevelOT;
 levelOrderTraversal(root, LevelOT);
 for (int i = 0; i < LevelOT.size(); i++)
 {
  for (int j = 0; j < LevelOT[i].size(); j++)
  {
   cout << LevelOT[i][j] << " ";
  }
 }
 return 0;
}
