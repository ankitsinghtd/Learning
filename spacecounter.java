import java.io.File;
import java.util.Scanner;

public class counter {
    public static void main(String args[]) throws Exception{

        File file = new File("validop.java");
        Scanner scan = new Scanner(file);
        int blankspace = 0;
        int no_of_lines = 0;
        
        while(scan.hasNextLine()){
            String line = scan.nextLine();
            no_of_lines++;
            int size = line.length();
            for(int i = 0 ;i < size ; i++){
                if(Character.isWhitespace(line.charAt(i))){
                    blankspace++;
                }
            }
            
        }
        System.out.println("No of Lines : "+no_of_lines+"\nNo of Spaces : "+blankspace);
    }
}