bool findInMatrix(int x, vector<vector<int>> &arr)
{
    //    Write your code here.
    int i=0;
    while(i<arr.size()){
    int j = arr[i].size()-1;
    if(x==arr[i][j]){
        return 1;
    }else if(x<arr[i][j]){
        for(int k=j-1;k>=0;k--){
            if(x==arr[i][k]){
            return 1;
            }            
        }
        return 0;
    }
    else{
        i++;
    }
    }    
    return 0;
}

//Search in a 2D matrix

//Problem link - https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118621/offering/1377945?leftPanelTab=0
