import java.util.Scanner;

public class AverageMaxMin {

    public static double calculateAverage(int[] numbers) {
        int sum = 0;
        for (int num : numbers) {
            sum += num;
        }
        return (double) sum / numbers.length;
    }

    public static int findMaximum(int[] numbers) {
        int max = numbers[0];
        for (int num : numbers) {
            if (num > max) {
                max = num;
            }
        }
        return max;
    }

    public static int findMinimum(int[] numbers) {
        int min = numbers[0];
        for (int num : numbers) {
            if (num < min) {
                min = num;
            }
        }
        return min;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of integers: ");
        int n = scanner.nextInt();

        int[] numbers = new int[n];

        for (int i = 0; i < n; i++) {
            System.out.print("Enter integer #" + (i + 1) + ": ");
            numbers[i] = scanner.nextInt();
        }

        double average = calculateAverage(numbers);
        int max = findMaximum(numbers);
        int min = findMinimum(numbers);

        System.out.println("Average: " + average);
        System.out.println("Maximum: " + max);
        System.out.println("Minimum: " + min);

        scanner.close();
    }
}
