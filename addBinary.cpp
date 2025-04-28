/* the while loops makes length of a and  b string equal.
    the individual bits of strings a and b are added with position wise.
    the bit addition is as follows 1+1 = 10, 0+0= 00, 1+0 = 01, 0+1 = 01. 

    we start addition from right to left.
    if there is any carry from previous bits addition we store it in character c. This character is added to the new bits addition.
    
*/

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




