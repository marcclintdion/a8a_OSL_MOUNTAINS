setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, stools_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, stools_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, stools_POSITION[0],                   
                          stools_POSITION[1],                   
                          stools_POSITION[2]);                  

    Rotate(modelWorld,    stools_ROTATE[0],                     
                          stools_ROTATE[1],                     
                          stools_ROTATE[2],                     
                          stools_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, stools_ROTATE[0],                     
                          stools_ROTATE[1],                     
                          stools_ROTATE[2],                     
                          stools_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, stools_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, stools_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 3360, GL_UNSIGNED_INT, 0);           

