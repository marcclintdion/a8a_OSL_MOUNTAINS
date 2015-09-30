setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, ground_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ground_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, ground_POSITION[0],                   
                          ground_POSITION[1],                   
                          ground_POSITION[2]);                  

    Rotate(modelWorld,    ground_ROTATE[0],                     
                          ground_ROTATE[1],                     
                          ground_ROTATE[2],                     
                          ground_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, ground_ROTATE[0],                     
                          ground_ROTATE[1],                     
                          ground_ROTATE[2],                     
                          ground_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, ground_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, ground_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);           

