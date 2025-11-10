import java.util.Scanner;
import java.util.concurrent.TimeUnit;

public class TestBufferNotClosed {
    public static void main(String[] args) throws InterruptedException {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String string = scanner.nextLine();
        while(true){
            System.out.println(string);
            TimeUnit.SECONDS.sleep(1);
        }
    }
}
