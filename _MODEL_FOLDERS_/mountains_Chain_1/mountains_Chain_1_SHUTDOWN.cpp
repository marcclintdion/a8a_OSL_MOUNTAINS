    if(mountains_Chain_1_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &mountains_Chain_1_NORMALMAP);    
        mountains_Chain_1_NORMALMAP = 0;                      
    }                                                              
    if(mountains_Chain_1_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &mountains_Chain_1_TEXTUREMAP);   
        mountains_Chain_1_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(mountains_Chain_1_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &mountains_Chain_1_VBO);           
        mountains_Chain_1_VBO  = 0;                           
    }                                                              
    if(mountains_Chain_1_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &mountains_Chain_1_INDICES_VBO);   
        mountains_Chain_1_INDICES_VBO  = 0;                   
    }                                                              
