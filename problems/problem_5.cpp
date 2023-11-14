float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
    if(operation == '+'){
       
        result = x + y;
    } else if(operation == '*'){
       
        result = x * y;
    }  else if(operation == '-'){
       
        result = x - y;
    } else if((operation == '/') && (y != 0)){
       
        result = x / y;
    } 
    return result;
}
