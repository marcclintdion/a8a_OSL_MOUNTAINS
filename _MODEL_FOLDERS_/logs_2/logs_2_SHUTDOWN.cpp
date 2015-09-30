    if(logs_2_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &logs_2_NORMALMAP);    
        logs_2_NORMALMAP = 0;                      
    }                                                              
    if(logs_2_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &logs_2_TEXTUREMAP);   
        logs_2_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(logs_2_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &logs_2_VBO);           
        logs_2_VBO  = 0;                           
    }                                                              
    if(logs_2_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &logs_2_INDICES_VBO);   
        logs_2_INDICES_VBO  = 0;                   
    }                                                              
