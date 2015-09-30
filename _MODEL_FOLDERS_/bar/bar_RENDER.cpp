setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, bar_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, bar_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, bar_POSITION[0],                   
                          bar_POSITION[1],                   
                          bar_POSITION[2]);                  

    Rotate(modelWorld,    bar_ROTATE[0],                     
                          bar_ROTATE[1],                     
                          bar_ROTATE[2],                     
                          bar_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, bar_ROTATE[0],                     
                          bar_ROTATE[1],                     
                          bar_ROTATE[2],                     
                          bar_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, bar_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, bar_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 2466, GL_UNSIGNED_INT, 0);           

