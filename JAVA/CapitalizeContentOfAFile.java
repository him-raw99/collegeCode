import java.io.*;
public class Main{
   public static void main(String[] args){
      File fileToBeModified = new File("C:/Users/Kabir/Desktop/Work/file2.txt");
      String oldContent = "";
      BufferedReader reader = null;
      FileWriter writer = null;
      try{
         reader = new BufferedReader(new FileReader(fileToBeModified));
         String line = reader.readLine(); //Reading the content of input text file
         while (line != null) {
            oldContent = oldContent + line + System.lineSeparator();
            line = reader.readLine();
         }
          
         //printing the original content
         System.out.println("Original Content of the file: " + oldContent);

         //Replacing lowerCase text to upperCase text
         String newContent = oldContent.toUpperCase();

         //Rewriting the input text file with newContent
         writer = new FileWriter(fileToBeModified);
         riter.write(newContent); //Printing the content of modified file 

         //printing the content of the modified file
         System.out.println("New content of the file: " + newContent);
      }
      catch (IOException e){
         e.printStackTrace();
      }
      finally{
         try{

            //Closing the resources
            reader.close();
            writer.close();
         } 
         catch (IOException e) {
            e.printStackTrace();
         }
      }
   }
}