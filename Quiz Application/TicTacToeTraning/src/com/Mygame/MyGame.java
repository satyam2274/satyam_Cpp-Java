
package com.Mygame;
import java.awt.BorderLayout;
import java.awt.Color;
import javax.swing.ImageIcon;
import java.util.Date;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import java.awt.Font;
import javax.swing.SwingConstants;
import javax.swing.JButton;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JOptionPane;




public class MyGame extends JFrame implements ActionListener {
    
    JLabel heading,clockLabel;
    Font font = new Font("",Font.BOLD,40);
    JPanel mainPanel;
    
    JButton[] btns = new JButton[9];
    
    
    
    // game instance variable
    
    int gameChances[] = {2,2,2,2,2,2,2,2,2};
    int activePlayer = 0;
    
    int wps[][] ={
        {0,1,2},
        {3,4,5},
        {6,7,8},
        {0,3,6},
        {1,4,7},
        {2,5,8},
        {0,4,8},
        {2,4,6},
           
    };
    
    int winner = 2;
    
    boolean gameOver = false;
    
    MyGame() {
        System.out.println("creating instance of game");
        setTitle("My Tic Tac Toe Game.. satyam");
        setSize(900,900);
        ImageIcon icon = new ImageIcon("src/img/ico.jpg");
        setIconImage(icon.getImage());
        
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        createGUI();
        setVisible(true);
        
    }       
    
    private void createGUI() 
   {
        this.getContentPane().setBackground(Color.decode("#2196f3"));
        
        this.setLayout(new BorderLayout());
        
        // north heading
        
        heading = new JLabel("Tic Tac Toe");
        //heading.setIcon(new ImageIcon("src/img/ico.png.jpg"));
        
        heading.setFont(font);
        heading.setHorizontalAlignment(SwingConstants.CENTER);
        heading.setForeground(Color.WHITE);
        heading.setHorizontalTextPosition(SwingConstants.CENTER);
        heading.setVerticalTextPosition(SwingConstants.BOTTOM);
        
        
        this.add(heading,BorderLayout.NORTH);
        
        // creating object of jlabel for clock
        
        clockLabel = new JLabel("clock");
        clockLabel.setForeground(Color.WHITE);
        clockLabel.setFont(font);
        clockLabel.setHorizontalAlignment(SwingConstants.CENTER);
        this.add(clockLabel,BorderLayout.SOUTH);
       
        Thread t = new Thread() {
            public void run() 
            {
                try
                {
                    
                while(true)
                {
                    String datetime = new Date().toLocaleString();
                    
                    clockLabel.setText(datetime);
                    
                    Thread.sleep(1000);
                }
                
                }catch (Exception e){
                    e.printStackTrace();
                    
                }
            }
        };
        t.start();
        // pannel section
        
        mainPanel = new JPanel();
        
        mainPanel.setLayout(new GridLayout(3 , 3));
        for(int i=1; i<=9; i++){
            JButton btn = new JButton();
            //btn.setIcon(new ImageIcon("src/img/oo.png"));
            btn.setBackground(Color.decode("#90caf9"));
            btn.setFont(font);
            mainPanel.add(btn);
            btns[i-1] = btn;
            btn.addActionListener(this);
            btn.setName(String.valueOf(i-1));
            
                       
        } 
        
        this.add(mainPanel,BorderLayout.CENTER);
                           
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        
        JButton currentButton = (JButton)e.getSource();
        
        String nameStr = currentButton.getName();
      
        
        int name = Integer.parseInt(nameStr.trim());
        
        if(gameOver == true)
        {
            JOptionPane.showMessageDialog(this,"Game already over");
            return;
        }
        
        
        if(gameChances[name]==2)
        {
            if(activePlayer==1)
            {
                currentButton.setIcon(new ImageIcon("src/img/1.png.jpg"));
                
                gameChances[name] = activePlayer;
                
                activePlayer=0;
                
            }else
            {
                currentButton.setIcon(new ImageIcon("src/img/oo.png"));
                
                gameChances[name] = activePlayer;
                
                activePlayer=1;
                
            }
            
            // find the winner
            
            for(int []temp:wps)
            {
                if((gameChances[temp[0]]==gameChances[temp[1]])&&(gameChances[temp[1]]==gameChances[temp[2]])&&gameChances[temp[2]]!=2)
                
                        {
                            winner = gameChances[temp[0]];
                            gameOver = true;
                            JOptionPane.showMessageDialog(null,"player"+winner+"has won the game");
                            int i = JOptionPane.showConfirmDialog(this,"do you want to play more");
                            if(i==0)
                            {
                                this.setVisible(false);
                                new MyGame();
                                
                            }else if(i==1)
                            {
                             System.exit(34234);
                            }else
                            {
                                
                            }
                            System.out.println(i);
                            break;
                        }
            }
            
            // drow logic
            
            int c = 0;                     
            for(int x:gameChances)
            {
                if(x==2)
                {
                    c++;
                    break;
                }
            }
            
            if(c==0&&gameOver==false)
            {
                JOptionPane.showMessageDialog(null,"its draw...");
               int i = JOptionPane.showConfirmDialog(this,"Play more?...");
                if(i == 0) 
                {
                    this.setVisible(false);
                    
                    new MyGame();
                }
                else if(i==1){
                    System.exit(1212);
                }
            else {
                                   
                }
                gameOver = true;
            }
        }else
        {
            
        
            JOptionPane.showMessageDialog(this,"position already occupied...");
            
        }
      
    }
}

    

        
        