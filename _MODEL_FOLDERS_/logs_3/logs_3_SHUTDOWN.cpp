    if(logs_3_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &logs_3_NORMALMAP);    
        logs_3_NORMALMAP = 0;                      
    }                                                              
    if(logs_3_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &logs_3_TEXTUREMAP);   
        logs_3_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(logs_3_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &logs_3_VBO);           
        logs_3_VBO  = 0;                           
    }                                                              
    if(logs_3_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &logs_3_INDICES_VBO);   
        logs_3_INDICES_VBO  = 0;                   
    }                                                              
