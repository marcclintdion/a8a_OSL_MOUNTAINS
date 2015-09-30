setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, mountains_Chain_3_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mountains_Chain_3_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, mountains_Chain_3_POSITION[0],                   
                          mountains_Chain_3_POSITION[1],                   
                          mountains_Chain_3_POSITION[2]);                  

    Rotate(modelWorld,    mountains_Chain_3_ROTATE[0],                     
                          mountains_Chain_3_ROTATE[1],                     
                          mountains_Chain_3_ROTATE[2],                     
                          mountains_Chain_3_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, mountains_Chain_3_ROTATE[0],                     
                          mountains_Chain_3_ROTATE[1],                     
                          mountains_Chain_3_ROTATE[2],                     
                          mountains_Chain_3_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, mountains_Chain_3_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, mountains_Chain_3_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 5757, GL_UNSIGNED_INT, 0);           

