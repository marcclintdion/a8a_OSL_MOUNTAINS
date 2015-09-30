setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, sideWalls_1_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sideWalls_1_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, sideWalls_1_POSITION[0],                   
                          sideWalls_1_POSITION[1],                   
                          sideWalls_1_POSITION[2]);                  

    Rotate(modelWorld,    sideWalls_1_ROTATE[0],                     
                          sideWalls_1_ROTATE[1],                     
                          sideWalls_1_ROTATE[2],                     
                          sideWalls_1_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, sideWalls_1_ROTATE[0],                     
                          sideWalls_1_ROTATE[1],                     
                          sideWalls_1_ROTATE[2],                     
                          sideWalls_1_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, sideWalls_1_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, sideWalls_1_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 2592, GL_UNSIGNED_INT, 0);           

