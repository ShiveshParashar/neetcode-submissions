class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int answer=INT_MIN;
        while(left<right){
            int width=right-left;
            int area=width*min(heights[right],heights[left]);
            answer=max(area,answer);
            if(heights[left]<heights[right]) left++;
            else{
                right--;
            }

        }
        return answer;
    }
};
