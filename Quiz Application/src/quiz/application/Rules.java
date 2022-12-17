
package quiz.application;

import javax.swing.*;
import java.awt.*;
import java.awt.event.* ;





public class Rules extends JFrame implements ActionListener {
    
    String name;
    JButton start,back;
    
    
    Rules(String name) {
        
        this.name = name;
        getContentPane().setBackground(Color.WHITE);
        setLayout(null);
        
        JLabel heading = new JLabel("Welcome "+ name + " to Technical Quiz");
        heading.setBounds(50,20,700,30);
        heading.setFont(new Font("Viner Hand ITC",Font.BOLD,28));
        heading.setForeground(new Color(30,144,254));
        add(heading);
        
         JLabel rules = new JLabel();
         rules .setBounds(20,90,700,350);
         rules .setFont(new Font("Tahoma",Font.PLAIN,16));
         
         rules.setText(
            "<html>"+ 
                "1. In this round each team will be asked 10 questions one after another." + "<br><br>" +
                "2.On the immediate completion of a question, each team gets 15 seconds\n" +
                  "to answer it." + "<br><br>" + 
                "3. If a team is not able to answer a question, they can pass it for the next\n" +
                  "question." + "<br><br>" +
                "4. There is no team discussion in this round." + "<br><br>" +
                "5. 10 points is awarded for the correct answer." + "<br><br>" +
                "6. No negative points for the wrong answe.r" + "<br><br>" +
                "7. Once a question is passed the team cannot give an answer later." + "<br><br>" +
                "8.No buzzer is used in this round and you can 1 times 50-50 lifeline." + "<br><br>" +
            "<html>"
         );
         
        
        add( rules );
        
        back = new JButton("Back");
        back.setBounds(250,500,100,30);
        back.setBackground(new Color(30,144,254));
        back.setForeground(Color.WHITE);
        back.addActionListener(this);
        add(back);
        
      
        start = new JButton("Start");
        start .setBounds(400,500,100,30);
        start .setBackground(new Color(30,144,254));
        start .setForeground(Color.WHITE);
        start .addActionListener(this);
        add(start );
        
        setSize(800,650);
        setLocation(350,100);
        setVisible(true);
        
    }
    
    public void actionPerformed(ActionEvent ae){
    
        if(ae.getSource() == start){
            setVisible(false);
            new Quiz(name);
            
        }else {
    setVisible(false);
    new Login();
        }
}
    
    
    public static void main(String[] args) {
        
        new Rules("User");
        
        
    }
    
}
