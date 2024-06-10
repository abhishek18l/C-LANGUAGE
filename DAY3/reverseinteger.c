int reverse(int x){
    int R = 0 ;
    int isnegative = (x < 0);
    if (x < 0 ){
        x = -x;
    }
    while (x > 0){
        R = (R * 10) + (x % 10 );
        x /= 10;
    }
    if (isnegative){
        R = - R;
    }
    return R;
}
