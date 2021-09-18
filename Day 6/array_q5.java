

public class array_q5 {
    public static void main(String[] args) {
        int []arr=new int[]{45,77,21,101,69};

        System.out.println("Original array:");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println("\n");

        System.out.println("Elements at even position:");
        for(int j=0;j<arr.length;j++){
            if(j%2!=0){
            System.out.print(arr[j]+" ");
            }
        }
        System.out.println("\n");
    }
}
