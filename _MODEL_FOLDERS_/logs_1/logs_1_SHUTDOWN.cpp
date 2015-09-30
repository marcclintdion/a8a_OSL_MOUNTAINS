    if(logs_1_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &logs_1_NORMALMAP);    
        logs_1_NORMALMAP = 0;                      
    }                                                              
    if(logs_1_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &logs_1_TEXTUREMAP);   
        logs_1_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(logs_1_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &logs_1_VBO);           
        logs_1_VBO  = 0;                           
    }                                                              
    if(logs_1_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &logs_1_INDICES_VBO);   
        logs_1_INDICES_VBO  = 0;                   
    }                                                              
