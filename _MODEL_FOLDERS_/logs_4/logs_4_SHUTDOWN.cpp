    if(logs_4_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &logs_4_NORMALMAP);    
        logs_4_NORMALMAP = 0;                      
    }                                                              
    if(logs_4_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &logs_4_TEXTUREMAP);   
        logs_4_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(logs_4_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &logs_4_VBO);           
        logs_4_VBO  = 0;                           
    }                                                              
    if(logs_4_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &logs_4_INDICES_VBO);   
        logs_4_INDICES_VBO  = 0;                   
    }                                                              
