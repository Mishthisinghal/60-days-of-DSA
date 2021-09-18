import java.util.*;

public class array_q15 {
    public static void main(String[] args) {
        int []arr=new int[]{45,77,21,101,69};

        System.out.println("Original array:");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println("\n");

        Arrays.sort(arr);
        System.out.println("Sorted array:");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println("\n");

        System.out.println("Second Largest element: "+arr[arr.length-2]);
    }
}
