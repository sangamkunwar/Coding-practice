public class Main{
  public static void main(String[] args){
    int age = 18;
    if (age >= 18) {
        System.out.println("You are an adult.");
    }
    age = 16;
    if (age >= 18) {
        System.out.println("You are an adult.");
    } else {
        System.out.println("You are not an adult.");
    }
    int score = 85;
    if (score >= 90) {
        System.out.println("Grade: A");
    } else if (score >= 80) {
        System.out.println("Grade: B");
    } else if (score >= 70) {
        System.out.println("Grade: C");
    } else {
        System.out.println("Grade: F");
    }
    int day = 3;
    switch (day) {
        case 1:
            System.out.println("Monday");
            break;
        case 2:
            System.out.println("Tuesday");
            break;
        case 3:
            System.out.println("Wednesday");
            break;
        // other cases
        default:
            System.out.println("Invalid day");
    }
    for (int i = 0; i < 5; i++) {
        System.out.println("i: " + i);
    }
    int i = 0;
    while (i < 5) {
        System.out.println("i: " + i);
        i++;
    }
    i = 0;
    do {
        System.out.println("i: " + i);
        i++;
    } while (i < 5);
    int[] numbers = {1, 2, 3, 4, 5};
    for (int number : numbers) {
        System.out.println("Number: " + number);
    }
  }
}