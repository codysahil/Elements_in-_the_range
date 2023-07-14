bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		unordered_map<int,int> mp;
		for(int i = 0; i<n; i++){
		    mp[arr[i]]++;
		}
		while(A<=B){
		    if (mp.find(A) == mp.end()){
        return false;
		    }
    
            else{
                A++;
            }
            
            
		}
		return true;
	}
