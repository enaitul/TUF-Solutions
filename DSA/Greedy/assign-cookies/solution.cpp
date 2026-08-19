class Solution{    
    public:
    int findMaximumCookieStudents(vector<int>& Student, vector<int>& Cookie){
        sort (Student.begin(), Student.end());
        sort( Cookie.begin(), Cookie.end() );

        int s_ptr = 0;
        int c_ptr = 0;

        while (s_ptr < Student.size() && c_ptr < Cookie.size()){
            if (Cookie[c_ptr] >= Student[s_ptr]){
                s_ptr++;
            }
            c_ptr++;
        }
        return s_ptr;
    }
};