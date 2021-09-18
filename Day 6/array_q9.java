
public class array_q9 {
    public static void main(String[] args) {
        int [][]a=new int[][]{{2,5},{6,8},{7,4}};
        int rows=a.length;
        int cols=a[0].length;
        int even=0,odd=0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(a[i][j]%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
        }
        System.out.println("The frequency of odd numbers in given matrix is: "+even+" and odd numbers is: "+odd);
    }
}
