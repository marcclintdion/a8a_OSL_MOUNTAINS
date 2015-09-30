    if(ground_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &ground_NORMALMAP);    
        ground_NORMALMAP = 0;                      
    }                                                              
    if(ground_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &ground_TEXTUREMAP);   
        ground_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(ground_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &ground_VBO);           
        ground_VBO  = 0;                           
    }                                                              
    if(ground_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &ground_INDICES_VBO);   
        ground_INDICES_VBO  = 0;                   
    }                                                              
