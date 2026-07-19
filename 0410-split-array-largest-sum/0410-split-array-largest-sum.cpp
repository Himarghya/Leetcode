class Solution {
public:
bool IsValid(vector<int> arry, int student, int MaxAllotment ){
    int stu = 1; int sum = 0;
    for(int i =0 ; i< arry.size() ; i++){
        if(arry[i] > MaxAllotment ){
            return false;
        }
        if(arry[i]+sum <= MaxAllotment){
            sum+= arry[i];
        }else{
            stu++;
            sum = arry[i];
        }
    }
    if(stu > student ){
        return false;
    }else{
        return true;
    }

}

int calculation(vector<int> arry , int s , int student){
    int start = 0 , end = s;
    int ans = -1;
    while(start <= end){
        int middle = start + ((end - start)/2);
        if(IsValid(arry , student, middle )){
            ans = middle;
            end = middle - 1;
        }else{
            start = middle + 1;
        }

    }
    return ans;
}

int sum(vector<int> arry){
    int sum = 0;
    for (int i = 0 ; i <= arry.size() - 1 ; i++){
        sum += arry[i];
    }
    return sum;
}

    int splitArray(vector<int>& arry, int k) {
        int s = sum(arry);
        if(k == 1){
            return s;
        }else{
            return calculation(arry , s , k);
        }
         
    }
};