class Solution {
public:
    string pushDominoes(string s) {
        int last_r = -1, l = 0;
        for (int r = 0; s[r]; r++) {
            if (last_r == -1 && s[r] == 'L') {
                while (l < r) s[l++] = 'L'; l = r;
            } else if (last_r != -1 && s[r] == 'L') {
                int mid = (r - last_r - 1) / 2;
                for (int j = 1; j <= mid; j++) s[r - j] = 'L';
                if ((r - last_r - 1) & 1) s[r - mid - 1] = '.';
                last_r = -1; l = r;
            } else if (s[r] == 'R') {
                last_r = r; l = last_r + 1;
            } else if (last_r != -1) {
                s[r] = 'R';
            }
        }
        return s;
    }
};