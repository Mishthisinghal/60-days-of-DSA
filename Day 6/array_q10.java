

public class array_q10 {
    public static void main(String[] args) {
        int []arr=new int[]{45,77,21,101,69,2,44};

        System.out.println("Original array:");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println("\n");


        System.out.println("Even numbers:");
        for(int j=0;j<arr.length;j++){
            if(arr[j]%2==0)
            System.out.print(arr[j]+" ");
        }
        System.out.println("\n");
        
        System.out.println("Odd numbers:");
        for(int j=0;j<arr.length;j++){
            if(arr[j]%2!=0)
            System.out.print(arr[j]+" ");
        }
    }
}
