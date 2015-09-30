setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, doorWindowEdges_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, doorWindowEdges_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, doorWindowEdges_POSITION[0],                   
                          doorWindowEdges_POSITION[1],                   
                          doorWindowEdges_POSITION[2]);                  

    Rotate(modelWorld,    doorWindowEdges_ROTATE[0],                     
                          doorWindowEdges_ROTATE[1],                     
                          doorWindowEdges_ROTATE[2],                     
                          doorWindowEdges_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, doorWindowEdges_ROTATE[0],                     
                          doorWindowEdges_ROTATE[1],                     
                          doorWindowEdges_ROTATE[2],                     
                          doorWindowEdges_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, doorWindowEdges_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, doorWindowEdges_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 906, GL_UNSIGNED_INT, 0);           

