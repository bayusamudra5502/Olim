package OJ.CF1354A;
import java.util.Scanner;

public class program{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();

        for(int i = 0; i < tc; i++){
            long a,b,c,d;
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            d = sc.nextInt();

            if(b >= a){
                System.out.println(b);
            }else{
                long add = c - d;
                if(add > 0){
                    long n = (long) Math.ceil((a-b) / add);
                    System.out.println(n*c+b);
                }else{
                    System.out.println(-1);
                }
            }
        }

        sc.close();
    }
}