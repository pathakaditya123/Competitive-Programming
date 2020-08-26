import java.util.*;
public class ChefAndIceCream {
   public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;
        int testcases ;
        testcases = sc.nextInt() ;
        for (int t = 0 ; t < testcases ; t++) {
            int m = sc.nextInt() ;
            int n = sc.nextInt() ;
            int flavors[] = new int[n] ;
            for (int i = 0 ; i < n ; i++) {
                flavors[i] = sc.nextInt() ;
            }
            for (int i = 0 ; i < n; i++) {
                for (int j = i + 1 ; j < n ; j++) {
                    if (flavors[i] + flavors[j] == m) {
                        System.out.println( (i + 1 ) + " " + (j + 1)) ;
                        break;
                    }
                }
            }
        }
        sc.close();
   }

};