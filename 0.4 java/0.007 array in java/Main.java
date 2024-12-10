public class Main{
  public static void main(String[] args){
    int[] numbers0;
    String[] names0;
    int[] numbers1 = {1, 2, 3, 4, 5};
    String[] names1 = {"Alice", "Bob", "Charlie"};
    int[] numbers = new int[5]; // An array of 5 integers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;
    int[] numbers2 = {1, 2, 3, 4, 5};
    System.out.println(numbers2[0]); // Outputs 1
    System.out.println(numbers2[4]); // Outputs 5
    int[] numbers3 = {1, 2, 3, 4, 5};
    System.out.println("The length of the array is: " + numbers3.length);
    int[] numbers4 = {1, 2, 3, 4, 5};
    for (int i = 0; i < numbers4.length; i++) {
        System.out.println("Element at index " + i + ": " + numbers4[i]);
    }
    int[] numbers5 = {1, 2, 3, 4, 5};
    for (int number5 : numbers5) {
        System.out.println("Number: " + number5);
    }
    int[][] matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int[][] matrix0 = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
    };
    System.out.println("Element at row 1, column 2: " + matrix0[1][2]); // Outputs 6
    int[][] matrix1 = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
    };
    for (int i = 0; i < matrix1.length; i++) {
      for (int j = 0; j < matrix1[i].length; j++) {
          System.out.println("Element at row " + i + ", column " + j + ": " + matrix1[i][j]);
      }
    }
    
  }
}