class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int color, int originalColor) {
        if (r < 0 || r >= image.size() || c < 0 || c >= image[0].size()) return;
        if (image[r][c] != originalColor) return;
        image[r][c] = color;
        dfs(image, r + 1, c, color, originalColor);
        dfs(image, r - 1, c, color, originalColor);
        dfs(image, r, c + 1, color, originalColor);
        dfs(image, r, c - 1, color, originalColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if (originalColor != color) {
            dfs(image, sr, sc, color, originalColor);
        }
        return image;
    }
};
