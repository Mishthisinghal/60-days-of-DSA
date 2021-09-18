

public class array_q7 {
    public static void main(String[] args) {
        int [][]a1=new int[][]{{1,2,9},{0,1,5},{8,0,1}};
        int [][]a2=new int[][]{{1,4,0},{3,1,4},{5,1,1}};
        int rows1=a1.length;
        int cols1=a1[0].length;
        int rows2=a2.length;
        int cols2=a2[0].length;
        int [][]m=new int[rows1][cols2];


        if(cols1==rows2){
            for(int i=0;i<rows1;i++){
                for(int j=0;j<cols2;j++){
                    m[i][j]=0;
                      for(int k=0;k<cols1;k++){
                          m[i][j]+=a1[i][k]*a2[k][j];

                      }
                      System.out.print(m[i][j]+" ");
                }
                System.out.print("\n");
            }
        }
        else{
            System.out.println("Cannot multiply as no of columns of first matrix are not equal to number of rows of second matrix.");
        }
    }
}
