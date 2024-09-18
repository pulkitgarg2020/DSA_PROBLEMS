class Solution {
public:
    string reverseWords(string s) {
    reverse(s.begin(), s.end()); 
	int i = 0;
    int start, end;
    while (i < s.length() && s[i] != '\0') {
        start = i;
        while (i < s.length() && s[i] != ' ') i++;
        end = i;
        cout << "Start: " << start << " End: " << end << endl;
        reverse(s.begin()+start, s.begin()+end);
        i++;
    }

        int j = 0; // This pointer will build the final cleaned-up string

        for (int i = 0; i < s.length(); i++) {
            // Skip leading spaces
            if (s[i] == ' ' && (j == 0 || s[j - 1] == ' ')) continue;
            // Copy character to the new position
            s[j++] = s[i];
        }

        // Remove trailing space if exists
        if (j > 0 && s[j - 1] == ' ') j--;

        // Resize the string to the new cleaned size
        s.resize(j);    

    return s;
    }
};