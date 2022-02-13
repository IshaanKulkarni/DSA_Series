 int minDeletions(string s) {
        vector<int>  v(26,0);
        int n = s.length();
        for(int i= 0;i<n;i++)
        {
            v[s[i]-'a'] =  v[s[i]-'a']+1;
        }
        sort(v.rbegin(),v.rend());
        int count = 0;
        int counter = v[0];
        for(int i = 0;i<26;i++)
        {   
            if(v[i]>counter)
            {
                count = count+v[i]-counter;
            }
            else
            {
                counter = v[i];
            }
            if(counter>0)counter--;
        }
        return count;
    }
