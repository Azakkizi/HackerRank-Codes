import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        BigInteger a=new BigInteger(scan.next());
        BigInteger b=new BigInteger(scan.next());
        System.out.print(a.add(b) + "\n" + a.multiply(b));
    }
}