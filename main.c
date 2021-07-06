#include <stdio.h>
#include <string.h>
//my first c code ;)

int global_val;

//functions:
//functions that does not return a value:
void  myFirstCFunction();
void sum (int a,int b) {
    int sum = a + b;
    printf("the sum of your two numbers is: %d \n",sum);
}
//function return a value:
int product (int a, int b){
    return a * b;
}


int localVal(){
    int x = 5;
    return x;
}

int sumArr(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

void double_arr(int arr[], int size){
    for(int  i=0; i<size;i++){
        arr[i] *= 2;
        printf("value multipuled: %d \n", arr[i]);
    }
}


int* multipule_Arr(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]*=2;
    }
    return arr;
}



int main()
{
//    variable descriptions:
    printf("%d \n",50); //int
    printf("%f \n",50.54567); //decimal
    printf("%s \n","tomer"); // string
    printf("%x \n", 21); // hexadecimal
    printf("%c \n",'a'); // character (only single letter in a string)

    printf("%s \n","----------> variables:");

    //variables:
    int age = 1050;
    char character = 'c';
    double big_pi = 52.34565434567654;
    float pi = 52.2;

    //variable logs:
    printf("%d This is Shiraz Age: \n",age);
    printf("%c this is a character\n",character);
    printf("%f this is a small decimal: \n",pi);
    printf("%f this is a double => big decimal \n",big_pi);

    //if statement:
    if(age>50) printf("wow i am so old!!! \n");
    if(age<50) printf("wow i am so young \n");


    //scan of connecting me to the variable by &
    int age1;
    printf("please enter your age here:");
//    scanf("%d",&age1);

    if(age1 == 18 || age1>18 ) {
        printf("you can enter the party my friend");
    }

    if(age1<18){
        printf("you are too young, go home and cry to your mom stupid baby \n");
    }

    int a = 50;
    int b =70;
    int c;

    c = (a>b) ? a : b;

    printf("%d \n",c);
    
    
    int mark = 99;

    switch (mark) {
        case 90:
        case 99:
        case 92:
            printf("gooooooooooooooooooooooooooooooooooood!!!!!!!!! \n");
            break;
        case 50:
            printf("fgh");
            break;
        case 80:
            printf("not bad");
            break;
        default:
            printf("no one of them is correct");
        
    }


    //while loop:
    int num = 10;
//    while (num>0)
//    {
//        printf("the value is: %d \n",num);
//        num--;
//    }

    for(int i=0;i<num;i++)
    {
        printf("the value of i is: %d \n", i);
    }



    myFirstCFunction();


//    int x,y;
//    //first sum
//    printf("the first number is: %d \n",x);
//    scanf("%d",&x);
//
//    //second sum
//    printf("thw second sum is: %d \n",y);
//    scanf("%d",&y);

   sum(50,20);


   int prod = product(10,10);
    printf("the multipule of 2 products is: %d \n",prod);

    printf("The global variable is: %d \n", global_val);
    printf("the local variable rerurned from a function is: %d \n",localVal());

    //array:

    printf("----------> Arrays!!! \n");

    int myFirstArray [3] = {0,1,2};

    int firstVAL = myFirstArray[0];
    int secVal = myFirstArray[1];
    int thirdVal = myFirstArray[2];

    printf("The first index value in the array is: %d \n",firstVAL);
    printf("The second index value in the array is: %d \n",secVal);
    printf("The third index value in the array is: %d \n",thirdVal);

    //print array values:
    for(int i=0; i<=2;i++){
        printf("the values in the array: %d \n",myFirstArray[i]);
    }

    char shiraz [5] = {'s','h','i','r','z'};

    printf("get the first character of shiraz: %c \n", shiraz[0]);

    for (int i = 0; i < strlen(shiraz); i++) {
        printf("the full name is: %c \n",shiraz[i]);
    }

          //let arr = [[0,1,2] , [3,4,5];
          int doubleArr [2] [3]  = {
            {0,1,2},
            {3,4,5}
         };

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("my arr of number [%d][%d]=%d \n",i,j, doubleArr[i][j]);
        }
    };

    int array [6] = {1,2,3,4,5,6};

     int result = sumArr(array,6);
    printf("the result is: %d \n",result);


    //3 rows array:
    int big_arr [3] [3] = {
            {0,1,2},
            {3,4,5},
            {7,8,9}
    };

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("array indexex value: [%d][%d] = %d \n",i,j,big_arr[i][j]);
        }
    }


    int arr12 [3] = {1,2,3};
    int size = 3;
    double_arr(arr12,size);



    //pointers: pointer is a variable whose value is the address of another variable.
    int val = 30;
    int *pointer_val = &val;


    printf("address of val = %x \n",&val);
    printf("the pointer value of val variable is: %x \n",pointer_val);


    int arr123 [3] = {1,2,3};
    int *pointer_array[3];

    for(int i=0;i<3;i++){
        pointer_array[i] = &arr123[i];
        printf("the pointers %x \n:",pointer_array[i]);
    }

    for(int i=0;i<3;i++){
        printf("and the value: [%d] = %d \n",i,*pointer_array[i]);
    }


    char my_string[6] = {'h','e','l','l','o','\a'};
    char other_string_pattern [] = "hello";

    printf("the string value is: %s \n",my_string);
    printf("the string value is: %s \n",other_string_pattern);

    char str1[12] = "tomer";
    char str2[12] = "alayof";
    char str3[5];

    strcpy(str3,str1); // copy to parameter 1 the value of parameter 2;
    strcat(str1,str2); // concat 2 variables which assign into the function;
    int str_1_length =  strlen(str1); // give us the length of the required string;

    printf("strCopy: %s \n",str3);
    printf("strcat: %s \n",str1);
    printf("strlen: %d \n", str_1_length);



    int arrToMultipule [3] = {1,2,3};
    int size1212 = 3;
    int result [3] = {multipule_Arr(arrToMultipule,size1212)};






    return 0;
}

//void is a function that doesnt return any value.
void  myFirstCFunction() {
    printf("yeaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa functionnnnnnn!!!! \n");

}