/* instead of mannually coding the four iterations of the bits , i add the bits to the carry
in each iteration and convert the carry into the bits and add them to the result*/
class Solution {
public:
    string addBinary(string a, string b) {
        int la= a.length()-1,lb= b.length()-1;
        string res;
        int carry=0;
        while(la>=0 || lb>=0 || carry == 1){
            if(la>=0)
            carry+=a[la--]-'0';
            if(lb>=0)
            carry+=b[lb--]-'0';
            res.insert(res.begin(),carry%2+'0');
            carry= carry/2;

        }
        return res;

    }
};
