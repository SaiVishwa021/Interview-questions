/*Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.
*/

import java.util.*;
public class Chocolate_Distribution {
    static int findMinDiff(int arr[], int n, int m) {

        if (m == 0 || n == 0) 
        	return 0;
        if (n < m)
        	return -1;
        Arrays.sort(arr);

        int min_diff = Integer.MAX_VALUE;
        
        for(int i = 0; i+m-1 < n; i++) {
        	int diff = arr[i+m-1] - arr[i];
        	if(diff < min_diff){
        		min_diff = diff;
        	}
        }
        
        return min_diff;
    }


	public static void main(String[] args) {
        int arr[] = {3,4,1,9,56,7,9};
        int m = 3;  
        int n = arr.length;
        System.out.println("Minimum difference is " + findMinDiff(arr, n, m));
	}
}
