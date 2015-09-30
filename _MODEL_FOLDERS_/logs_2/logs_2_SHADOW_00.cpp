    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-       
    setupTransforms_Shadows();                                                                   
    //========================                                                                   

    LoadIdentity(modelWorld);                                                                    
    //------------------------                                                                   
    glBindBuffer(GL_ARRAY_BUFFER, logs_2_VBO);                                   
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, logs_2_INDICES_VBO);                   
    //------------------------------------------------------------------------                   
    Translate(modelWorld, logs_2_POSITION[0],                                    
                          logs_2_POSITION[1],                                    
                          logs_2_POSITION[2]);                                   
    //------------------------------------------------------------------------                   
    Rotate(modelWorld,    logs_2_ROTATE[0],                                      
                          logs_2_ROTATE[1],                                      
                          logs_2_ROTATE[2],                                      
                          logs_2_ROTATE[3]);                                     
//=============================================                                                  
SelectShader(shaderNumber);                                                                      
//=============================================                                                  
    glDrawElements(GL_TRIANGLES, 1152, GL_UNSIGNED_INT, 0);      
