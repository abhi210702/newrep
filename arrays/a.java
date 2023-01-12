import java.io.*;

class Student implements Serializable { }
class PartTimeStudent extends Student { }

class Demo
{
  public static void main(String [] arg) 
  {
     try(ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("students.txt")))
       {
	out.writeObject(new PartTimeStudent());  //Line 1
	out.writeObject(new Student());         //Line 2
       }	
     catch(IOException ex) { System.out.println(ex); }
  }
}