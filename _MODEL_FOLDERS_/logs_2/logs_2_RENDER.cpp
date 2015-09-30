setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, logs_2_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, logs_2_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, logs_2_POSITION[0],                   
                          logs_2_POSITION[1],                   
                          logs_2_POSITION[2]);                  

    Rotate(modelWorld,    logs_2_ROTATE[0],                     
                          logs_2_ROTATE[1],                     
                          logs_2_ROTATE[2],                     
                          logs_2_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, logs_2_ROTATE[0],                     
                          logs_2_ROTATE[1],                     
                          logs_2_ROTATE[2],                     
                          logs_2_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, logs_2_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, logs_2_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 1152, GL_UNSIGNED_INT, 0);           

