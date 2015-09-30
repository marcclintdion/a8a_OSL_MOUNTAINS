    if(sign_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &sign_NORMALMAP);    
        sign_NORMALMAP = 0;                      
    }                                                              
    if(sign_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &sign_TEXTUREMAP);   
        sign_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(sign_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &sign_VBO);           
        sign_VBO  = 0;                           
    }                                                              
    if(sign_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &sign_INDICES_VBO);   
        sign_INDICES_VBO  = 0;                   
    }                                                              
