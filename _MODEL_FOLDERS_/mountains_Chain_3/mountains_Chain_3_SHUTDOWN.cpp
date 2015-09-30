    if(mountains_Chain_3_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &mountains_Chain_3_NORMALMAP);    
        mountains_Chain_3_NORMALMAP = 0;                      
    }                                                              
    if(mountains_Chain_3_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &mountains_Chain_3_TEXTUREMAP);   
        mountains_Chain_3_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(mountains_Chain_3_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &mountains_Chain_3_VBO);           
        mountains_Chain_3_VBO  = 0;                           
    }                                                              
    if(mountains_Chain_3_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &mountains_Chain_3_INDICES_VBO);   
        mountains_Chain_3_INDICES_VBO  = 0;                   
    }                                                              
