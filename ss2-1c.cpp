#include<stdio.h>

int main() {
    // Kiểu số nguyên (integer)
    int age = 18; 

    // Kiểu số thực (floating-point)
    float height = 1.75; 
    double weight = 50.5; 

    // Kiểu ký tự (character)
    char grade = 'A'; 

    // Kiểu logic (boolean) - thông qua thư viện <stdbool.h>
    #include <stdbool.h> 
    bool isStudent = true; 

    // Kiểu long (số nguyên lớn)
    long population = 8000000; 

      // Kiểu long (số nguyên nhỏ)
    short apple = 2; 

   

    // In các giá trị ra màn hình
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Weight: %.1f kg\n", weight);
    printf("Grade: %c\n", grade);
    printf("Is student: %s\n", isStudent ? "true" : "false");
    printf("Population: %ld\n", population);
    printf("aple: %d\n", apple);
    
    return 0;
}
