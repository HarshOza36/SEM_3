import java.util.*;
class threadA extends Thread{
	public void run(){
		char i;
		for(i='A';i<'F';i++){System.out.println(i);}
		try{sleep(700);}
		catch(Exception e){}
	}
}
class threadB extends Thread{
	public void run(){
		for(int i=1;i<6;i++){System.out.println(i);}
		try{sleep(700);}
		catch(Exception e){}
	}
}
class Exp14{
	public static void main(String args[]){
	threadA a= new threadA();
	threadB b= new threadB();
	a.start();
	b.start();
}
}