import java.applet.*;
import java.awt.*;
public class Exp15b extends Applet
{
	public void paint(Graphics g){
		String str=getParameter("msg");
		g.drawString(str,100,100);
	}
}
/*<applet code = "Exp15b.class" width =400 height =400>
  <param name="msg" value="WELCOME!"> 
 </applet>
*/	