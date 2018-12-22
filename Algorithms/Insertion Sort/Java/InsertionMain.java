import java.util.Scanner;
import java.util.Random;
import com.sort.Insertionsort;

public class InsertionMain{

     public static void main(String[] args) {
        
        int [] Arr = new int[1000];
        int numbers;
        Scanner in = new Scanner(System.in);
        Insertionsort srt = new Insertionsort();

        Random rand = new Random();

       /* for (int i = 0; i < Arr.length; i++) {
           System.out.println(Arr[i]);
        }*/ 

        System.out.println("Enter count of numbers to sort:");
        numbers = in.nextInt();

        System.out.println("Before sort:");
        for (int i = 0; i < numbers; i++) {
            Arr[i] = rand.nextInt(1000);    
            System.out.print(Arr[i]+"\t");
        }
        System.out.println("");

        System.out.println("After sort:");
        
        srt.sort(Arr,numbers);
     
        for(int i = 0;i < numbers;i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println("");
    }
}
