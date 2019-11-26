int main() {
    int a = 3;
    int b = a * 2; // shift left by 1. for any power 2**n, shift left by n
    int c = 0x3DDFC5; // this number is not a multiple of 4
    c = c & 0xFFFFFFFC; // zero out evey bit except for the bottom 2
}