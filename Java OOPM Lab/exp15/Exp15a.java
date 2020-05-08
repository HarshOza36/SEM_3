import java.applet.*;
import java.awt.*;
public class Exp15a extends Applet
{
	public void paint(Graphics g){
		g.setColor(Color.red);
		g.drawOval(60,60,200,200);
		g.drawOval(110,90,50,75);
		g.drawOval(170,90,50,75);
		g.drawOval(155,155,20,20);
		g.fillOval(120,90,30,35);
		g.fillOval(180,90,30,35);
		
		g.drawArc(110, 150, 95, 95, 0, -180);
		g.fillArc(110, 150, 95, 95, 0, -180);
	}
}
/*<applet code = "Exp15a.class" width =400 height =400>
  </applet>
*/		