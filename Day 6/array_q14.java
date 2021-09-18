

public class array_q14 {
    public static void main(String[] args) {
        int [][]a=new int[][]{{1,5,6},{8,1,9},{11,3,1}};
        int [][]b=new int[a.length][a[0].length];
        int rows=a.length;
        int cols=a[0].length;

        
        if(rows!=cols){
            System.out.println("Square matrix is needed");
        }
        else{
            System.out.println("Lower triangular matrix:");
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    if(j>i){
                        b[i][j]=0;
                        System.out.print(b[i][j]+" ");
                    }else{
                        b[i][j]=a[i][j];
                        System.out.print(b[i][j]+" ");
                    }
                }
                System.out.print("\n");
            }
            
        }
    }
}
