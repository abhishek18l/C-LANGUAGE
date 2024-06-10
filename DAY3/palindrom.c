bool isPalindrome(int x) {
    int bx = x;
    if (x < 0 ){
        return false;
    }
    long long int R = 0L;
    while (bx > 0L){
        R = ( R * 10L) + ( bx % 10L);
        bx /= 10L;
    }
    return (((long long int )x)==R);
}