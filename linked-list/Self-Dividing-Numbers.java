class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {


        ArrayList<Integer> arr = new ArrayList<>(5);
        while( left <= right ) {
        
        if(self(left) == true ) {
            arr.add(left);
             
        }
        left++;
        }
        return arr;
    }
    public boolean self( int left ) {
        int temp = left;

        while( temp > 0 ) {
            int rem = temp % 10;
            if(rem == 0 ) {
                return false;
            }
           if(left % rem != 0 ) {
                return false;    
            }
            temp /= 10;
        }
       return true;   
    }
}
