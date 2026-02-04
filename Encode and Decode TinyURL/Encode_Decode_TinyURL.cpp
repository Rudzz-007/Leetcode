class Solution {
    unordered_map<string, string> mp;
    int cnt = 0;

public:
    string encode(string longUrl) {
        string shortUrl = to_string(cnt++);
        mp[shortUrl] = longUrl;
        return shortUrl;
    }

    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};