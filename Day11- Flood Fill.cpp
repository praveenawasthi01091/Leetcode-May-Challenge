class Solution {
public:
  void color(vector<vector<int>>& image,int sr,int sc, int prevColor,int newColor ){
    if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size())
        return;
     if(image[sr][sc]!=prevColor)
         return;
     
    image[sr][sc]=newColor;
     
    color(image,sr+1,sc,prevColor,newColor);
    color(image,sr-1,sc,prevColor,newColor);
    color(image,sr,sc+1,prevColor,newColor);
    color(image,sr,sc-1,prevColor,newColor);
   
}
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       
        if(image.size() && image[sr][sc]!=newColor)
        color(image,sr,sc,image[sr][sc],newColor);
       
        return image;    
    }
};
