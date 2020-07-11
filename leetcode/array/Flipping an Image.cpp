/*
Given a binary matrix A, we want to flip the image horizontally, then invert it, and return the resulting image.
To flip an image horizontally means that each row of the image is reversed.  For example, flipping [1, 1, 0] horizontally results in [0, 1, 1].
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0. For example, inverting [0, 1, 1] results in [1, 0, 0].
Example 1:
Input: [[1,1,0],[1,0,1],[0,0,0]]
Output: [[1,0,0],[0,1,0],[1,1,1]]
Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
Example 2:
Input: [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
Notes:
1 <= A.length = A[0].length <= 20
0 <= A[i][j] <= 1
*/


class Solution {
public:
     // bool check(int a){
     //   return a==0;}   // returning opposite of input , 1-->0 , 0-->1 
                                         
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {  
                                             // 2-d vector
        for(int i=0;i<A.size();i++){ // A.size() gives number of row 
           reverse(A[i].begin(),A[i].end()); 
            for(int j=0;j<A[i].size();j++){   // A[i].size() gives number of column in that row
             A[i][j]=!A[i][j] ;  // alternative==> //(A[i][j]==0) ? 1:0; //A[i][j]=check(A[i][j]); you can use check() function instead of this
            }
        }
        return A;
    }
};

// Using for each loop
/*
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto& i : A){
        reverse(i.begin(),i.end());
            for(auto& j : i)
                j=!j;
        }
        return A;
    }
};
int main(){
Solution u;
vector<vector<int>> a={{1,1,0},{1,0,1},{0,0,0}};
vector<vector<int>> b=u.flipAndInvertImage(a);
for(auto i : b){
        cout<<endl;
            for(auto j : i){
             cout<<j<<" ";
            }
}
}

*/
