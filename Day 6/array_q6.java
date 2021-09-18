

public class array_q6 {
    public static void main(String[] args) {
        int [][]mat1=new int[][]{{2,3},{4,5},{6,7}};
        int [][]mat2=new int[][]{{2,8},{9,5},{0,5}};

        int[][]mat3=new int[mat1.length][mat1[1].length];

        for(int i=0;i<mat1.length;i++){
            for(int j=0;j<mat1[1].length;j++){
                mat3[i][j]=mat1[i][j]+mat2[i][j];
                System.out.print(mat3[i][j]+" ");
            }
            System.out.print("\n");
        }
    }
}
