setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, logs_4_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, logs_4_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, logs_4_POSITION[0],                   
                          logs_4_POSITION[1],                   
                          logs_4_POSITION[2]);                  

    Rotate(modelWorld,    logs_4_ROTATE[0],                     
                          logs_4_ROTATE[1],                     
                          logs_4_ROTATE[2],                     
                          logs_4_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, logs_4_ROTATE[0],                     
                          logs_4_ROTATE[1],                     
                          logs_4_ROTATE[2],                     
                          logs_4_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, logs_4_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, logs_4_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 1152, GL_UNSIGNED_INT, 0);           

