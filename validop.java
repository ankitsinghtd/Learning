import java.util.Scanner;
public class validop{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter an operator : ");
        String input = scan.nextLine();

        String match = "+-/*=%<>&|!^?~";
        int i,j;
        boolean flag = false;
        for(i=0; i< match.length(); i++){
            for(j=0; j< input.length(); j++){

                if(input.charAt(j) == match.charAt(i)){
                    flag = true;
                }
                else {
                    flag = false;
                }

            }


        }
        if(flag == false){
            System.out.println(input+" is not valid !");
        }
        else{
            System.out.println(input +" is valid !");
        }
    }
}