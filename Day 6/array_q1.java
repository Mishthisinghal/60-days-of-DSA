public class array_q1 {
    public static void traversal(int []a){
        for(int i=0;i<a.length;i++){
            
            System.out.print(a[i]+" ");
        }
        System.out.println("\n");
    }
    public static void main(String[] args) {
        int []arr1=new int[]{23,56,12,7,1};
        int []arr2=new int[arr1.length];
        
        for(int i=0;i<arr1.length;i++){
            arr2[i]=arr1[i];
        }
        
        System.out.println("Original array:");
        traversal(arr1);
        System.out.println("Copied array:");
        traversal(arr2);

    }
}