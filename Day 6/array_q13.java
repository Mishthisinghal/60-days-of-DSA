

public class array_q13 {
    public static void main(String[] args) {
        int [][]a=new int[][]{{1,0,0},{0,1,0},{0,0,1}};
        int rows=a.length;
        int cols=a[0].length;
        int n=rows*cols;
        if(rows!=cols){
            System.out.println("Square matrix is needed");
        }
        int c=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(i==j && a[i][j]==1){
                    c++;
                }
                if(i!=j && a[i][j]==0){
                    c++;
                }

            }
        }
        if(c==n){
            System.out.println("The given matrix is identity matrix.");
        }
        else{
            System.out.println("The given matrix is not an identity matrix.");
        }
    }
}
