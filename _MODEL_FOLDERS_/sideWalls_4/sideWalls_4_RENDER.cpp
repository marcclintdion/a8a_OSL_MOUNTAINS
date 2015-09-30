setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, sideWalls_4_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sideWalls_4_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, sideWalls_4_POSITION[0],                   
                          sideWalls_4_POSITION[1],                   
                          sideWalls_4_POSITION[2]);                  

    Rotate(modelWorld,    sideWalls_4_ROTATE[0],                     
                          sideWalls_4_ROTATE[1],                     
                          sideWalls_4_ROTATE[2],                     
                          sideWalls_4_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, sideWalls_4_ROTATE[0],                     
                          sideWalls_4_ROTATE[1],                     
                          sideWalls_4_ROTATE[2],                     
                          sideWalls_4_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, sideWalls_4_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, sideWalls_4_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 2592, GL_UNSIGNED_INT, 0);           

