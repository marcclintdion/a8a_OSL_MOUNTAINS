    if(mountains_Chain_2_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &mountains_Chain_2_NORMALMAP);    
        mountains_Chain_2_NORMALMAP = 0;                      
    }                                                              
    if(mountains_Chain_2_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &mountains_Chain_2_TEXTUREMAP);   
        mountains_Chain_2_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(mountains_Chain_2_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &mountains_Chain_2_VBO);           
        mountains_Chain_2_VBO  = 0;                           
    }                                                              
    if(mountains_Chain_2_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &mountains_Chain_2_INDICES_VBO);   
        mountains_Chain_2_INDICES_VBO  = 0;                   
    }                                                              
