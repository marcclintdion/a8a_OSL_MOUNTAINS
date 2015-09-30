    if(bar_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &bar_NORMALMAP);    
        bar_NORMALMAP = 0;                      
    }                                                              
    if(bar_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &bar_TEXTUREMAP);   
        bar_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(bar_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &bar_VBO);           
        bar_VBO  = 0;                           
    }                                                              
    if(bar_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &bar_INDICES_VBO);   
        bar_INDICES_VBO  = 0;                   
    }                                                              
