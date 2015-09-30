    if(stools_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &stools_NORMALMAP);    
        stools_NORMALMAP = 0;                      
    }                                                              
    if(stools_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &stools_TEXTUREMAP);   
        stools_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(stools_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &stools_VBO);           
        stools_VBO  = 0;                           
    }                                                              
    if(stools_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &stools_INDICES_VBO);   
        stools_INDICES_VBO  = 0;                   
    }                                                              
