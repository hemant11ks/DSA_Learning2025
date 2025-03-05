public class trailZero {

   static int countTrailingZeroes(int n){

       int res = 0;

       for(int i=5; i<=n; i=i*5){
        res = res + (n/i);
       }

       return res;

   }

    public static void main(String[] args) {
        
        int number = 251;
        System.out.println(countTrailingZeroes(number));
    }
}
