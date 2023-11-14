float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    result = (k > i) ? ( k > j ? k : j ) : ( i > j ? i : k );
    return result;
}
