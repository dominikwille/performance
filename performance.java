public class performance 
{
   public static void main (String[] args)
   {
      int s = 1000000; // Start
      int n = 1000; // Number of prime numbers to find

      int[] prime_numbers = new int[n];
      int p = 0; // Number of prime numbers found
      boolean is_prime;

        long start = System.currentTimeMillis();
        for (int i = s; p < n; i++) {
            is_prime = true;
            for (int j = 2; j < i; j++) {

                if (i % j == 0) {
                   is_prime = false;
                }
            }

            if (is_prime) {
              prime_numbers[p++] = i;
            }

         }
         long end = System.currentTimeMillis();


         for(int k=0; k < n; k++) {
         	System.out.println(prime_numbers[k]);
         }

         System.out.printf("Execution time: %d", end - start);
   }
}
