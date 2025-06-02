#include <bits/stdc++.h>
using namespace std;
#define N 3

struct Node {
    Node* parent;
    int mat[N][N];
    int x, y;
    int level; // Removed unused 'cost' for DFS
};

string matrixToString(int mat[N][N]) {
    string s;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            s += to_string(mat[i][j]);
    return s;
}

void printMatrix(int mat[N][N]) { // Changed return type to void
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

Node* newNode(int mat[N][N], int x, int y, int newX, int newY, int level, Node* parent) {
    Node* node = new Node;
    node->parent = parent;
    memcpy(node->mat, mat, sizeof node->mat);
    swap(node->mat[x][y], node->mat[newX][newY]);
    node->x = newX;
    node->y = newY;
    node->level = level;
    return node;
}

int row[] = {1, 0, -1, 0};
int col[] = {0, -1, 0, 1};

bool isGoal(int initial[N][N], int final[N][N]) { // Renamed from calculateCost
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (initial[i][j] != final[i][j])
                return false;
    return true;
}

int isSafe(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N);
}

void printPath(Node* root) {
    if (!root) return;
    printPath(root->parent);
    printMatrix(root->mat);
    cout << endl;
}

void solve(int initial[N][N], int x, int y, int final[N][N]) {
    stack<Node*> st;
    unordered_set<string> visited;

    Node* root = newNode(initial, x, y, x, y, 0, nullptr);
    st.push(root);
    visited.insert(matrixToString(root->mat)); // Mark root as visited

    while (!st.empty()) {
        Node* current = st.top();
        st.pop();

        if (isGoal(current->mat, final)) {
            printPath(current);
            return;
        }

        for (int i = 3; i >= 0; i--) { // Reverse order to maintain exploration sequence
            int newX = current->x + row[i];
            int newY = current->y + col[i];

            if (isSafe(newX, newY)) {
                Node* child = newNode(current->mat, current->x, current->y, newX, newY, current->level + 1, current);
                string childState = matrixToString(child->mat);

                if (visited.find(childState) == visited.end()) {
                    visited.insert(childState); // Mark child as visited BEFORE pushing
                    st.push(child);
                } else {
                    delete child; // Avoid memory leak
                }
            }
        }
    }
}

int main() {
    int initial[N][N] = {
        {1, 2, 3},
        {5, 6, 0},
        {7, 8, 4}
    };

    int final[N][N] = {
        {1, 2, 3},
        {5, 8, 6},
        {0, 7, 4}
    };

    solve(initial, 1, 2, final);
    return 0;
}