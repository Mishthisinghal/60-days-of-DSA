

public class array_q4 {
    public static void main(String[] args) {
        int []arr=new int[]{45,77,21,101,69};

        System.out.println("Original array:");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println("\n");
        System.out.println("Reversed array:");
        for(int i=arr.length-1;i>=0;i--){
            System.out.print(arr[i]+" ");
        }
    }
}
