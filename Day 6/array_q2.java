
public class array_q2 {
    public static void main(String[] args) {
        int []arr=new int[]{45,77,21,101,69,2,44};

        System.out.println("Original array:");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println("\n");

        int temp=arr[0];
        for(int j=0;j<arr.length-1;j++){
            arr[j]=arr[j+1];
        }
        arr[arr.length-1]=temp;

        System.out.println("Array after left rotation:");
        for(int k=0;k<arr.length;k++){
            System.out.print(arr[k]+" ");
        }
        System.out.println("\n");
    }

}
