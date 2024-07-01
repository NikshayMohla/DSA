int findFloor(vector<long long> v, long long n, long long x){
        int s = 0;
        int e = n - 1;
        int mid = s + ( e - s ) / 2;
                    int ans = -1;

        while ( s <= e ) {
        if ( v[mid] <= x ) {
            ans = mid;
            s = mid + 1;
            
        }
        else if ( v[mid] > x ) {
            e = mid - 1;
        }
        mid = s + ( e - s ) / 2;
        // Your code here
        }
                return ans;

    }