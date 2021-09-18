

public class array_q8 {
    public static void main(String[] args) {
        int [][]a1=new int[][]{{1,0,0},{0,1,0},{0,0,1}};
        int [][]a2=new int[][]{{1,4,0},{0,1,0},{0,0,1}};
        int rows1=a1.length;
        int cols1=a1[0].length;
        int rows2=a2.length;
        int cols2=a2[0].length;
        int n=rows1*cols1;

        if(rows1==rows2 && cols1==cols2){
            int c=0;
            for(int i=0;i<rows1;i++){
                for(int j=0;j<cols1;j++){
                    if(a1[i][j]==a2[i][j]){
                        c++;
                    }
                    
    
                }
            }
        

            if(c==n){
                System.out.println("Both matrices are equal.");
            }
            else{
                System.out.println("Matrices are not equal.");
            }
        }else{
            System.out.println("Number of rows and columns are not equal.");
        }
    }
}
