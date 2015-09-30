    if(windowTable_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &windowTable_NORMALMAP);    
        windowTable_NORMALMAP = 0;                      
    }                                                              
    if(windowTable_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &windowTable_TEXTUREMAP);   
        windowTable_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(windowTable_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &windowTable_VBO);           
        windowTable_VBO  = 0;                           
    }                                                              
    if(windowTable_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &windowTable_INDICES_VBO);   
        windowTable_INDICES_VBO  = 0;                   
    }                                                              
