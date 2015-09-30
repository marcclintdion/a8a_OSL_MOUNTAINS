setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, sideWalls_2_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sideWalls_2_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, sideWalls_2_POSITION[0],                   
                          sideWalls_2_POSITION[1],                   
                          sideWalls_2_POSITION[2]);                  

    Rotate(modelWorld,    sideWalls_2_ROTATE[0],                     
                          sideWalls_2_ROTATE[1],                     
                          sideWalls_2_ROTATE[2],                     
                          sideWalls_2_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, sideWalls_2_ROTATE[0],                     
                          sideWalls_2_ROTATE[1],                     
                          sideWalls_2_ROTATE[2],                     
                          sideWalls_2_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, sideWalls_2_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, sideWalls_2_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 2592, GL_UNSIGNED_INT, 0);           

