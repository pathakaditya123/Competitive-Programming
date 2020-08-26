import java.util.*;
public class BinodAndSubarrays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n , k , s ;
        n = sc.nextInt() ;
        k = sc.nextInt() ;
        s = sc.nextInt() ;
        int sum = 0 ;
        int arr[] = new int [n] ;
        for (int i = 0 ; i < n ; i++) {
            arr[i] = sc.nextInt() ;
            sum += arr[i] ;
        }
        Arrays.sort(arr);
        if (sum <= s) {
            System.out.println("-1");
        }
        else {
            int sum2 = 0 , index =  0;
            for (int i = n - 1 ; i >= 0 ; i--) {
                index++ ;
                sum2 += arr[i] ;
                if (sum2 > s) {
                    break ;
                }
            }
            if(index <= k) {
                System.out.println(index + 1) ;
            }
            else {
                System.out.println(index) ;
            }
        }
        
    }
}