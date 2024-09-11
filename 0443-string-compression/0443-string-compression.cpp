class Solution {
public:

    int compressUsingTwoLoops(vector<char>& chars) {
        int count = 1;
        string s;
        int index = 0;
        for (int i = 0; i < chars.size(); i++) {
            // store the current char
            char curr = chars[i];

            // push the current char in array
            s.push_back(curr);

            while (i < chars.size()-1 && chars[i+1] == curr) {
                i++;
                count++;
            }

            chars[index++] = curr;

            if (count > 1) {
                string str = to_string(count);
                for (auto c: str) chars[index++] = c;
            }

            count = 1;
        }

        chars.resize(index);

        return index;
    }

    int compress(vector<char>& chars) {
        return compressUsingTwoLoops(chars);
    }
};

/*

    int compress(vector<char>& chars) {
        vector<char> g(280, 0);

        for (auto c: chars) g[c]++;

        string s;

        for (int i=0; i<g.size(); i++) {
            if (g[i] > 0) {
                char c = i;
                s.push_back(c);
                int freq = g[i];
                if (freq > 1) {
                    if (freq > 10) s.append(std::to_string(freq));
                    else s.push_back(freq + '0');
                }
            }
        }
        cout << s << endl;
        chars = std::vector(s.begin(), s.end());
        return s.length();
    }

*/