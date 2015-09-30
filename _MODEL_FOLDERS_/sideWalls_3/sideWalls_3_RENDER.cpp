setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, sideWalls_3_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sideWalls_3_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, sideWalls_3_POSITION[0],                   
                          sideWalls_3_POSITION[1],                   
                          sideWalls_3_POSITION[2]);                  

    Rotate(modelWorld,    sideWalls_3_ROTATE[0],                     
                          sideWalls_3_ROTATE[1],                     
                          sideWalls_3_ROTATE[2],                     
                          sideWalls_3_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, sideWalls_3_ROTATE[0],                     
                          sideWalls_3_ROTATE[1],                     
                          sideWalls_3_ROTATE[2],                     
                          sideWalls_3_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, sideWalls_3_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, sideWalls_3_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 2592, GL_UNSIGNED_INT, 0);           

