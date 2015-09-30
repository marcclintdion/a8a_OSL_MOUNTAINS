    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-       
    setupTransforms_Shadows();                                                                   
    //========================                                                                   

    LoadIdentity(modelWorld);                                                                    
    //------------------------                                                                   
    glBindBuffer(GL_ARRAY_BUFFER, logs_3_VBO);                                   
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, logs_3_INDICES_VBO);                   
    //------------------------------------------------------------------------                   
    Translate(modelWorld, logs_3_POSITION[0],                                    
                          logs_3_POSITION[1],                                    
                          logs_3_POSITION[2]);                                   
    //------------------------------------------------------------------------                   
    Rotate(modelWorld,    logs_3_ROTATE[0],                                      
                          logs_3_ROTATE[1],                                      
                          logs_3_ROTATE[2],                                      
                          logs_3_ROTATE[3]);                                     
//=============================================                                                  
SelectShader(shaderNumber);                                                                      
//=============================================                                                  
    glDrawElements(GL_TRIANGLES, 1152, GL_UNSIGNED_INT, 0);      
