#ifndef CAR_H
#define CAR_H

float theta = 0.0;
float angle = 0.0;
float _angle = 0.0;

void drawMazdaCar(float r,float g,float b)
{
    glPushMatrix();
    glPushMatrix();
    glBegin(GL_QUADS);                
    

    glColor3f(r,g,b);
    glVertex3f( 0.2, 0.3,0.6);
    glVertex3f(0.6, 0.5,0.6);
    glVertex3f(0.6, 0.5,0.2);
    glVertex3f( 0.2,0.3,0.2);


    glVertex3f( 0.2,0.2,0.6);
    glVertex3f(0.6,0.2,0.6);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f( 0.2,0.2,0.2);

    
    glVertex3f( 0.2,0.2,0.6);
    glVertex3f(0.2, 0.3,0.6);
    glVertex3f(0.2,0.3,0.2);
    glVertex3f( 0.2,0.2,0.2);


    glVertex3f(0.6,0.2,0.6);
    glVertex3f(0.6,0.5,0.6);
    glVertex3f(0.6,0.5,0.2);
    glVertex3f( 0.6,0.2,0.2);


    glVertex3f(0.2,0.2,0.6);
    glVertex3f(0.6,0.2,0.6);
    glVertex3f(0.6,0.5,0.6);
    glVertex3f(0.2,0.3,0.6);


    glVertex3f(0.2,0.2,0.2);
    glVertex3f( 0.6,0.2,0.2);
    glVertex3f( 0.6,0.5,0.2);
    glVertex3f( 0.2,0.3,0.2);

    glColor3f(1,1,1);
    glVertex3f(0.9,0.65,0.6);
    glVertex3f(0.9,0.65,0.2);
    glVertex3f(1.7,0.65,0.2);        
    glVertex3f(1.7,0.65,0.6);



    glVertex3f(2.1,0.4,0.6);
    glVertex3f(2.1,0.4,0.2);
    glVertex3f(1.7,0.65,0.2);       
    glVertex3f(1.7,0.65,0.6);


 

    glVertex3f(2.1,0.4,0.4);
    glVertex3f(2.1,0.4,0.2);
    glVertex3f(2.1,0.2,0.4);
    glVertex3f(2.1,0.2,0.2);



    glColor3f(r,g,b);            
    glVertex3f( 1.8, 0.5,0.6);
    glVertex3f(1.8, 0.5,0.2);
    glVertex3f(2.1, 0.4, 0.2);
    glVertex3f(2.1,0.4,0.6);

  
    glVertex3f( 2.1,0.2,0.6);
    glVertex3f(2.1,0.2,0.2);
    glVertex3f(1.8,0.2,0.6);
    glVertex3f( 1.8,0.2,0.6);

  


   
    glVertex3f(1.8,0.2,0.2);
    glVertex3f(1.8,0.5,0.2);
    glVertex3f(2.1,0.4,0.2);
    glVertex3f(2.1,0.2,0.2);

   
    glVertex3f(1.8,0.2,0.6);
    glVertex3f(1.8,0.5,0.6);
    glVertex3f(2.1,0.4,0.6);
    glVertex3f(2.1,0.2,0.6);

    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f(0.6, 0.2,0.6);
    glVertex3f(1.8, 0.2, 0.6);
    glVertex3f(1.8,0.5,0.6);

  
    glVertex3f( 0.6,0.2,0.6);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f(1.8,0.2,0.2);
    glVertex3f( 1.8,0.2,0.6);

   
    glVertex3f(0.6,0.5,0.2);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f(1.8,0.2,0.2);
    glVertex3f(1.8,0.5,0.2);


    glBegin(GL_QUADS);

    
    glColor3f(0.0,0.0,0.0);
    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f(0.6, 0.5,0.2);       
    glVertex3f(0.9, 0.65, 0.2);
    glVertex3f( 0.9,0.65,0.6);


   
    glColor3f(r,g,b);
    glVertex3f( 1.7, 0.5,0.6);
    glVertex3f(1.7, 0.5,0.2);    
    glVertex3f(0.7, 0.5, 0.2);
    glVertex3f( 0.7,0.5,0.6);


    glEnd();

  

    glColor3f(0.7,0.7,0.7);
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.62);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.18);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(1.7,0.2,0.18);
        glVertex3f(1.7+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(1.7,0.2,0.62);
        glVertex3f(1.7+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();




    glTranslatef(0.6,0.2,0.6);
    glColor3f(0,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.030,0.07,10,25);
    glPopMatrix();


    glTranslatef(0,0,-0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.030,0.07,10,25);
    glPopMatrix();


    glTranslatef(1.1,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.030,0.07,10,25);
    glPopMatrix();


    glTranslatef(0,0,0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.030,0.07,10,25);
    glPopMatrix();


    glPopMatrix();

    glPopMatrix();
    glPopMatrix();


}



void drawFerrariCar(float r,float g,float b)
{
    glPushMatrix();
    glPushMatrix();
    glBegin(GL_QUADS);              

  
    glColor3f(r,g,b);
    glVertex3f( 0.2, 0.4,0.6);
    glVertex3f(0.6, 0.5,0.6);
    glVertex3f(0.6, 0.5,0.2);
    glVertex3f( 0.2,0.4,0.2);

 
    glVertex3f( 0.2,0.2,0.6);
    glVertex3f(0.6,0.2,0.6);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f( 0.2,0.2,0.2);

   
    glVertex3f( 0.2,0.2,0.6);
    glVertex3f(0.2, 0.4,0.6);
    glVertex3f(0.2,0.4,0.2);
    glVertex3f( 0.2,0.2,0.2);


    glVertex3f(0.6,0.2,0.6);
    glVertex3f(0.6,0.5,0.6);
    glVertex3f(0.6,0.5,0.2);
    glVertex3f( 0.6,0.2,0.2);

  
    glVertex3f(0.2,0.2,0.6);
    glVertex3f(0.6,0.2,0.6);
    glVertex3f(0.6,0.5,0.6);
    glVertex3f(0.2,0.4,0.6);

    
    glVertex3f(0.2,0.2,0.2);
    glVertex3f( 0.6,0.2,0.2);
    glVertex3f( 0.6,0.5,0.2);
    glVertex3f( 0.2,0.4,0.2);

    glColor3f(r,g,b);          
    glVertex3f( 1.8, 0.5,0.6);
    glVertex3f(1.8, 0.5,0.2);
    glVertex3f(2.1, 0.4, 0.2);
    glVertex3f(2.1,0.4,0.6);

  
    glVertex3f( 2.1,0.2,0.6);
    glVertex3f(2.1,0.2,0.2);
    glVertex3f(1.8,0.2,0.6);
    glVertex3f( 1.8,0.2,0.6);

   
    glVertex3f(2.1,0.4,0.6);
    glVertex3f(2.1,0.4,0.2);
    glVertex3f(2.1,0.2,0.2);
    glVertex3f(2.1,0.2,0.6);

   
    glVertex3f(1.8,0.2,0.2);
    glVertex3f(1.8,0.5,0.2);
    glVertex3f(2.1,0.4,0.2);
    glVertex3f(2.1,0.2,0.2);

   
    glVertex3f(1.8,0.2,0.6);
    glVertex3f(1.8,0.5,0.6);
    glVertex3f(2.1,0.4,0.6);
    glVertex3f(2.1,0.2,0.6);

    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f(0.6, 0.2,0.6);
    glVertex3f(1.8, 0.2, 0.6);
    glVertex3f(1.8,0.5,0.6);

   
    glVertex3f( 0.6,0.2,0.6);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f(1.8,0.2,0.2);
    glVertex3f( 1.8,0.2,0.6);

    
    glVertex3f(0.6,0.5,0.2);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f(1.8,0.2,0.2);
    glVertex3f(1.8,0.5,0.2);

    glBegin(GL_QUADS);

   
    glColor3f(1.0,1.0,1.0);
    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f(0.6, 0.5,0.2);        
    glVertex3f(0.9, 0.65, 0.2);
    glVertex3f( 0.9,0.65,0.6);


    
    glColor3f(r,g,b);
    glVertex3f( 1.7, 0.5,0.6);
    glVertex3f(1.7, 0.5,0.2);    
    glVertex3f(0.7, 0.5, 0.2);
    glVertex3f( 0.7,0.5,0.6);


    glEnd();


    glBegin(GL_TRIANGLES);               

    
    glColor3f(0.0,0.0,0.0);
    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f( 0.75,0.57,0.6);     
    glVertex3f(0.75,0.5,0.6);

    glVertex3f( 0.6, 0.5,0.2);
    glVertex3f( 0.75,0.57,0.2);       
    glVertex3f(0.75,0.5,0.2);





    glEnd();

   

    glColor3f(0.7,0.7,0.7);
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.62);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.18);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(1.7,0.2,0.18);
        glVertex3f(1.7+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(1.7,0.2,0.62);
        glVertex3f(1.7+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();




    glTranslatef(0.6,0.2,0.6);
    glColor3f(0,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.025,0.07,10,25);
    glPopMatrix();


    glTranslatef(0,0,-0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.025,0.07,10,25);
    glPopMatrix();


    glTranslatef(1.1,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.025,0.07,10,25);
    glPopMatrix();


    glTranslatef(0,0,0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.025,0.07,10,25);
    glPopMatrix();


    glPopMatrix();

    glPopMatrix();
    glPopMatrix();
}



void drawPajeroCar(float r,float g,float b)
{
    glPushMatrix();
    glBegin(GL_QUADS);               

 
    glColor3f(r,g,b);
    glVertex3f(0.6,0.2,0.6);
    glVertex3f(0.6,0.5,0.6);
    glVertex3f(0.6,0.5,0.2);
    glVertex3f( 0.6,0.2,0.2);

    glVertex3f(0.7,0.65,0.6);
    glVertex3f(0.7,0.65,0.2);
    glVertex3f(1.7,0.65,0.2);       
    glVertex3f(1.7,0.65,0.6);

    glColor3f(r,g,b);        
    glVertex3f( 1.8, 0.5,0.6);
    glVertex3f(1.8, 0.5,0.2);
    glVertex3f(2.1, 0.4, 0.2);
    glVertex3f(2.1,0.4,0.6);


    glVertex3f( 2.1,0.2,0.6);
    glVertex3f(2.1,0.2,0.2);
    glVertex3f(1.8,0.2,0.6);
    glVertex3f( 1.8,0.2,0.6);



    glVertex3f(2.1,0.4,0.6);
    glVertex3f(2.1,0.4,0.2);
    glVertex3f(2.1,0.2,0.2);
    glVertex3f(2.1,0.2,0.6);


    glVertex3f(1.8,0.2,0.2);
    glVertex3f(1.8,0.5,0.2);
    glVertex3f(2.1,0.4,0.2);
    glVertex3f(2.1,0.2,0.2);


    glVertex3f(1.8,0.2,0.6);
    glVertex3f(1.8,0.5,0.6);
    glVertex3f(2.1,0.4,0.6);
    glVertex3f(2.1,0.2,0.6);

    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f(0.6, 0.2,0.6);
    glVertex3f(1.8, 0.2, 0.6);
    glVertex3f(1.8,0.5,0.6);


    glVertex3f( 0.6,0.2,0.6);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f(1.8,0.2,0.2);
    glVertex3f( 1.8,0.2,0.6);


    glVertex3f(0.6,0.5,0.2);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f(1.8,0.2,0.2);
    glVertex3f(1.8,0.5,0.2);

    glColor3f(1.0,1.0,1.0);
    glVertex3f( 0.77, 0.63,0.2);
    glVertex3f(0.75, 0.5,0.2);       
    glVertex3f(1.2, 0.5, 0.2);
    glVertex3f( 1.22,0.63,0.2);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(1.27,0.63,.2);
    glVertex3f(1.25,0.5,0.2);        
    glVertex3f(1.65,0.5,0.2);
    glVertex3f(1.67,0.63,0.2);

    glColor3f(r,g,b);
    glVertex3f(0.7,0.65,0.2);
    glVertex3f(0.7,0.5,.2);     
    glVertex3f(0.75,0.5,0.2);
    glVertex3f(0.77,0.65,0.2);

    glVertex3f(1.2,0.65,0.2);
    glVertex3f(1.2,0.5,.2);       
    glVertex3f(1.25,0.5,0.2);
    glVertex3f(1.27,0.65,0.2);

    glVertex3f(1.65,0.65,0.2);
    glVertex3f(1.65,0.5,.2);    
    glVertex3f(1.7,0.5,0.2);
    glVertex3f(1.7,0.65,0.2);

    glVertex3f( 0.75, 0.65,0.2);
    glVertex3f(0.75, 0.63,0.2);       
    glVertex3f(1.7, 0.63, 0.2);
    glVertex3f( 1.7,0.65,0.2);

    glVertex3f( 0.75, 0.65,0.6);
    glVertex3f(0.75, 0.63,0.6);       
    glVertex3f(1.7, 0.63, 0.6);
    glVertex3f( 1.7,0.65,0.6);

    glColor3f(1.0,1.0,1.0);
    glVertex3f( 0.77, 0.63,0.6);
    glVertex3f(0.75, 0.5,0.6);       
    glVertex3f(1.2, 0.5, 0.6);
    glVertex3f( 1.22,0.63,0.6);

    glVertex3f(1.27,0.63,.6);
    glVertex3f(1.25,0.5,0.6);        
    glVertex3f(1.65,0.5,0.6);
    glVertex3f(1.67,0.63,0.6);

    glColor3f(r,g,b);
    glVertex3f(0.7,0.65,0.6);
    glVertex3f(0.7,0.5,.6);      
    glVertex3f(0.75,0.5,0.6);
    glVertex3f(0.77,0.65,0.6);

    glVertex3f(1.2,0.65,0.6);
    glVertex3f(1.2,0.5,.6);      
    glVertex3f(1.25,0.5,0.6);
    glVertex3f(1.27,0.65,0.6);

    glVertex3f(1.65,0.65,0.6);
    glVertex3f(1.65,0.5,.6);
    glVertex3f(1.7,0.5,0.6);
    glVertex3f(1.7,0.65,0.6);
    glEnd();


    glBegin(GL_QUADS);

  
    glColor3f(1.0,1.0,1.0);
    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f(0.6, 0.5,0.2);       
    glVertex3f(0.7, 0.65, 0.2);
    glVertex3f( 0.7,0.65,0.6);

    glVertex3f(1.7,0.65,.6);
    glVertex3f(1.7,0.65,0.2);        
    glVertex3f(1.8,0.5,0.2);
    glVertex3f(1.8,0.5,0.6);
    glEnd();


    glBegin(GL_TRIANGLES);               


    glColor3f(0.0,0.0,0.0);
    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f( 0.7,0.65,0.6);       
    glVertex3f(0.7,0.5,0.6);

    glVertex3f( 0.6, 0.5,0.2);
    glVertex3f( 0.7,0.65,0.2);       
    glVertex3f(0.7,0.5,0.2);

    glVertex3f( 1.7, 0.65,0.2);
    glVertex3f( 1.8,0.5,0.2);      
    glVertex3f( 1.7,0.5,0.2);

    glVertex3f( 1.7, 0.65,0.6);
    glVertex3f( 1.8,0.5,0.6);      
    glVertex3f(1.7,0.5,0.6);

    glEnd();



    glPushMatrix();
    glTranslatef(0.23,0.04,0.0);
    glColor3f(0.7,0.7,0.7);
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.62);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.18);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(1.7,0.2,0.18);
        glVertex3f(1.7+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(1.7,0.2,0.62);
        glVertex3f(1.7+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();




    glTranslatef(0.6,0.2,0.6);
    glColor3f(0,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.045,0.10,10,25);
    glPopMatrix();


    glTranslatef(0,0,-0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.045,0.10,10,25);
    glPopMatrix();


    glTranslatef(1.1,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.035,0.10,10,25);
    glPopMatrix();


    glTranslatef(0,0,0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.035,0.10,10,25);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

  
    glPushMatrix();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_STRIP);

    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.55,0.35,0.4);
        glVertex3f(0.55,0.35+(0.08*(sin(((theta+angle)*3.14)/180))),0.4+(0.08*(cos(((theta+angle)*3.14)/180))));
    }
    glEnd();
    glPopMatrix();

    glColor3f(0,0,0);
    glTranslatef(0.55,0.35,0.4);
    glPushMatrix();
    glRotatef(-90,0.0,1.0,0.0);
    glutSolidTorus(0.030,0.09,10,25);



    glPopMatrix();

    glPopMatrix();
}

void drawSedanCar(float r,float g,float b)
{
    glPushMatrix();
    glPushMatrix();
    glBegin(GL_QUADS);               


    glColor3f(r,g,b);
    glVertex3f( 0.3, 0.3,0.6);
    glVertex3f(0.6, 0.5,0.6);
    glVertex3f(0.6, 0.5,0.2);
    glVertex3f( 0.3,0.3,0.2);


    glVertex3f( 0.3,0.2,0.6);
    glVertex3f(0.6,0.2,0.6);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f( 0.3,0.2,0.2);


    glVertex3f( 0.3,0.2,0.6);
    glVertex3f(0.3, 0.3,0.6);
    glVertex3f(0.3,0.3,0.2);
    glVertex3f( 0.3,0.2,0.2);


    glVertex3f(0.6,0.2,0.6);
    glVertex3f(0.6,0.5,0.6);
    glVertex3f(0.6,0.5,0.2);
    glVertex3f( 0.6,0.2,0.2);


    glVertex3f(0.3,0.2,0.6);
    glVertex3f(0.6,0.2,0.6);
    glVertex3f(0.6,0.5,0.6);
    glVertex3f(0.3,0.3,0.6);


    glVertex3f(0.3,0.2,0.2);
    glVertex3f( 0.6,0.2,0.2);
    glVertex3f( 0.6,0.5,0.2);
    glVertex3f( 0.3,0.3,0.2);

    glVertex3f(0.7,0.65,0.6);
    glVertex3f(0.7,0.65,0.2);
    glVertex3f(1.7,0.65,0.2);       
    glVertex3f(1.7,0.65,0.6);

    glColor3f(r,g,b);          
    glVertex3f( 1.8, 0.5,0.6);
    glVertex3f(1.8, 0.5,0.2);
    glVertex3f(2.2, 0.5, 0.2);
    glVertex3f(2.2,0.5,0.6);


    glVertex3f( 2.2,0.2,0.6);
    glVertex3f(2.2,0.2,0.2);
    glVertex3f(1.8,0.2,0.6);
    glVertex3f( 1.8,0.2,0.6);


    glVertex3f(2.2,0.5,0.6);
    glVertex3f(2.2,0.5,0.2);
    glVertex3f(2.2,0.2,0.2);
    glVertex3f(2.2,0.2,0.6);

   
    glVertex3f(1.8,0.2,0.2);
    glVertex3f(1.8,0.5,0.2);
    glVertex3f(2.2,0.5,0.2);
    glVertex3f(2.2,0.2,0.2);

   
    glVertex3f(1.8,0.2,0.6);
    glVertex3f(1.8,0.5,0.6);
    glVertex3f(2.2,0.5,0.6);
    glVertex3f(2.2,0.2,0.6);

    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f(0.6, 0.2,0.6);
    glVertex3f(1.8, 0.2, 0.6);
    glVertex3f(1.8,0.5,0.6);

  
    glVertex3f( 0.6,0.2,0.6);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f(1.8,0.2,0.2);
    glVertex3f( 1.8,0.2,0.6);

  
    glVertex3f(0.6,0.5,0.2);
    glVertex3f(0.6,0.2,0.2);
    glVertex3f(1.8,0.2,0.2);
    glVertex3f(1.8,0.5,0.2);

    glColor3f(1.0,1.0,1.0);
    glVertex3f( 0.77, 0.63,0.2);
    glVertex3f(0.75, 0.5,0.2);       
    glVertex3f(1.2, 0.5, 0.2);
    glVertex3f( 1.22,0.63,0.2);

    glVertex3f(1.27,0.63,.2);
    glVertex3f(1.25,0.5,0.2);       
    glVertex3f(1.65,0.5,0.2);
    glVertex3f(1.67,0.63,0.2);

    glColor3f(r,g,b);
    glVertex3f(0.7,0.65,0.2);
    glVertex3f(0.7,0.5,.2);       
    glVertex3f(0.75,0.5,0.2);
    glVertex3f(0.77,0.65,0.2);

    glVertex3f(1.2,0.65,0.2);
    glVertex3f(1.2,0.5,.2);       
    glVertex3f(1.25,0.5,0.2);
    glVertex3f(1.27,0.65,0.2);

    glVertex3f(1.65,0.65,0.2);
    glVertex3f(1.65,0.5,.2);    
    glVertex3f(1.7,0.5,0.2);
    glVertex3f(1.7,0.65,0.2);

    glVertex3f( 0.75, 0.65,0.2);
    glVertex3f(0.75, 0.63,0.2);     
    glVertex3f(1.7, 0.63, 0.2);
    glVertex3f( 1.7,0.65,0.2);

    glVertex3f( 0.75, 0.65,0.6);
    glVertex3f(0.75, 0.63,0.6);      
    glVertex3f(1.7, 0.63, 0.6);
    glVertex3f( 1.7,0.65,0.6);

    glColor3f(1.0,1.0,1.0);
    glVertex3f( 0.77, 0.63,0.6);
    glVertex3f(0.75, 0.5,0.6);       
    glVertex3f(1.2, 0.5, 0.6);
    glVertex3f( 1.22,0.63,0.6);

    glVertex3f(1.27,0.63,.6);
    glVertex3f(1.25,0.5,0.6);      
    glVertex3f(1.65,0.5,0.6);
    glVertex3f(1.67,0.63,0.6);

    glColor3f(r,g,b);
    glVertex3f(0.7,0.65,0.6);
    glVertex3f(0.7,0.5,.6);      
    glVertex3f(0.75,0.5,0.6);
    glVertex3f(0.77,0.65,0.6);

    glVertex3f(1.2,0.65,0.6);
    glVertex3f(1.2,0.5,.6);       
    glVertex3f(1.25,0.5,0.6);
    glVertex3f(1.27,0.65,0.6);

    glVertex3f(1.65,0.65,0.6);
    glVertex3f(1.65,0.5,.6);
    glVertex3f(1.7,0.5,0.6);
    glVertex3f(1.7,0.65,0.6);
    glEnd();



    glBegin(GL_QUADS);


    glColor3f(1.0,1.0,1.0);
    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f(0.6, 0.5,0.2);        
    glVertex3f(0.7, 0.65, 0.2);
    glVertex3f( 0.7,0.65,0.6);

    glVertex3f(1.7,0.65,.6);
    glVertex3f(1.7,0.65,0.2);       
    glVertex3f(1.8,0.5,0.2);
    glVertex3f(1.8,0.5,0.6);
    glEnd();


    glBegin(GL_TRIANGLES);             

 
    glColor3f(0.0,0.0,0.0);
    glVertex3f( 0.6, 0.5,0.6);
    glVertex3f( 0.7,0.65,0.6);    
    glVertex3f(0.7,0.5,0.6);

    glVertex3f( 0.6, 0.5,0.2);
    glVertex3f( 0.7,0.65,0.2);       
    glVertex3f(0.7,0.5,0.2);

    glVertex3f( 1.7, 0.65,0.2);
    glVertex3f( 1.8,0.5,0.2);      
    glVertex3f( 1.7,0.5,0.2);

    glVertex3f( 1.7, 0.65,0.6);
    glVertex3f( 1.8,0.5,0.6);     
    glVertex3f(1.7,0.5,0.6);

    glEnd();



    glColor3f(0.7,0.7,0.7);
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.62);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.18);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(2.0,0.2,0.18);
        glVertex3f(2.0+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(2.0,0.2,0.62);
        glVertex3f(2.0+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();




    glTranslatef(0.6,0.2,0.6);
    glColor3f(0,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();


    glTranslatef(0,0,-0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();


    glTranslatef(1.4,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();


    glTranslatef(0,0,0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();

    glTranslatef(0.2,0.15,-0.10);
    glPushMatrix();
    glColor3f(1,1,1);
    glRotatef(90,0.0,1.0,0.0);
    glutSolidTorus(0.015,0.05,10,25);
    glPopMatrix();

    glTranslatef(0,0,-0.20);
    glPushMatrix();
    glColor3f(1,1,1);
    glRotatef(90,0.0,1.0,0.0);
    glutSolidTorus(0.015,0.05,10,25);
    glPopMatrix();

    glPopMatrix();

    glPopMatrix();
    glPopMatrix();
}



void drawVolvoBus(float r,float g,float b)
{
    glPushMatrix();
    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(r,g,b);


    glVertex3f(0.0,0.2,0.6);
    glVertex3f(0.0,0.7,0.6);
    glVertex3f(2.7,0.7,0.6);
    glVertex3f(2.7,0.2,0.6);
    glEnd();

    glBegin(GL_QUADS);
     
    glVertex3f(0.0,0.2,0.2);
    glVertex3f(0.0,0.7,0.2);
    glVertex3f(2.7,0.7,0.2);
    glVertex3f(2.7,0.2,0.2);
    glEnd();


    glColor3f(r,g-0.2,b);
    glBegin(GL_QUADS);

    glVertex3f(0.0,0.2,0.6);
    glVertex3f(0.0,0.7,0.6);
    glVertex3f(0.0,0.7,0.2);
    glVertex3f(0.0,0.2,0.2);
    glEnd();

   
    glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex3f(-0.01,0.45,0.58);
    glVertex3f(-0.01,0.65,0.58);
    glVertex3f(-0.01,0.65,0.22);
    glVertex3f(-0.01,0.45,0.22);
    glEnd();


  
    glBegin(GL_QUADS);
     glColor3f(r,g-0.2,b);
    glVertex3f(2.7,0.2,0.6);
    glVertex3f(2.7,0.7,0.6);
    glVertex3f(2.7,0.7,0.2);
    glVertex3f(2.7,0.2,0.2);
    glEnd();
    
    
   
    glBegin(GL_QUADS);
     glColor3f(1,1,1);
    glVertex3f(2.71,0.4,0.58);
    glVertex3f(2.71,0.65,0.58);
    glVertex3f(2.71,0.65,0.22);
    glVertex3f(2.71,0.4,0.22);
    glEnd();
   
    glColor3f(1,0,0);
    glBegin(GL_QUADS);

    glVertex3f(2.7,0.7,0.6);
    glVertex3f(2.7,0.7,0.2);
    glVertex3f(0.0,0.7,0.2);
    glVertex3f(0.0,0.7,0.6);
    glEnd();

   

    glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex3f(2.25,0.65,0.601);
    glVertex3f(2.55,0.65,0.601);
    glVertex3f(2.55,0.25,0.601);
    glVertex3f(2.25,0.25,0.601);
    glEnd();

   
    glBegin(GL_QUADS);

    glVertex3f(1.8,0.65,0.601);
    glVertex3f(2.0,0.65,0.601);
    glVertex3f(2.0,0.40,0.601);
    glVertex3f(1.8,0.40,0.601);
    glEnd();

    glBegin(GL_QUADS);

    glVertex3f(1.5,0.65,0.601);
    glVertex3f(1.7,0.65,0.601);
    glVertex3f(1.7,0.40,0.601);
    glVertex3f(1.5,0.40,0.601);
    glEnd();

    glBegin(GL_QUADS);

    glVertex3f(1.2,0.65,0.601);
    glVertex3f(1.4,0.65,0.601);
    glVertex3f(1.4,0.40,0.601);
    glVertex3f(1.2,0.40,0.601);
    glEnd();

    glBegin(GL_QUADS);

    glVertex3f(0.9,0.65,0.601);
    glVertex3f(1.1,0.65,0.601);
    glVertex3f(1.1,0.40,0.601);
    glVertex3f(0.9,0.40,0.601);
    glEnd();

    glBegin(GL_QUADS);

    glVertex3f(0.6,0.65,0.601);
    glVertex3f(0.8,0.65,0.601);
    glVertex3f(0.8,0.40,0.601);
    glVertex3f(0.6,0.40,0.601);
    glEnd();

    glBegin(GL_QUADS);

    glVertex3f(0.3,0.65,0.601);
    glVertex3f(0.5,0.65,0.601);
    glVertex3f(0.5,0.40,0.601);
    glVertex3f(0.3,0.40,0.601);
    glEnd();



    glColor3f(0.7,0.7,0.7);
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.62);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.18);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(2.0,0.2,0.18);
        glVertex3f(2.0+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(2.0,0.2,0.62);
        glVertex3f(2.0+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();




    glTranslatef(0.6,0.2,0.6);
    glColor3f(0,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();


    glTranslatef(0,0,-0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();


    glTranslatef(1.4,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();


    glTranslatef(0,0,0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();

    glTranslatef(0.2,0.15,-0.10);
    glPushMatrix();
    glColor3f(1,1,1);
    glRotatef(90,0.0,1.0,0.0);
    glutSolidTorus(0.015,0.05,10,25);
    glPopMatrix();

    glTranslatef(0,0,-0.20);
    glPushMatrix();
    glColor3f(1,1,1);
    glRotatef(90,0.0,1.0,0.0);
    glutSolidTorus(0.015,0.05,10,25);
    glPopMatrix();

    glPopMatrix();

    glPopMatrix();
    glPopMatrix();
}



void drawTataTruck(float r,float g,float b)
{
    glPushMatrix();
    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(r,g,b);



   
    glColor3f(r,g,b);
    glBegin(GL_QUADS);

    glVertex3f(0.0,0.2,0.6);
    glVertex3f(0.0,0.35,0.6);
    glVertex3f(0.0,0.35,0.2);
    glVertex3f(0.0,0.2,0.2);
    glEnd();

   
    glColor3f(r,g,b);
    glBegin(GL_QUADS);

    glVertex3f(0.0,0.35,0.6);
    glVertex3f(0.4,0.4,0.6);
    glVertex3f(0.4,0.4,0.2);
    glVertex3f(0.0,0.35,0.2);
    glEnd();

   
    glColor3f(r,g,b);
    glBegin(GL_QUADS);

    glVertex3f(0.0,0.2,0.2);
    glVertex3f(0.0,0.35,0.2);
    glVertex3f(0.4,0.4,0.2);
    glVertex3f(0.4,0.2,0.2);
    glEnd();

   
    glColor3f(r,g,b);
    glBegin(GL_QUADS);

    glVertex3f(0.0,0.2,0.6);
    glVertex3f(0.0,0.35,0.6);
    glVertex3f(0.4,0.4,0.6);
    glVertex3f(0.4,0.2,0.6);
    glEnd();

   
    glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex3f(0.4,0.4,0.6);
    glVertex3f(0.45,0.65,0.6);
    glVertex3f(0.45,0.65,0.2);
    glVertex3f(0.4,0.4,0.2);
    glEnd();


   
    glColor3f(r,g,b);
    glBegin(GL_QUADS);

    glVertex3f(0.45,0.65,0.6);
    glVertex3f(1.0,0.65,0.6);
    glVertex3f(1.0,0.65,0.2);
    glVertex3f(0.45,0.65,0.2);
    glEnd();

   
    glColor3f(r,g,b);
    glBegin(GL_QUADS);

    glVertex3f(1,0.65,0.6);
    glVertex3f(1.0,0.65,0.2);
    glVertex3f(1.0,0.2,0.2);
    glVertex3f(1.0,0.2,0.6);
    glEnd();

  
    glColor3f(r,g,b);
    glBegin(GL_QUADS);

    glVertex3f(0.4,0.4,0.2);
    glVertex3f(1,0.4,0.2);
    glVertex3f(1.0,0.2,0.2);
    glVertex3f(0.4,0.2,0.2);
    glEnd();


  
    glColor3f(r,g,b);
    glBegin(GL_QUADS);

    glVertex3f(0.4,0.4,0.6);
    glVertex3f(1.0,0.4,0.6);
    glVertex3f(1.0,0.2,0.6);
    glVertex3f(0.4,0.2,0.6);
    glEnd();


   
    glColor3f(0,0,1);
    glBegin(GL_QUADS);

    glVertex3f(1.0,0.2,0.6);
    glVertex3f(2.2,0.2,0.6);
    glVertex3f(2.2,0.2,0.2);
    glVertex3f(1.0,0.2,0.2);
    glEnd();


    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_QUADS);

    glVertex3f(1.0,0.2,0.2);
    glVertex3f(1.0,0.55,0.2);
    glVertex3f(2.2,0.55,0.2);
    glVertex3f(2.2,0.2,0.2);
    glEnd();

    
    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_QUADS);

    glVertex3f(1.0,0.2,0.6);
    glVertex3f(1.0,0.55,0.6);
    glVertex3f(2.2,0.55,0.6);
    glVertex3f(2.2,0.2,0.6);
    glEnd();


    
    glColor3f(1,1,0);
    glBegin(GL_QUADS);

    glVertex3f(2.2,0.2,0.6);
    glVertex3f(2.2,0.4,0.6);
    glVertex3f(2.2,0.4,0.2);
    glVertex3f(2.2,0.2,0.2);
    glEnd();




 


    glColor3f(0.7,0.7,0.7);
    glPushMatrix();
    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.62);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(0.6,0.2,0.18);
        glVertex3f(0.6+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(1.8,0.2,0.18);
        glVertex3f(1.8+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.18);
    }
    glEnd();

    glBegin(GL_LINE_STRIP);
    for(theta=0; theta<360; theta=theta+20)
    {
        glVertex3f(1.8,0.2,0.62);
        glVertex3f(1.8+(0.08*(cos(((theta+angle)*3.14)/180))),0.2+(0.08*(sin(((theta+angle)*3.14)/180))),0.62);
    }
    glEnd();




    glTranslatef(0.6,0.2,0.6);
    glColor3f(0,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();


    glTranslatef(0,0,-0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();


    glTranslatef(1.2,0,0);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();


    glTranslatef(0,0,0.4);
    glPushMatrix();
    glRotatef(_angle,0.0,0.0,1.0);
    glutSolidTorus(0.040,0.085,10,25);
    glPopMatrix();



    glPopMatrix();

    glPopMatrix();
    glPopMatrix();
}

#endif
