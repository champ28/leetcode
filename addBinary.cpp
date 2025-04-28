class Solution {
public:
    string addBinary(string a, string b) {
        int la= a.length(),lb= b.length();
        int count= max(la,lb);
        string res;
         while(la<count){
            a.insert(a.begin(),'0');
            la++;
        }
        while(lb<count){
            b.insert(b.begin(),'0');
            lb++;
        }
        cout<<a<<endl;
        cout<<b<<endl;
        la= a.length()-1,lb= b.length()-1;
        char c='0';
        while(la>=0){
             if( a[la]=='0' && b[lb]=='0'){
                if(c=='1')
                res='1'+res;
                else
                res='0'+res;

                c='0';
            }
            else if( (a[la]=='0' && b[lb]=='1')|| 
                      (a[la]=='1' && b[lb]=='0') ){
                if(c=='1'){
                res='0'+res;
                c='1';
                }
                else{
                res='1'+res;
                c='0';
                }
                
            }

            else {
                if(c=='1'){
                    res='1'+res;
                }
                else{
                    res='0'+res;
                }
                c='1';
            }
            la--;
            lb--;

        }
        if(c=='1')
        res='1'+res;

        return res;
    }
};
