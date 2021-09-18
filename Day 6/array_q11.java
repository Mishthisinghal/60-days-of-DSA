

public class array_q11 {
    public static void main(String[] args) {
        int [][]a=new int[][]{{1,5,7},{8,9,2}};
        int rows=a.length;
        int cols=a[0].length;
        int [][]b=new int[cols][rows];

        System.out.println("Before transpose:");

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                System.out.print(a[i][j]+" ");

            }
            System.out.print("\n");
        }
        System.out.println("After transpose:");
        for(int i=0;i<cols;i++){
            for(int j=0;j<rows;j++){
                b[i][j]=a[j][i];
                System.out.print(b[i][j]+" ");

            }
            System.out.print("\n");
        }
    }
}
