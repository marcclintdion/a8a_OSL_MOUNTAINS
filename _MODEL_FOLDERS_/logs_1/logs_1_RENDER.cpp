setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, logs_1_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, logs_1_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, logs_1_POSITION[0],                   
                          logs_1_POSITION[1],                   
                          logs_1_POSITION[2]);                  

    Rotate(modelWorld,    logs_1_ROTATE[0],                     
                          logs_1_ROTATE[1],                     
                          logs_1_ROTATE[2],                     
                          logs_1_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, logs_1_ROTATE[0],                     
                          logs_1_ROTATE[1],                     
                          logs_1_ROTATE[2],                     
                          logs_1_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, logs_1_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, logs_1_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 1152, GL_UNSIGNED_INT, 0);           

