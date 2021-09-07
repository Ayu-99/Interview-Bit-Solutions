vector<int> Solution::subUnsort(vector<int> &A) {
    
    //O(n) solution
    int i=0,start=0,end=0,max_element=INT_MIN,min_element=INT_MAX;
    for(i=0;i<A.size()-1;i++){
        if(A[i]>A[i+1]){
            start=i;
            break;
        }
    }
    
    vector<int> ans;
    if(i==A.size()-1){
        ans.push_back(-1);
        return ans;
    }
    
    for(int j=A.size()-1;j>0;j--){
        if(A[j]<A[j-1]){
            end=j;
            break;
        }
    }
    
    for(int j=start;j<=end;j++){
        if(A[j]>max_element){
            max_element=A[j];
        }
        if(A[j]<min_element){
            min_element=A[j];
        }
    }
    
    for(int j=0;j<start;j++){
        if (A[j]>min_element){
            start=j;
            break;
        }
    }
    
    
    for(int j=A.size()-1;j>end;j--){
        if (A[j]<max_element){
            end=j;
            break;
        }
    }
    
    ans.push_back(start);
    ans.push_back(end);
    return ans;
   } 
